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

👉 React v/s angular?




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
        -
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
 👽REDUX:
   👉what is redux?
        -Redux is a state managing library used in JavaScript apps. It simply manages the state of an application  
        -Redux is a pattern and library for managing and updating application state, using events called "actions". It serves as a centralized store for state that            needs to be used across  entire application, with rules ensuring that the state can only be updated in a predictable fashion.
        
   👉Building Parts of redux
        
           
