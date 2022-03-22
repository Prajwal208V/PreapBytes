👉 what is react?
-> React is an open-source JavaScript Library created by Facebook(SPA - single page application) for creating dynamic and interactive applications and building better UI/UX design for web and mobile applications.it makes code easier to debug by dividing them into components.

👉 What are its features?
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

👉React v/s angular?
   React: 
       Type- React is a JavaScript library
       Best feature- It gives you the freedom to choose the tools, architecture, and libraries, for developing an app.
       Data binding- React language uses one-way data binding, which means that the Ul elements can’t be changed without updating the corresponding model state.
       Written in- JavaScript
       Model- It is based on Virtual DOM
       Use of code- React allows we have to manage the code according to your desired format.
       Testing & Debugging- It requires a set of tools to perform different types of testing. 
       
   Angular:
      -Angular is a complete framework.
      -It offers a limited amount of freedom and flexibility. 
      -Angular Supports both one way and two way  data binding. It helps you to ensure that the model state automatically changes when any change is made.
        (means that if we modify the UI input, the model state will change, and vice versa)
      -Typescript
      -Based on MVC (Model View Controller)
      -Angular comes with many ready to use elements. However, it mainly comes from a specific provider. So, there are priority collisions and namesDaces.
      -The testing and debugging for a complete project is possible with a single tool.
        
👉Library vs Framework?
 Library:
        -is a collection of functions
        -In case of library the Execution of code will be decided by the developers Means  developers are in charge of the flow of the whole application.
        -We are choosing when and where to call the library.
        -in case of library its developers duty to design the structure.
        -library follows View model
 Framework:
        -Framework is a collection of multiple other libraries.
        -in case of framework the execution is already defined or decided.the framework is in charge of the flow of the whole application.
        -It provides some places for we have to plug in our code, but it calls the code you   plugged in as needed.
        -Framework provides you a structure in which we just put down the code our functionality.
        -it follows MVC structure (model view controller)
        
👉Why can’t browsers read JSX?
   React uses JSX that allows us to write JavaScript objects inside the HTMLelements. It is a syntax extension of JavaScript. JSX makes code easy and understandable.    As JSX is a combination of HTML and JavaScript it is not supported by Browsers. Because there is no inherent implementation for the browser engines to read and      understand them. JSX is not intended to be implemented by the engines or browsers, it is intended to be used by various transcompiler like (Babel ) which            transform these JSX into valid JavaScript code.


👉What is the purpose of render() in React?
   

👉states v/s props?
  Both props and state are plain JavaScript objects. While both of them hold information Props
  props:
       -Props are read-only components. It is an object which stores the value of attributes of a tag and works similar to the HTML attributes. It allows passing             data from one component to other components (parent to child component ). It is similar to function arguments and can be passed to the component the same way         as arguments passed in a function. Props are immutable so we cannot modify the props from inside the child-component.
       -Props are also objects that hold information to control the behavior of that particular component.
 state:
      -the State of a component is an object that holds some information that may change over the lifetime of the component.
      -States can be used in Class Components, Functional components with the use of React Hooks (useState and other methods) while Props don’t have this limitation.         State is generally updated by event handlers.

👉How can you update the state of a component?
  -The State is an instance of React Component that can be defined as an object of a set of observable properties that control the behavior of the component. In        other words, the State of a component is an object that holds some information that may change over the lifetime of the component. 
   
   Update the State of Class-Based Components using ‘this.setState()’ method.Pass the state object in a JSX element and call the method to update the state on a        specific event like button click.
                    🦖 class App extends Component {
                          constructor(){
                            super()
                            this.state={
                              text : 'Welcome to Geeksforgeeks'
                            }
                          }
                          goPremium(){
                            this.setState({
                              text:'Subscription successful'
                            })
                       }
   Update the State of functional Components:React functional components are plain JavaScript functions.It is not possible to persist state in local variables, to      maintain state inside the function, React provides several hooks:
   like useState() hook allows you create and mange a state variable that can be a simple JavaScript primitive or an object.
     🦖const [varible, setFun] = useState(false);
     The only way to mutate the state and its binding is to call the function setFun()
     Update the state on a specific event like button click using the ‘setFun’ method.
     🦖setFun({text:'Updated Content'});
  
  
👉Explain the lifecycle methods of React components in detail?

👉stateful v/s stateless components?
   -In React, a stateful component is a component that holds some state.  Stateless components, by contrast, have no state. but that both types of components can use     props.
   -They are also known as Container vs Presentational components.That means the stateful components are keeping track of changing data, while stateless components       print out what is given to them via props, or they always render the same thing.
   
👉conditionally render components?
     -we can build Single Page Applications (SPA) that are dynamic and highly interactive with React.One feature that allows, that is conditional rendering.
     -Conditional rendering is a term to describe the ability to render different user interface (UI) markup if a condition is true or false. In React, it allows us       to render different elements or components based on a condition.
     6 Ways to Implement Conditional Rendering in React Applications:
       1.Using an if…else Statement:
         An if…else statement will execute the actions contained in the if block when the condition is satisfied. Otherwise, it will execute the actions contained in          the else block.
         In JSX, we can able to use JavaScript code with markup to render dynamic values within your application. JSX uses curly braces {console.log("Prajwal)}
                                   
                                   🦖const AuthButton = props => {
                                      let { isLoggedIn } = props;
                                      if (isLoggedIn) {
                                        return <button>Logout</button>;
                                      } else {
                                        return <button>Login</button>;
                                      }
                                    };
                                    export default AuthButton;
        2.Using a switch Statement:
                                  🦖 const AuthButton = props => {
                                          let { isLoggedIn } = props;
                                          switch (isLoggedIn) {
                                            case true:
                                              return <button>Logout</button>;
                                              break;
                                            case false:
                                              return <button>Login</button>;
                                              break;
                                            default:
                                              return null;
                                          }
                                        };
                                        export default AuthButton;
        3.Using Element Variables:Element variables are similar to the approach to extract the conditional rendering into a function. Element variables are variables                                   that hold JSX elements. You can conditionally assign elements or components to these variables outside the JSX and only render the                                   variable within JSX.                       
                       🦖class App extends Component {
                            constructor(props) {
                              super(props);
                              this.state = {
                                isLoggedIn: true
                              };
                            }
                            render() {
                              let { isLoggedIn } = this.state;
                              let AuthButton;
                              if (isLoggedIn) {
                                AuthButton = <button>Logout</button>;
                              } else {
                                AuthButton = <button>Login</button>;
                              }
                              return (
                                <div className="App">
                                  <h1>
                                    This is a Demo showing several ways to implement Conditional Rendering in React.
                                  </h1>
                                  {AuthButton}
                                </div>
                              );
                            }
                       }
                       export default App;
         
         4.Using Ternary Operators:The conditional (ternary) operator is the only JavaScript operator that takes three operands. This operator is frequently used as                                    a shortcut for the if statement.
                        🦖let { isLoggedIn } = this.state;
                           {isLoggedIn ? <button>Logout</button> : <button>Login</button>}
                           
         5.Using Logical && (Short Circuit Evaluation):The logical && helps you specify that an action should be taken only on one condition, otherwise, it would be                                                        ignored entirely.
                        🦖let { isLoggedIn } = this.state;
                           {isLoggedIn && <button>Logout</button>}
         
         6.Using Immediately Invoked Function Expressions (IIFEs)
                        🦖{(function() {
                            if (isLoggedIn) {
                              return <button>Logout</button>;
                            } else {
                              return <button>Login</button>;
                            }
                          })()}
         
👉 functional v/s class components?
    functional:
              -Functional Components are Stateless component. but we can make it as statefull compoent by using react hooks like useState() by this method we can                     make it statefull compoents
              -It is simple javascript functions that simply returns jsx 
              -There is no render method used in functional components.
              -Component lifecycle method do not exist in functional component,because a functional component is just a plain JavaScript function.
                We can use React Hooks in functional component,useEffect() hook can be used to replicate lifecycle behaviour, and useState can be used to store state                 in a functional component.
              -
     class:
            -It is regular ES6 classes that extends component class form react library
            -Also known as “stateful” components because they implement logic and state.
            -It must have render() method returning jsx
            -we can pass props to class components and access them with this.props

👉How to prevent re-renders in React?
   
👉Element v/s Component?
   React Elements:
             -An Element is a plain object describing what we want to appear on the screen in terms of the DOM nodes, A React Element is what gets returned from                   components.making it light and faster to render than components.
             -React Element contains both type and property. It may contain other Elements in its props, but React Element does not have any methods.
             -React elements are not what we see in the browser. They are just objects in memory and we can’t change anything about them.
             -Elements are immutable i,e once created cannot be changed.
             -We cannot use React Hooks with elements as elements are immutable.
             -creating an element "React.createElement()" it will take up three parameters:- type of the element, properties, and children for creating an element.
             
                 🦖import React from 'react';
                    import ReactDOM from 'react-dom';
                    const ele1 = React.createElement("h1",null,"Hey Geek");
                    ReactDOM.render(ele1,document.getElementById("root"));
                 ​ In index.js, we are creating an element with h1 args, keeping its property as null and for the children, we are passing a string “Hey Geek”.
                 
                 
   Component Elements: 
             -A React Component is a template. A blueprint. A global definition. This can be either a function or a class (with a render function).
             -It is comparatively slower than elements.
             -Each component has its life cycle methods.
             -We can render many instances of the same component.
             -The state in a component is mutable.
             -React hooks can be used with both functional and class components
             -A component can be declared in different ways like it can be an element class with render() method or can be defined as a function.
             
               🦖import React from 'react';
                  import ReactDOM from 'react-dom';
                  function Welcome(user){
                  return <div>
                    <h3>Welcome {user.name}</h3>
                  </div>
                  }
                  const ele = <Welcome name="Geek"/>
                  ReactDOM.render(ele,document.getElementById("root"));
                 
👉What is CRA and its benefits?
   -The create-react-app  tool allows you to quickly create & run React applications with no configuration step.
   -Create React App (CRA) is the easiest way to get started building React applications. It provides a default setup with a number of core features baked in,           including a build system containing a module bundler (webpack) and a transpiler (Babel).
    It includes everything we need to build a React app:
      1.React, JSX, ES6, and Flow syntax support.
      2.Language extras beyond ES6 like the object spread operator.
      3.Autoprefixed CSS, so you don’t need -webkit- or other prefixes.
      4.A fast interactive unit test runner with built-in support for coverage reporting.
      5.A live development server that warns about common mistakes.
      6.A build script to bundle JS, CSS, and images for production, with hashes and sourcemaps.

   
👉Can you force a component to re-render without calling setState?
  -The components in React will re-render only if the state of the component or the props passed to it changes but if we need to re-render the component if some data    changes then we will use forceUpdate() method of React. Calling the forceUpdate() will forcibly re-render the component and thus calls the render() method of the    component skipping the shouldComponentUpdate() method.
    component.forceUpdate(callback)
    
  this.forceUpdate() Method v/s this.setState() Method:
    forceUpdate:
                -It re-render the component without even changing the state or props.
                -It skips the lifecycle shouldComponentUpdate method.
                -
    setState:
              -It re-render the component if some state or props of that component changed.
              -It calls the lifecycle shouldComponentUpdate method.
              
              
    
👉What are fragments? Why fragments are better than container divs?
     Fragments:"<> </> or <React.Fragment> </React.Fragment>" to return multiple elements. Fragments let you group a list of children without adding extra nodes to        the  DOM.
     benfit of fragments:
                        1.use of div Increases the size of the DOM: DOM sizes get large when there are too many DOM nodes or HTML tags on your page or when these                              nodes are nested too deeply. As a result, the user’s browser consumes additional power to process your website, resulting in slow page load                         time and low page speed scores.()
                        2.fragment Using divs creates extra nodes, resulting in a high memory usage.
                        3.Oversized DOMs cause memory usage to increase, style processing to lag, and layout reflows to be costly.
                        4.Debugging and tracing the origin of the extra nodes become more challenging as the component tree nests deeper.
                        5.It difficult to maintain the desired layout: Flexbox and Grid have a unique parent-child relationship, and adding divs breaks the markup.
   

👉 client v/s server-side rendering ?
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
        
        
 👉 super() v/s super(props) ?
 
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

👉 What are Higher Order Components(HOC)? To share common functionality between components
  -A HOC is an advanced technique for reusing logic in React components.were inspired by higher-order functions in JavaScript.Higher-order functions in JavaScript      take some functions as arguments and return another function.
  -same in HOCS Components take one or more components as arguments, and return a new upgraded component.
    Facts About HOCs:
                     A HOC is a pure function. It has no side effects, returning only a new component.
         HOC can be used for many use cases:
                                           Code reuse, State abstraction and manipulation, Props manipulation.
                    
          real world use of HOC:
                         1.showing a loader, while a component waits for data.
                           -app is to show a loader while a component is waiting for data to be passed into it’s props.
                         2.Conditionally rendering components.
                           -we can have a reusable HOC that conditionally renders the component based on the data provided.
                         3.managing common user-interaction states.
                         4.providing components with specific styles.
                        
👉 What are Pure Components?
 -React has provided us a Pure Component. If we extend a class with Pure Component, there is no need for "shouldComponentUpdate()" Lifecycle Method. ReactJS Pure       Component Class compares current state and props with new props and states to decide whether the React component should re-render itself or  Not.
 -In simple words, If the previous value of state or props and the new value of state or props is the same, the component will not re-render itself. Since Pure         Components restricts the re-rendering when there is no use of re-rendering of the component. 
 -Extending React Class Components with Pure Components ensures the higher performance of the Component and ultimately makes an application faster, While in the       case of Regular Component, it will always re-render either value of State and Props changes or not.
 in class-  "PureComponent"
    🦖class PureComp extends PureComponent {
          render() {
              console.log("PURE component render");
              return (
                  <div>
                      Pure Component {this.props.name}
                  </div>
              )
          }
      }
     export default PureComp; 
in function-Component "component is wrapped in React.memo()".
  🦖export function Movie({ title, releaseDate }) {
      return (
        <div>
          <div>Movie title: {title}</div>
          <div>Release date: {releaseDate}</div>
        </div>
      );
    }
    export const MemoizedMovie = React.memo(Movie);
    
👽Hooks    
👉 React Hooks:
     -Hooks were added to React in version 16.8.
     -Hooks allow function components to have access to state and other React features.means Hooks bring to functional components the things we once were only able         to do with classes, like being able to work with React local state, effects and context through useState, useEffect and useContext.
     -an alternative to writing class-based components, and offer an alternative approach to state management and lifecycle methods.
    Five Important Rules for Hooks:
                                   1.Never call Hooks from inside a loop, condition or nested function
                                   2.Hooks should sit at the top-level of your component
                                   3.Only call Hooks from React functional components
                                   4.Never call a Hook from a regular function
                                   5.Hooks can call other Hooks
     Basic Hooks are:  <a href="https://reactjs.org/docs/hooks-reference.html">LINK</a>
          1.useState:-
           🦖 const [state, setState] = useState(initialState);
            -Returns a stateful value, and a function to update it.
            -During the initial render, the returned state (state) is the same as the value passed as the first argument (initialState).
            -The setState function is used to update the state. It accepts a new state value and enqueues a re-render of the component.
            🦖setState(newState);
            Functional updates:If the new state is computed using the previous state, you can pass a function to setState. The function will receive the previous                 value, and return an updated value.
            🦖 <button onClick={() => setCount(prevCount => prevCount - 1)}>-</button>
            
          2.useEffect:-carries out an effect each time there is a state change. By default, it runs after the first render and every time the state is updated. 
          -React useEffect is a function that gets executed for 3 different React component lifecycles.
          Those lifecycles are componentDidMount, componentDidUpdate, and componentWillUnmount lifecycles.
          -useEffect() fuction takes two arguments- 1.what are things we have to exicute and 2.dependencies 
                 dependencies:-1.empty 2. empty array[] & 3. states list form as array
            >If you want to run an effect on mount and unmount, you can pass an empty array ([])
            >
          Basic usage of useEffect:
                                  1.I want to useEffect to change the message a second after the component has mounted.
                            
                                  🦖 import React, { useState, useEffect } from 'react';
                                      const App = () => {
                                        const [message, setMessage] = useState('Hi there, how are you?');
                                        useEffect(() => {
                                          console.log('trigger use effect hook');
                                          setTimeout(() => {
                                            setMessage("I'm fine, thanks for asking.");
                                          }, 1000)
                                        })
                                        return <h1>{message}</h1>
                                      };
                                      export default App;
 
          3.useContext:-Context provides a way to pass data through the component tree without having to pass props down manually at every level.
                        -solving one major problem React problem — prop drilling.
                        Prop drilling is the processing of getting data from component A to component Z by passing it through multiple layers of intermediary React                           components. Component will receive props indirectly and you.
                        -wide-state storge and directly pass that to the components without building a long propchain directly change it from any comoponents in                              application and directly pass it to any component in application 
                         
                         🦖 import {createContext} from 'react'
                             const myContext=createContext(); //calling it for create context object 
                             export const StudentProvider = ( props ) => {
                                 const [students, setStudents] = useState([])
                                    return (
                                            <StudentContext.Provider value={ [students,setStudents] }>  //we wraping in jsx code so all the compoents that should be                                                                              abel to tap into that conext if any compoent not wrapped will not be able to listen them
                                                { props.children }
                                            </StudentContext.Provider>
                                        )
                             }
                        🦖  import { myContext } from 'react';
                             const StudentList = () => {
                                const [students, setStudents] = useContext(myContext);
                             }

         limitation of context:is not optimized for high frequncey changes  ex:state change every second or multple times /seconds
         
         4.useReducer:The useReducer Hook is the better alternative to the useState hook and is generally more preferred over the useState hook when we have                               complex state-building logic or when the next state value depends upon its previous value or when the components are needed to be optimized.
            
            The useReducer hook takes two arguments including reducer, initial state; 
            🦖 const [state, dispatch] = useReducer(reducer, initialArg, init);
            
                    import React, { useReducer } from "react";
                    const initialState = 0;
                    const reducer = (state, action) => {
                        switch (action) {
                          case "add":
                          return state + 1;
                          case "subtract":
                          return state - 1;
                          case "reset":
                          return 0;
                          default:
                          throw new Error("Unexpected action");
                        }
                    };

                    const App = () => {
                      // Initialising useReducer hook
                    const [count, dispatch] = useReducer(reducer, initialState);
                    return (
                      <div>
                      <h2>{count}</h2>
                      <button onClick={() => dispatch("add")}>
                        add
                      </button>
                      <button onClick={() => dispatch("subtract")}>
                        subtract
                      </button>
                      <button onClick={() => dispatch("reset")}>
                        reset
                      </button>
                      </div>
                    );
                    };

                    export default App;

   👉  controlled v/s uncontrolled components:
        2 ways to handle the input value, the first one is the Controlled Component and the second is Uncontrolled component
        controlled:
             The controlled component is a way that we can handle the form input value using the "state" and to change the input value there is only one way to                    change it is using "setState or useState" if you are using React Hooks and you can change this state using one of the events like onChange and when                  the user starts writing any character setState or useState will be called and update the state of this input then it will add the new value inside the                input.
             
             - most cases, devlopers using controlled components to implement forms. In a controlled component, form data is handled by a React component. The                      alternative is uncontrolled components, where form data is handled by the DOM itself.
             
                 🦖 import React, { useState } from "react";
                     export default function App() {
                          const [inputValue, setInputValue] = useState("");
                          const handleInputChange = (e) => {
                            setInputValue(e.target.value)
                          }
                          const handleSubmitButton = () => {
                            alert(inputValue);
                          };
                          return (
                            <div className="App">
                              <input value={inputValue} onChange={handleInputChange} />
                              <input type="submit" value="submit" onClick={handleSubmitButton} />
                            </div>
                          );
                     }
             
        Uncontrolled:The uncontrolled component is like traditional HTML form inputs that we will not be able to handle the value by yourself but the DOM will take                      care of handling the value of the input and save it then we can get this value using React Ref
                    
                    🦖 import React, { useRef } from "react";
                        export default function App() {
                          const inputRef = useRef(null);
                          const handleSubmitButton = () => {
                            alert(inputRef.current.value);
                          };
                          return (
                            <div className="App">
                              <input type="text" ref={inputRef} />
                              <input type="submit" value="submit" onClick={handleSubmitButton} />
                            </div>
                          );
                        }
     
👽router    
👉react router? 🦖  The react-router-dom is the package that is used in React apps for routing. 
        -react router is a standard library for routing in React. It enables the navigation among views of various components in a React Application, allows changing          the browser URL, and keeps the UI in sync with the URL.
        -React Router is dynamic and  client-side routing, allows us to build a single-page web application with navigation without the page refreshing as the user            navigates.React Router uses component structure to call components, which display the appropriate information.
        -React Router plays an important role to display multiple views in a single page application. Without React Router, it is not possible to display multiple            views in React applications. 
        -Sometimes a URL like can match more than one route pattern. React Router ranks our routes and picks the best one. this is the router-6 feature 
     
     The main Components of React Router are:
         -BrowserRouter:BrowserRouter is a router implementation that uses the HTML5 history API(pushState, replaceState and the popstate event) to keep your UI in                           sync with the URL. It is the parent component that is used to store all of the other components.
         
         -Routes:The Routes component looks through all of its child routes and it displays ranks  routes and picks the best one one whose path matches the                             current URL.
                  -switch v/s routes:Routes are chosen based on the best match instead of being traversed in order.
                                      The switch component looks through all of its child routes and it displays the first one whose path matches the current URL.
                                      
         -Route: Route is the conditionally shown component that renders some UI when its path matches the current URL.
         
         -Link & NavLink: Link component is used to create links to different routes and implement navigation around the application. It works like HTML anchor tag.
             >When we use the NavLink as a tag, it automatically inherit an active class when clicked. On the other hand, the Link tag does now have an active class                when clicked.
             >The Link component is used to navigate the different routes on the site. But NavLink is used to add the style attributes to the active routes.
             >ability to set an "activeClassName" and "activeStyle" on NavLink, is there any reason to use NavLink over Link
                🦖 <Link to="/">Home</Link>
                🦖 <NavLink exact activeClassName="active" activeStyle={{color:'red',background:'red',}} to="/">Home </NavLink>
 
 👉 router hooks:
                  1.useNavigate() -It helps to go to the specific URL, forward or backward pages. 
                  2.
                  
 👽REDUX: https://dook.pro/blog/technology/39-redux-vs-react-context-which-one-is-the-right-winner
          
   👉what is redux?
        -Redux is a state managing library used in JavaScript apps. It simply manages the state of an application  
        -Redux is a pattern and library for managing and updating application state, using events called "actions". It serves as a centralized store for state that            needs to be used across  entire application, with rules ensuring that the state can only be updated in a predictable fashion.
        
   👉Redux can be described in three fundamental principles?  
        ​ Single source of truth: The only state of the whole application is stored in an object tree within a single store. A single state tree makes it easier to             debug or inspect an application.
          -In other words, one app — one store — one state.
        ​State Immutability: The state is read-only, and it cannot be changed directly. Instead, the state should be updated through an action, i.e., an object                describing what has happened. This ensures that neither the views nor the network callbacks will ever be able to write directly to the state.
        ​Changes are made with pure function: Pure functions here are the reducers, where the state gets updated without mutating the previous state by actions.
          
    👉What do you understand by “Single source of truth” in redux?
      Redux consists of a single store, which is a JavaScript value containing the entire state of your application. A single source of truth comes with a lot of           benefits:
              ​it makes traditional applications, the state is stored in different places across the whole application. With a single source of truth, debugging                    becomes easy, as you simply have one value to look at.
              ​It is easy to create universal apps, as you can serialize the application state on the server and send it to the client without much effort.
              ​Generalized functionalities, such as undo/redo, become easy to implement. For example, you can simply drop in a library that turns (a part of) your                  state into an undoable state.
              
   👉List down the components of Redux. and explain?
      Redux has 4 components namely Store, Reducer, Action, and UI.
      1.action:Actions are plain JavaScript objects that describe what happens but don’t describe how the app state changes. Their job is to describe an event that                  took place in the application and to transport the new data to the stores. Each Action must have a type and an optional payload key that contains the                data.
               🦖 {
                     actionType: "UPDATE_TITLE", 
                     payload: "This is a new title." 
                   }
      2.Reducer:Reducers are pure functions that define how the app state changes. Whenever we dispatch an Action to our store, Redux passes down the Action to the                   Reducer. Then, the Reducer updates the state depending upon the Action that was passed. The Reducer function takes two arguments: the previous app                   state, the Action being dispatched and returns the new app state.
              🦖 (previousState, action) => newState 
      3.store:The Store is the object that brings Action and Reducer together. Store holds the state of the application.
               -This createStore method is used for creating the application’s Store. It accepts three arguments: rootReducer, initialState and Redux middleware                     constant (the latter two being optional).
              🦖createStore(rootReducer);
    
    👉Show how the data flows through Redux? 
<img width="500" height="250" style="text-align=:center" src="https://celestialsys.com/blog/wp-content/uploads/2019/12/data-flow.jpg" >
    
    
    
    
    👉context v/s React Redux?
       context:
               -Context provides a way to pass data through the component tree without manually passing props down through each nested component.
               -any updateds are made with the Context value.
               -We can change the state in it, very simple.
               -Excellent for more static data Context is NOT designed for handling high-frequency updates.(means not optimized for high frequncy changes ex:state                   changes every seconds or multi times per second)
               -Only little setup is required - create context and sometimes wrapper component
               -There could be more difficult maintenance in more complex-applications.
               -therfore It is better to use with small applications.
 
       Redux:
              -Redux is a state managing library used in JavaScript apps.It simply manages the state and data of an application.
              -any updateds are made with pure functions i.e. reducers.
              -The state is read-only. We cannot change them directly.(Redux passes down the Action to the Reducer. Then, the Reducer updates the state depending                    upon the Action that was passed)
              -redux can handles high-frequency updates.(optimized for high frequncy changes ex:state changes every seconds or multi times per second)
              -More setup than Context API (and more terms to understand)
              -esay  maintenance in more complex-applications.
              -	It is perfect for larger applications. 
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
