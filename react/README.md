👉🏻what is react?
-> React is an open-source JavaScript Library created by Facebook(SPA - single page application) for creating dynamic and interactive applications and building better UI/UX design for web and mobile applications.it makes code easier to debug by dividing them into components.

👉🏻What are its features?
1.-> it build an application by using SPA - single page application means in normal web application ,in which when we are clicking on any button or selecting            option from navigation bar then the web page is reloading then that means that application is your "multi - page application".but in SPA does not reload the browser page and just only updates the page without reloading then that application is known as Single Page application. When we create React application using CRA, (create-react-app boilerplate , developed by Facebook) it always create the application which will be Single page application.

2.-> it uses special dom insted of "real-DOM" called virtual DOM means 
  In realDom, JavaScript Frameworks update the whole DOM at once, which makes the web application slow. But React uses virtual DOM, whenever any React                   application gets loaded on the screen for the first time., or React components get mounted on the screen for the first time. Now when any user makes any               changes on the screen like button click because of which the state variable will get updated so in this case the changes will not directly go to Real DOM.
  Instead, react uses virtual DOM. So we are having two virtual doms, one virtual dom gets created at the time of mounting of react component so it is a copy of         our real dom. Another virtual dom is the dom which contains the new changes, updated state variables values. Now these two virtual doms will get compared with         each other and will check for the new changes. this complete procedure is known as “diffing algorithm”. Now the new changes will be updated in your Real dom.           this procedure is known as "Reconciliation".
  So Manipulating the virtual DOM is much faster, thats way  A virtual DOM object is a representation of a DOM object, like a lightweight copy.

3.-> react use JSX(JavaScript Syntax Extension)
  JSX is a combination of HTML and JavaScript. We can embed JavaScript objects inside the HTML elements.But JSX is not supported by the browsers, as a result             Babel compiler transcompile the code into JavaScript code. JSX makes codes easy and understandable. It is easy to learn if we know HTML and JavaScript.

4.-> a special feature is One-way Data Binding:Follows Unidirectional data flow or data binding.The data in react flows only in one direction i.e. the data is           transferred from top to bottom i.e. from parent components to child components. The properties(props) in the child component cannot return the data to its             parent component but it can have communication with the parent components to modify the states according to the provided inputs. This is the working process of         one-way data binding. This keeps everything modular and fast.

5.-> Components:React.js is component-based, which means React.js divides the web page into multiple components as it is component-based.Each component is a                part of the UI design which has its own logic and design

6.-> Conditional Statements: JSX allows us to write conditional statements. The data in the browser is displayed according to the conditions provided inside the JSX.

👉🏻React v/s angular?




👉🏻client v/s server-side rendering ?
 server-side rendering:
    -In server-side rendering when a user makes a request to a webpage, the server prepares an HTML page by fetching user-specific data and sends it to the user’s       machine over the internet. The browser then construes the content and displays the page. This entire process of fetching data from the database, creating an HTML     page and sending it to client happens in mere milliseconds.
    -when user clicks a link on the page, the browser sends a request to the server and the entire process is carried out by the server again. This process not only      increases the load on the server but also consumes unnecessary internet bandwidth.
 client-side rendering:
    -client-side rendering, it’s about rendering content in the browser using JavaScript. So instead of getting all the content from the HTML document itself, a          bare-bones HTML document with a JavaScript file in initial loading itself is received, which renders the rest of the site using the browser.
    -With client-side rendering, the initial page load is naturally a bit slow. However, after that, every subsequent page load is very fast. In this approach,            communication with server happens only for getting the run-time data. Moreover, there is no need to reload the entire UI after every call to the server. The          client-side framework manages to update UI with changed data by re-rendering only that particular DOM element.
    -Angular and React.js are some of the best examples of libraries used in client-side rendering.
  application of each:
        -An application has very simple UI with fewer pages/features use server-side. v/s An application has very complex UI with many pages/features use client
        -An application has less dynamic data                                          |   An application has large and dynamic data
        -
 👉🏻super() v/s super(props) ?
 
 -In JavaScript, super refers to the parent class constructor. (In react class compoents, it points to the React.Component implementation.)
 -JavaScript enforces that if we want to use "this" keyword in a constructor, we have to call super first  
 -The super keyword is used to access and call functions on an object's parent.
 -this limitation applies to React components defined as classes too.
 -passing props down to super is necessary so that the base React.Component constructor can initialize this.props
 
 
 🦖 super() is used to call the parent constructor. 
       class MyComponent extends React.Component {
        constructor(props) {
          super()
          console.log(this.props) // Undefined 
          console.log(props)     // Defined Props Will Be Logged 
        }
  
  🦖 super(props) would pass props to the parent constructor.
         class MyComponent extends React.Component {
            constructor(props) {
              super(props)
              console.log(this.props) // {name:'Bob' , .....} Props Will Be Logged 
            }
   conclude: when we are not using props in super() then, when doing console.log(this.props) in console, we will get an "undefined" because we are using this.props      inside the constructor. But if we just console.log(props) this will give us a proper message in the console on the webpage.
   -If we want to use this.props inside the constructor we need to pass it with the super() function. Otherwise, we don’t want to pass props to super() 
    Note: but Outside Constructor() Both will display same value for 'this.props'.

👉🏻What are Higher Order Components(HOC)? To share common functionality between components
  -A HOC is an advanced technique for reusing logic in React components.were inspired by higher-order functions in JavaScript.Higher-order functions in JavaScript      take some functions as arguments and return another function.
  -same in HOCS Components take one or more components as arguments, and return a new upgraded component.
    Facts About HOCs:
                     A HOC is a pure function. It has no side effects, returning only a new component.
