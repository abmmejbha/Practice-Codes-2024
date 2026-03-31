// no expirey date: data never gets lsot even if you close the browser

// local storage data as key value pair - string 

// setItem(key, value)
localStorage.setItem("userName", "ABM Mejbha")
localStorage.setItem("password", "amitobak")

// getItem(key)
const userName = localStorage.getItem("userName")
const userPassword = localStorage.getItem("password")
console.log(userName, userPassword);

//removeItem(key)
localStorage.removeItem(userName)
console.log("ai");