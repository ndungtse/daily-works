<template>
  <div class="w-full d-flex justify-content-center align-items-center">
    <form @submit="onSubmit" class="add-form">
      <div class="">
        <label for="">Full Name:</label>
        <input
          class="form-control"
          v-model="fullName"
          type="text"
          name="text"
          placeholder="Add Task"
        />
      </div>
      <div class="">
        <label for="">Occupation</label>
        <input
          class="form-control"
          v-model="occupation"
          type="text"
          name="text"
          placeholder="eg: student, teacher, bussinesman ...etc"
        />
      </div>
      <div class="">
        <label for="">Password</label>
        <input
          class="form-control"
          v-model="password"
          type="password"
          name="text"
          placeholder="Add Day & Time"
        />
      </div>
      <div class="d-flex align-items-center">
        <label for="">Agree with terms and Conditions</label>
        <input
          type="checkbox"
          v-model="agree"
          class="form-check-input ms-3 mt-3"
          name="reminder"
          required
        />
      </div>
      <input type="submit" value="Login" class="btn btn-primary mx-auto" />
    </form>
  </div>
</template>

<script>
export default {
  name: "Signup",
  data() {
    return {
      fullName: "",
      occupation: "",
      agree: false,
      password: "",
    };
  },
};
</script>

<style scoped>
label {
  margin-top: 20px;
}
.add-form {
  width: 50%;
}
</style>