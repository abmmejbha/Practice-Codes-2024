console.clear();

// event - onload() , onerror()
// property - response, responseText, responseURL, status, statusText,
// function - open(), send(), setRequestHeader()

const makeRequest = (method, url, data) => {

  const xhr = new XMLHttpRequest();
  xhr.open(method, url)

  xhr.setRequestHeader('Content-Type', "application/json")
  
  xhr.onload = () => {
    let data = xhr.response
    // converting data from json to object
    console.log(JSON.parse(data));
  }

  //error handling
  xhr.onerror = () => {
    console.log("error is here");
  }

  xhr.send(JSON.stringify(data))
  console.log(xhr);
};

// passing api to get data
const getData = () => {
    makeRequest('GET','https://jsonplaceholder.typicode.com/posts')
}

// send data through api 
const sendData = () => {
    makeRequest('POST','https://jsonplaceholder.typicode.com/posts',{
        title: 'foo',
        body: 'bar',
        userID: 1,
    })
}
const updateData = () => {
    makeRequest('PUT','https://jsonplaceholder.typicode.com/posts/1',{
        title: 'fooMa',
        body: 'barMa',
        userID: 1,
    })
}
const updateSingleData = () => {
    makeRequest('PATCH','https://jsonplaceholder.typicode.com/posts/1',{
        title: 'THis is changed',
    })
}
const deleteData = () => {
    makeRequest('DELETE','https://jsonplaceholder.typicode.com/posts/1',{

    })
}


// getData();
// sendData()
// updateData()
// updateSingleData()
deleteData()
