### Table of Contents

* *[NodeJS APIs](nodejs-api.md)*
* *[NodeJS Coding Practice](nodejs-programming.md)*
* *[NodeJS Commands](nodejs-commands.md)*

| No. | Questions |
|---- | ---------
|1  | [Node.js and Where can you use it?](#Nodejs-and-Where-can-you-use-it) |
|2  | [What does the runtime environment mean in Node.js?](#q-what-does-the-runtime-environment-mean-in-nodejs)|
|3  | [How is Node.js better than other frameworks most popularly used ?](#q-What-are-the-benefits-of-using-Nodejs)|
|3  | [What are the benefits of using Node.js?](#q-What-are-the-benefits-of-using-Nodejs)|
|4  | [What is Node.js Process Model?](#q-what-is-nodejs-process-model)|
|5  | [How do Node.js works?](#q-how-do-nodejs-works)|
|2  | [Node.js Single-threaded](#what-is-a-prototype-chain)|
|6  | [If Node.js is single-threaded, then how does it handle concurrency](#what-is-a-prototype-chain)|
|7  | [Single Threaded Event Loop Model Processing Steps](#Single-Threaded-Event-Loop-Model-Processing-Steps)|
|2  | [event-loop](#eventloop)|
|   | [What are the data types in Node.js?](#q-what-are-the-data-types-in-nodejs)|
|2  | [Explain usage of NODE_ENV?](#Explain-usage-of-NODE_ENV)|
|2  | [How to create a simple server in Node.js that returns Hello World?](#q-How-to-create-a-simple-server-in-Nodejs-that-returns-Hello-World)|
|2  | [Explain the concept of URL module in Node.js?](#q-Explain-the-concept-of-URL-module-in-Nodejs?)|

|2  | [types of API functions are there in Node.js](#what-is-a-prototype-chain)|

|2  | [NPM](#what-is-a-prototype-chain)|
|4  | [modules in Node.js](#what-is-json-and-its-common-operations)|
|5  | [purpose of the module.Exports](#what-is-the-purpose-of-the-array-slice-method)|
|6  | [different types of HTTP requests](#what-is-the-purpose-of-the-array-splice-method)|
|7  | [commonly used timing features of Node.js](#what-is-the-difference-between-slice-and-splice)|
|8  | [package.json file](#how-do-you-compare-object-and-map)|
|9  | [Express](#what-is-the-difference-between--and--operators)|
|12 | [how express helps you to create a backend application](#what-is-a-first-order-function)|<- prepbytes
|10 | [Explain the concept of middleware in Node.js.](#what-are-lambda-or-arrow-functions)|
|11 | [Explain CORS](#what-is-a-first-class-function)|
|13 | [Explain min 5 status codes gets used in Backend development](#what-is-a-higher-order-function)|
|14 | [Difference between HTTP and HTTPS](#what-is-a-unary-function)|
|15 | [What are JWT tokens?](#what-is-the-currying-function)|
|16 | [What are the data types in Node.js](#what-is-a-pure-function)| <- linkdin
|12 | [When should you npm and when yarn](#what-is-a-first-order-function)|
|10 | [What is REPL? What purpose it is used for](#what-are-lambda-or-arrow-functions)|
|11 | [What is EventEmitter in Node.js?](#what-is-a-first-class-function)|
|13 | [What is an error-first callback](#what-is-a-higher-order-function)|
|14 | [What is Node.js Process Model?](#what-is-a-unary-function)|
|15 | [What is chaining process in Node.js](#what-is-the-currying-function)|
|16 | [What is the use of DNS module in Node.js](#what-is-a-pure-function)|
|16 | [Name the types of API functions in Node.js](#what-is-a-pure-function)|
|12 | [How does Node.js handle child threads](#what-is-a-first-order-function)|
|10 | [What are globals in Node.js?](#what-are-lambda-or-arrow-functions)|
|11 | [How to load html in Node.js?](#what-is-a-first-class-function)|
|13 | [How to handle file upload in Node js](#what-is-a-higher-order-function)|
|14 | [How to use Q promise in node js](#what-is-a-unary-function)|
|15 | [Explain RESTful Web Services in Node.js?](#what-is-the-currying-function)|
|16 | [How to Implement Memcached in Nodejs?](#what-is-a-pure-function)|
|11 | [Why should you separate Express ‘app’ and‘server’?](#what-is-a-first-class-function)|
|13 | [How to build a microservices architecture with nodejs](#what-is-a-higher-order-function)|
|14 | [How Node prevents blocking code](#what-is-a-unary-function)|
|15 | [What is the difference between Node.js vs Ajax](#what-is-the-currying-function)|
|16 | [Why npm shrinkwrap is useful?](#what-is-a-pure-function)|
|14 | [How to make post request in Node.js](#what-is-a-unary-function)|
|15 | [](#what-is-the-currying-function)|
|16 | [](#what-is-a-pure-function)|
|14 | [](#what-is-a-unary-function)|
|15 | [](#what-is-the-currying-function)|
|16 | [](#what-is-a-pure-function)|


### ***Node.js and Where can you use it?***

Node.js is an open-source server side runtime environment built on Chrome\'s V8 JavaScript engine. It provides an event driven, non-blocking (asynchronous) I/O and cross-platform runtime environment for building highly scalable server-side applications using JavaScript.

### Where can you use it ? 
  Node.js is perfect for data-intensive applications as it uses an asynchronous, event-driven model.we can use I/O intensive web applications     like video streaming sites.we can also use it for developing: 
  
    Real-time web applications,
    Network applications,
    General-purpose applications and 
    Distributed systems.

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What are the benefits of using Node.js?***

From a web server development perspective Node has a number of benefits:

  * Great performance! Node was designed to optimize throughput and scalability in web applications and is a good solution for many common web-development problems (e.g. real-time web applications).

  * Code is written in "plain old JavaScript", which means that less time is spent dealing with "context shift" between languages when you're writing both client-side and server-side code. 

  * JavaScript is a relatively new programming languages and benefits from improvements in language design when compared to other traditional web-server languages (e.g. Python, PHP,  etc.) Many other new and pouplar languages compile/convert into JavaScript so you can use TypeScript, CoffeeScript, ClojureScript, Scala, LiveScript, etc.

  * The node package manager (NPM) provides access to hundres of thousands of resuable packages. It also has best-in-class dependency resolution and can also be used to automate most of the build toolchain.

  * Node.js is portable. It is available on Microsoft Windows, macOS, Linux, Solaris, FreeBSD, OpenBSD, WebOS, and NonStop OS. Furthermore, it is well-supported by many web hosting providers, that often provide specific infrastrucutre and documentation for hosting 
    Node sites.

  * It has a very active third party ecosystem and developer community, with lots of people who are willing to help. 
  
**[⬆ Back to Top](#table-of-contents)** 

## Q. **How is Node.js better than other frameworks most popularly used ?**
-Node.js provides simplicity in development because of its non-blocking I/O and even-based model results in short response time and concurrent processing, unlike       other frameworks where developers have to use thread management.
-It runs on a chrome v8 engine which is written in c++ and is highly performant with constant improvement. 
-since we will use Javascript in both the frontend and backend the development will be much faster. 
-Better synchronization of code between server and client due to same code base
-And at last, there are ample libraries so that we don’t need to reinvent the wheel.
 
**[⬆ Back to Top](#table-of-contents)** 
 
## Q. ***What does the runtime environment mean in Node.js?***

The Node.js runtime is the software stack responsible for installing your web service\'s code and its dependencies and running your service.

The Node.js runtime for App Engine in the standard environment is declared in the `app.yaml` file:

```js
runtime: nodejs10
```

The runtime environment is literally just the environment our application is running in. This can be used to describe both the hardware and the software that is running our application. How much RAM, what version of node, what operating system, how much CPU cores, can all be referenced when talking about a runtime environment.

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What is Node.js Process Model?***

Node.js runs in a single process and the application code runs in a single thread and thereby needs less resources than other platforms. All the user requests to your web application will be handled by a single thread and all the I/O work or long running job is performed asynchronously for a particular request. So, this single thread doesn't have to wait for the request to complete and is free to handle the next request. When asynchronous I/O work completes then it processes the request further and sends the response.

**[⬆ Back to Top](#table-of-contents)**

## Q. **event-loop**
in Node JS:Event loops handle asynchronous callbacks in Node.js. It is the foundation of the non-blocking input/output in Node.js, 
Node.js overcome the problem of blocking of I/O operations.
the node has an event-loop that can be used to handle all asynchronous operation without blocking the main function. 
So for example, if some network call needs to happen it will be scheduled in the event loop instead of the main thread(single thread). And if there are multiple such   I/O calls each one will be queued accordingly to be executed separately(other than the main thread). Thus even though we have single-threaded JS, I/O ops are handled   in a nonblocking way.

**[⬆ Back to Top](#table-of-contents)**

## Q. **Node.js work**

![image](https://user-images.githubusercontent.com/92531202/167253184-69f6d4eb-df3e-47db-89c5-b2c109bced20.png)

Node is completely event-driven. Basically the server consists of one thread processing one event after another.

A new request coming in is one kind of event. The server starts processing it and when there is a blocking IO operation, it does not wait until it completes and instead registers a callback function. The server then immediately starts to process another event (maybe another request). When the IO operation is finished, that is another kind of event, and the server will process it (i.e. continue working on the request) by executing the callback as soon as it has time.

So the server never needs to create additional threads or switch between threads, which means it has very little overhead. If you want to make full use of multiple hardware cores, you just start multiple instances of node.js

Node JS Platform does not follow Request/Response Multi-Threaded Stateless Model. It follows Single Threaded with Event Loop Model. Node JS Processing model mainly based on Javascript Event based model with Javascript callback mechanism.  

**[⬆ Back to Top](#table-of-contents)**

## Q. **Single Threaded Event Loop Model Processing Steps:**

* Clients Send request to Web Server.
* Node JS Web Server internally maintains a Limited Thread pool to provide services to the Client Requests.
* Node JS Web Server receives those requests and places them into a Queue. It is known as “Event Queue”.
* Node JS Web Server internally has a Component, known as “Event Loop”. Why it got this name is that it uses indefinite loop to receive requests and process them. 
* Event Loop uses Single Thread only. It is main heart of Node JS Platform Processing Model.
* Event Loop checks any Client Request is placed in Event Queue. If no, then wait for incoming requests for indefinitely.
* If yes, then pick up one Client Request from Event Queue
    * Starts process that Client Request
    * If that Client Request Does Not requires any Blocking IO Operations, then process everything, prepare response and send it back to client.
    * If that Client Request requires some Blocking IO Operations like interacting with Database, File System, External Services then it will follow different approach
        * Checks Threads availability from Internal Thread Pool
        * Picks up one Thread and assign this Client Request to that thread.
        * That Thread is responsible for taking that request, process it, perform Blocking IO operations, prepare response and send it back to the Event Loop
        * Event Loop in turn, sends that Response to the respective Client.

**[⬆ Back to Top](#table-of-contents)**

## Q. **Node.js Single-threaded**
Node.js is single-threaded for async processing. By doing async processing on a single-thread under typical web loads, more performance and                              scalability can be achieved instead of the typical thread-based implementation.

**[⬆ Back to Top](#table-of-contents)**

### If Node.js is single-threaded, then how does it handle concurrency
The Multi-Threaded Request/Response Stateless Model is not followed by the Node JS Platform, and it adheres to the Single-Threaded Event Loop Model. The Node JS       Processing paradigm is heavily influenced by the JavaScript Event-based model and the JavaScript callback system. As a result, Node.js can easily manage more           concurrent client requests. The event loop is the processing model's beating heart in Node.js.

**[⬆ Back to Top](#table-of-contents)**

## Q. ***Explain usage of NODE_ENV?***

NODE_ENV is an environment variable made popular by the express web server framework. When a node application is run, it can check the value of the environment variable and do different things based on the value.

For example, when we work on a project and there are production and development environments. We don't need to use caching in the development env. So we set
 ```bash 
 $ NODE_ENV=development
 ``` 

and use the code below 
```js
if (process.env.NODE_ENV === 'development')
    useCaching = false;
```
Upon that, if the project runs on production it will use caching.

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What are the data types in Node.js?***

Just like JS, there are two categories of data types in Node: Primitives and Objects.

*Primitives*

* String
* Number
* Bigint
* Boolean
* Undefined
* Null
* Symbol

*Objects* 

* Function

* Array

* `Buffer`: Node.js includes an additional data type called Buffer (not available in browser\'s JavaScript). Buffer is mainly used to store binary data, while reading from a file or receiving packets over the network. `Buffer` is a class.

* other regular objects

**[⬆ Back to Top](#table-of-contents)**

## Q. ***How to create a simple server in Node.js that returns Hello World?***

**Step 01**: Create a project directory

```bash
mkdir myapp
cd myapp
```

**Step 02**: Initialize project and link it to npm

```bash
npm init
```

This creates a `package.json` file in your myapp folder. The file contains references for all npm packages you have downloaded to your project. The command will prompt you to enter a number of things.
You can enter your way through all of them EXCEPT this one:

```bash
entry point: (index.js)
```

Rename this to:

```bash
app.js
```

**Step 03**: Install Express in the myapp directory

```bash
npm install express --save
```

**Step 04**: app.js

```js
var express = require('express');
var app = express();
app.get('/', function (req, res) {
  res.send('Hello World!');
});

app.listen(3000, function () {
  console.log('Example app listening on port 3000!');
});
```

**Step 05**: Run the app

```bah
node app.js
```

**[⬆ Back to Top](#table-of-contents)**

## Q. ***Explain the concept of URL module in Node.js?***

The URL module in Node.js splits up a web address into readable parts. Use ```require()``` to include the module:

```javascript
var url = require('url');
```
Then parse an address with the ```url.parse()``` method, and it will return a URL object with each part of the address as properties.

```javascript
var url = require('url');
var adr = 'http://localhost:8080/default.htm?year=2021&month=september';
var q = url.parse(adr, true);

console.log(q.host); //returns 'localhost:8080'
console.log(q.pathname); //returns '/default.htm'
console.log(q.search); //returns '?year=2021&month=september'

var qdata = q.query; //returns an object: { year: 2021, month: 'september' }
console.log(qdata.month); //returns 'september'
```


**[⬆ Back to Top](#table-of-contents)**

## Q. ***What is the difference between Node.js, AJAX, and JQuery?***

Node.js is a javascript runtime that makes it possible for us to write back-end of applications.

Asynchronous JavaScript and XML(AJAX) refers to group of technologies that we use to send requests to web servers and retrieve data from them without reloading the page.

Jquery is a simple javascript library that helps us with front-end development.


**[⬆ Back to Top](#table-of-contents)**

### types of API functions are there in Node.js
There are two types of API functions
1.Asynchronous, non-blocking functions - mostly I/O operations which can be fork out of the main loop.
2.Synchronous, blocking functions - mostly operations that influence the process running in the main loop

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What are the core modules of Node.js?***
They are defined within the Node.js source and are located in the lib/ folder, and Node.js has several modules compiled into the binary. 

Core modules are always preferentially loaded if their identifier is passed to ```require()```. For instance, ```require('http')``` will always return the built in HTTP module, even if there is a file by that name.

Core modules can also be identified using the ```node:``` prefix, in which case it bypasses the require cache. For instance, ```require('node:http')``` will always return the built in HTTP module, even if there is ```require.cache``` entry by that name.

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What is callback function in Node.js?***

In node.js, we basically use callbacks for handling asynchronous operations like — making any I/O request, database operations or calling an API to fetch some data. Callback allows our code to not get blocked when a process is taking a long time.

```javascript
function myNew(next){
    console.log("Im the one who initates callback");
    next("nope", "success");
}

myNew(function(err, res){
    console.log("I got back from callback",err, res);
});
```

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What is an error-first callback?***

The pattern used across all the asynchronous methods in Node.js is called *Error-first Callback*. Here is an example:

```javascript
fs.readFile( "file.json", function ( err, data ) {
  if ( err ) {
    console.error( err );
  }
  console.log( data );
});
```

Any asynchronous method expects one of the arguments to be a callback. The full callback argument list depends on the caller method, but the first argument is always an error object or null. When we go for the asynchronous method, an exception thrown during function execution cannot be detected in a try/catch statement. The event happens after the JavaScript engine leaves the try block. 

In the preceding example, if any exception is thrown during the reading of the file, it lands on the callback function as the first and mandatory parameter.

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What is callback hell in Node.js?***

`Callback hell` is a phenomenon that afflicts a JavaScript developer when he tries to execute multiple asynchronous operations one after the other.

An asynchronous function is one where some external activity must complete before a result can be processed; it is “asynchronous” in the sense that there is an unpredictable amount of time before a result becomes available. Such functions require a callback function to handle errors and process the result.

```javascript
getData(function(a){
    getMoreData(a, function(b){
        getMoreData(b, function(c){ 
            getMoreData(c, function(d){ 
	            getMoreData(d, function(e){ 
		            ...
		        });
	        });
        });
    });
});
```

**Techniques for avoiding callback hell**

1. Using Async.js
1. Using Promises
1. Using Async-Await

* **Managing callbacks using Async.js**  

`Async` is a really powerful npm module for managing asynchronous nature of JavaScript. Along with Node.js, it also works for JavaScript written for browsers.

Async provides lots of powerful utilities to work with asynchronous processes under different scenarios.

```bash
npm install --save async
```

* **ASYNC WATERFALL**  

```javascript
var async = require('async');
async.waterfall([
    function(callback) {
        //doSomething
        callback(null, paramx); //paramx will be availaible as the first parameter to the next function
        /**
            The 1st parameter passed in callback.
            @null or @undefined or @false control moves to the next function
            in the array
            if @true or @string the control is immedeatly moved
            to the final callback fucntion
            rest of the functions in the array
            would not be executed
        */
    },
    function(arg1, callback) {
        //doSomething else
      // arg1 now equals paramx
        callback(null, result);
    },
    function(arg1, callback) {
        //do More
        // arg1 now equals result
        callback(null, 'done');
    },
    function(arg1, callback) {
        //even more
        // arg1 now equals 'done'
        callback(null, 'done');
    }
], function (err, result) {
    //final callback function
    //finally do something when all function are done.
    // result now equals 'done'
});
```

* **ASYNC SERIES**  

```javascript
var async = require('async');
async.series([
    function(callback){
        // do some stuff ...
        callback(null, 'one');
        /**
            The 1st parameter passed in callback.
            @null or @undefined or @false control moves to the next function
            in the array
            if @true or @string the control is immedeatly moved
            to the final callback fucntion with the value of err same as
            passed over here and
            rest of the functions in the array
            would not be executed
        */
    },
    function(callback){
        // do some more stuff ...
        callback(null, 'two');
    }
],
// optional callback
function(err, results){
    // results is now equal to ['one', 'two']
});
```

* **Managing callbacks hell using promises**  

Promises are alternative to callbacks while dealing with asynchronous code. Promises return the value of the result or an error exception. The core of the promises is the `.then()` function, which waits for the promise object to be returned. The `.then()` function takes two optional functions as arguments and depending on the state of the promise only one will ever be called. The first function is called when the promise if fulfilled (A successful result). The second function is called when the promise is rejected.

```javascript
var outputPromise = getInputPromise().then(function (input) {
    //handle success
}, function (error) {
    //handle error
});
```

* **Using Async Await**  

Async await makes asynchronous code look like it\’s synchronous. This has only been possible because of the reintroduction of promises into node.js. Async-Await only works with functions that return a promise.

```javascript
const getrandomnumber = function(){
    return new Promise((resolve, reject)=>{
        setTimeout(() => {
            resolve(Math.floor(Math.random() * 20));
        }, 1000);
    });
}

const addRandomNumber = async function(){
    const sum = await getrandomnumber() + await getrandomnumber();
    console.log(sum);
}

addRandomNumber();
```

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What are Promises in Node.js?***

It allows to associate handlers to an asynchronous action\'s eventual success value or failure reason. This lets asynchronous methods return values like synchronous methods: instead of the final value, the asynchronous method returns a promise for the value at some point in the future.

Promises in node.js promised to do some work and then had separate callbacks that would be executed for success and failure as well as handling timeouts. Another way to think of promises in node.js was that they were emitters that could emit only two events: success and error.The cool thing about promises is you can combine them into dependency chains (do Promise C only when Promise A and Promise B complete).

The core idea behind promises is that a promise represents the result of an asynchronous operation. A promise is in one of three different states:

* pending - The initial state of a promise.
* fulfilled - The state of a promise representing a successful operation.
* rejected - The state of a promise representing a failed operation.
Once a promise is fulfilled or rejected, it is immutable (i.e. it can never change again).  

**Creating a Promise**

```javascript
var myPromise = new Promise(function(resolve, reject){
   ....
})
```

**[⬆ Back to Top](#table-of-contents)**

## Q. ***How assert works in Node.js?***
The assert module provides a way of testing expressions. If the expression evaluates to 0, or false, an assertion failure is being caused, and the program is terminated.

This module was built to be used internally by Node.js.

```
// Sample usage

const assert = require('assert');
assert(50 > 70, "50 is less than 70.");
```

**[⬆ Back to Top](#table-of-contents)**

## Q. ***What tools can be used to assure consistent style?***

* ESLint
* Standard

**[⬆ Back to Top](#table-of-contents)**

### NPM
NPM stands for Node Package Manager, responsible for managing all the packages and modules for Node.js
Provides online repositories for node.js packages/modules, which are searchable on search.nodejs.org
Provides command-line utility to install Node.js packages and also manages Node.js versions and dependencies

manage packages in your node.js project (Node Package Manager has over 50,000 bundles available at the developer’s disposal)
use npm or yarn. Both provide almost all libraries of javascript with extended features of controlling environment-specific configurations. To maintain versions of     libs being installed in a project we use package.json and package-lock.json so that there is no issue in porting that app to a different environment.


**[⬆ Back to Top](#table-of-contents)**

## Q. ***When should you npm and when yarn?***

* **npm**  

It is the default method for managing packages in the Node.js runtime environment. It relies upon a command line client and a database made up of public and premium packages known as the the npm registry. Users can access the registry via the client and browse the many packages available through the npm website. Both npm and its registry are managed by npm, Inc.

```bash
node -v
npm -v
```

* **Yarn**  

Yarn was developed by Facebook in attempt to resolve some of npm’s shortcomings. Yarn isn’t technically a replacement for npm since it relies on modules from the npm registry. Think of Yarn as a new installer that still relies upon the same npm structure. The registry itself hasn’t changed, but the installation method is different. Since Yarn gives you access to the same packages as npm, moving from npm to Yarn doesn’t require you to make any changes to your workflow.

```bash
npm install yarn --global
```

**[⬆ Back to Top](#table-of-contents)**

**Comparing Yarn vs npm**

* Fast: Yarn caches every package it downloads so it never needs to again. It also parallelizes operations to maximize resource utilization so install times are faster than ever.
* Reliable: Using a detailed, but concise, lockfile format, and a deterministic algorithm for installs, Yarn is able to guarantee that an install that worked on one system will work exactly the same way on any other system.
* Secure: Yarn uses checksums to verify the integrity of every installed package before its code is executed.
* Offline Mode: If you've installed a package before, you can install it again without any internet connection.
* Deterministic: The same dependencies will be installed the same exact way across every machine regardless of install order.
* Network Performance: Yarn efficiently queues up requests and avoids request waterfalls in order to maximize network utilization.
* Multiple Registries: Install any package from either npm or Bower and keep your package workflow the same.
* Network Resilience: A single request failing won't cause an install to fail. Requests are retried upon failure.
* Flat Mode: Resolve mismatching versions of dependencies to a single version to avoid creating duplicates.

**[⬆ Back to Top](#table-of-contents)**

### modules in Node.js
Modules are like JavaScript libraries that can be used in a Node.js application to include a set of functions. To include a module in a Node.js     application, use the require() function with the parentheses containing the module's name.
Node.js has many modules to provide the basic functionality needed for a web application. 
-HTTP: Includes classes, methods, and events to create a Node.js HTTP server. and same as HTTPS but it is secure
-util: Includes utility functions useful for developers.
-fs: Includes events, classes, and methods to deal with file I/O operations.
-url: Includes methods for URL parsing
-query string: Includes methods to work with query string
-stream: Includes methods to handle streaming data
-zlib: Includes methods to compress or decompress files.

### purpose of the module.Exports
In Node.js, a module encapsulates all related codes into a single unit of code that can be parsed by moving all relevant functions into a single file. You may export a module with the module and export the function, which lets it be imported into another file with a needed keyword. 

### different types of HTTP requests
GET:- method is used to read (or retrieve) a representation of a resource. In case of success (or non-error), GET returns a representation in JSON and an HTTP response status code of 200 (OK). In an error case, it most often returns a 404 (NOT FOUND) or 400 (BAD REQUEST).

POST:- (POST is used to send data to a server, this data will be considered as new entry in the database)
method is most often utilized to create new resources. In particular, it is used to create subordinate resources. That is subordinate to some other (e.g. parent) resource. In other words, when creating a new resource, POST to the parent and the service takes care of associating the new resource with the parent, assigning an ID (new resource URI), etc.On successful creation, HTTP response code 201 is returned.

PUT:- creates a new resource or replaces a representation of the target resource with the request payload.

DELETE:-It is used to delete a resource identified by filters or ID. On successful deletion, the HTTP response status code 204 (No Content) returns with no response body.

### commonly used timing features of Node.js
setTimeout/clearTimeout – This is used to implement delays in code execution.
setInterval/clearInterval – This is used to run a code block multiple times.
setImmediate/clearImmediate – Any function passed as the setImmediate() argument is a callback that's executed in the next iteration of the event loop.
process.nextTick – Both setImmediate and process.nextTick appear to be doing the same thing; however, you may prefer one over the other depending on your             callback’s urgency.
    
### package.json file
The package.json file is the heart of a Node.js system. This file holds the metadata for a particular project. The package.json file is found in   the root directory of any Node application or module This is what a package.json file looks like immediately after creating a Node.js project using the command:     'npm init'
 
### Express
Express is a flexible Node.js web application framework that provides a wide set of features to develop both web and mobile applications
(creating server-side web applications faster and smarter. Simplicity, minimalism, flexibility, scalability are some of its characteristics )
The request object represents the HTTP request and has properties for the request query string, parameters, body, HTTP headers, and so on
The response object represents the HTTP response that an Express app sends when it receives an HTTP request
    

    
    
    
    
    
    
    
    
    
    
    
    
    


