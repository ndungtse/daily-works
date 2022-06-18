<template>
    <header>
        <h1>{{title}}</h1>
        <Button @showAdd="$emit('showTask')"
         :text=" showAddTask ? 'Close' : 'Add Task' " 
         :color="showAddTask ? 'red' : 'green' " />
    </header>
</template>

<script>
import Button from './Button.vue'
export default {
    name: 'Header',
    props: {
        title: String,
        showAddTask: Boolean
    },
    components: {
        Button
    },
    methods: {
    },
}
</script>

<style scoped>
    header{
        display: flex;
        justify-content: space-between;
        align-items: center;
        margin-bottom: 20px;
    }
</style>