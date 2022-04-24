👉Node.js and Where can you use it ? 
  Node.js is an open-source, cross-platform, JavaScript runtime environment built on Chrome's V8 JavaScript engine that executes JavaScript code outside a web browser.

  Where can you use it ? Node.js is perfect for data-intensive applications as it uses an asynchronous, event-driven model.we can use I/O intensive web applications     like video streaming sites.we can also use it for developing: 
                                       Real-time web applications,
                                       Network applications,
                                       General-purpose applications and 
                                       Distributed systems.

👉event-loop in Node JS:
                           
👉Node.js work:
![image](https://user-images.githubusercontent.com/92531202/164978158-b0788f6c-8d2b-4907-8a01-70085ac07ee7.png)
  1.Clients send requests to the webserver to interact with the web application. Requests can be non-blocking or blocking:post Querying for data,Deleting data,Updating     the data,
  2.Node.js retrieves the incoming requests and adds those to the Event Queue
  3.The requests are then passed one-by-one through the Event Loop. It checks if the requests are simple enough not to require any external resources.
  4.The Event Loop processes simple requests (non-blocking operations), such as I/O Polling, and returns the responses to the corresponding clients
  5.A single thread from the Thread Pool is assigned to a single complex request. This thread is responsible for completing a particular blocking request by accessing     external resources, such as computation, database, file system, etc.
  6.Once the task is carried out completely, the response is sent to the Event Loop that sends that response back to the client.

👉How is Node.js better than other frameworks most popularly used ?
   -Node.js provides simplicity in development because of its non-blocking I/O and even-based model results in short response time and concurrent processing, unlike       other frameworks where developers have to use thread management.
   -It runs on a chrome v8 engine which is written in c++ and is highly performant with constant improvement. 
   -since we will use Javascript in both the frontend and backend the development will be much faster. 
   -Better synchronization of code between server and client due to same code base
   -And at last, there are ample libraries so that we don’t need to reinvent the wheel.
   
👉Node.js Single-threaded:Node.js is single-threaded for async processing. By doing async processing on a single-thread under typical web loads, more performance and                              scalability can be achieved instead of the typical thread-based implementation.

👉If Node.js is single-threaded, then how does it handle concurrency? 
  The Multi-Threaded Request/Response Stateless Model is not followed by the Node JS Platform, and it adheres to the Single-Threaded Event Loop Model. The Node JS       Processing paradigm is heavily influenced by the JavaScript Event-based model and the JavaScript callback system. As a result, Node.js can easily manage more           concurrent client requests. The event loop is the processing model's beating heart in Node.js.

👉NPM:NPM stands for Node Package Manager, responsible for managing all the packages and modules for Node.js
  Provides online repositories for node.js packages/modules, which are searchable on search.nodejs.org
  Provides command-line utility to install Node.js packages and also manages Node.js versions and dependencies
  
👉manage packages in your node.js project (Node Package Manager has over 50,000 bundles available at the developer’s disposal)
  use npm or yarn. Both provide almost all libraries of javascript with extended features of controlling environment-specific configurations. To maintain versions of     libs being installed in a project we use package.json and package-lock.json so that there is no issue in porting that app to a different environment.

👉modules in Node.js: Modules are like JavaScript libraries that can be used in a Node.js application to include a set of functions. To include a module in a Node.js     application, use the require() function with the parentheses containing the module's name.
  Node.js has many modules to provide the basic functionality needed for a web application. 
  -HTTP: Includes classes, methods, and events to create a Node.js HTTP server. and same as HTTPS but it is secure
  -util: Includes utility functions useful for developers.
  -fs: Includes events, classes, and methods to deal with file I/O operations.
  -url: Includes methods for URL parsing
  -query string: Includes methods to work with query string
  -stream: Includes methods to handle streaming data
  -zlib: Includes methods to compress or decompress files.

👉purpose of the module .Exports: In Node.js, a module encapsulates all related codes into a single unit of code that can be parsed by moving all relevant functions into a single file. You may export a module with the module and export the function, which lets it be imported into another file with a needed keyword. 



