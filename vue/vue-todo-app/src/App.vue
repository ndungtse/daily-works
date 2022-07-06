<template>
    <router-view></router-view>
</template>


<script>
import Home from './Home.vue'
import Signup from './components/signup/signup.vue'

export default{
  name: 'App',
  components:{
      Home,
      Signup
  }
}
</script>