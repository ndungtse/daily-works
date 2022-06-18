<template>
  <div>
  <div class="container">
    <Header
      @showTask="showAdd"
      title="Task Tracker"
      :showAddTask="showAddTask"
    />
    <AddTask v-show="showAddTask" @newtask="taskAdd" />
    <Tasks
      @toggle-reminder="toggleRem"
      @delete-task="deleteTask"
      :tasks="tasks"
    />
    <Footer />
  </div>
  </div>
</template>

<script>
import Header from "./components/Header.vue";
import Tasks from "./components/tasks.vue";
import AddTask from './components/AddTask.vue'
import Footer from './components/Footer.vue'

export default {
  name: "Home",
  components: {
    Header,
    Tasks,
    AddTask,
    Footer,
  },
  data() {
    return {
      tasks: [],
      showAddTask: false
    };
  },
  methods: {
    showAdd() {
      this.showAddTask = !this.showAddTask
    },

    async taskAdd(task) {
      const res = fetch('http://localhost:500/tasks', {
        method: 'POST',
        headers: {
          'Content-type': 'application/json',
        },
        body: JSON.stringify(task)
      })
      // const data = await res.json()

      this.tasks = [...this.tasks, task]
    },
    async deleteTask(id) {
      if (confirm('Are you sure?')) {
        const res = await fetch(`http://localhost:500/tasks/${id}`, {
          method: 'DELETE'
        })
        res.status === 200 ?( this.tasks = this.tasks.filter((task) => 
        task.id !== id)) : alert('Error deleting in task');
      }
    },
    async toggleRem(id){
      const taskToToggle = await this.fetchTask(id)
      const updatedTask = {...taskToToggle, reminder : !taskToToggle.reminder}

      const res = await fetch(`http://localhost:500/tasks/${id}`, {
        method: 'PUT',
        headers: {
          'Content-type': 'application/json'
        },
        body: JSON.stringify(updatedTask)
      })

      // console.log(res.data.json());

      this.tasks = this.tasks.map((task) =>
       task.id === id ? {...task, reminder: !task.reminder } : task)
    },
    async fetchTasks() {
      const res = await fetch('http://localhost:500/tasks');
      const data = await res.json()
      console.log(data);
      return data
    },
    async fetchTask(id) {
      const res = await fetch(`http://localhost:500/tasks/${id}`);
      const data = await res.json()
      return data
    },
  },
  async created() {
    this.tasks = await this.fetchTasks()
  },
};
</script>

<style>
@import url("https://fonts.googleapis.com/css2?family=Poppins:wght@300;400&display=swap");
* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}
body {
  font-family: "Poppins", sans-serif;
}
.container {
  max-width: 500px;
  margin: 30px auto;
  overflow: auto;
  min-height: 300px;
  border: 1px solid steelblue;
  padding: 30px;
  border-radius: 5px;
}
.btn {
  display: inline-block;
  color: #fff;
  border: none;
  padding: 10px 20px;
  margin: 5px;
  border-radius: 5px;
  cursor: pointer;
  text-decoration: none;
  font-size: 15px;
  font-family: inherit;
}
.btn:focus {
  outline: none;
}
.btn:active {
  transform: scale(0.98);
}
.btn-block {
  display: block;
  width: 100%;
}
</style>
