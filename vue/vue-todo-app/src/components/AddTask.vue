<template>
  <form @submit="onSubmit" class="add-form">
    <div class="">
      <label for="">Task</label>
      <input class="form-control" v-model="text"
       type="text" name="text" placeholder="Add Task" />
    </div>
    <div class="">
      <label for="">Day & Time</label>
      <input class="form-control" v-model="day"
      type="text" name="text" placeholder="Add Day & Time" />
    </div>
    <div class="d-flex">
      <label for="">Set Reminder</label>
      <input type="checkbox" v-model="reminder"
      class="form-check-input ms-3" name="reminder"/>
    </div>
    <input type="submit" value="Save Task" class="btn btn-primary btn-block mx-auto">
  </form>
</template>

<script>
export default {
    name: 'AddTask',

    data() {
        return {
            text: '',
            day: '',
            reminder: false
        }
    },
    methods: {
        onSubmit(e){
            e.preventDefault()
            if(!this.text){
                alert('Please add a task!')
                return
            }
            const newTask = {
                id: Math.floor(Math.random()* 10000000000),
                text: this.text,
                day: this.day,
                reminder: this.reminder,
            }

                this.$emit('newtask', newTask)
              
            this.text =''
            this.day =''
            this.reminder =''
        }
    },
}
</script>