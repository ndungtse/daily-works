<template>
    <div @dblclick="$emit('toggle-reminder', task.id)" :class="[task.reminder ? 'reminder' : '', 'task']">
        <h4>{{ task.text }}
            <i @click="$emit('delete-task', task.id)" class="bx bx-x"></i>
        </h4>
        <p>{{ task.day }}</p>
    </div>
</template>

<script>
export default {
    name: 'Task',
    props: {
        task: Object
    },
    methods: {
       onDelete(id) {
           this.$emit('delete-task', id)
       }
    },
}
</script>
<style scoped>
.task{
    padding: 10px 20px;
    background-color: aliceblue;
    margin-top: 10px;
    cursor: pointer;
}
.task.reminder{
    border-left: 5px solid green;
}
.task h4{
    display: flex;
    justify-content: space-between;
    width: 100%;
}
.task h4 i{
    color: red;
}
</style>
