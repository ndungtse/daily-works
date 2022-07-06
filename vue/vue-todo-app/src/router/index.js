import { createRouter, createWebHistory } from 'vue-router'
import Home from '../Home.vue'
import Signup from '../components/signup/signup.vue'

const routes = [
    {
        path: '/',
        name: 'Home',
        component: Home
    },
    {
        path: '/signup',
        name: 'Signup',
        component: Signup
    },
]

const router = createRouter({
    history: createWebHistory(process.env.BASE_URL),
    routes,
})

export default router
