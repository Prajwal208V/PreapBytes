### React Testing 
https://learning.oreilly.com/library/view/simplify-testing-with/9781800564459/B16887_03_Final_PG_ePub.xhtml#_idParaDest-51

### Table of Contents

| No. | Questions |
|---- | ---------
|1  | [what is react](#what-is-react) |                                                      
|2  | [What are its features](#What-are-its-features)|
|3  | [virtual DOM means](#virtual-DOM-means)|
|4  | [SPA](#SPA)|
|5  | [JSX](#JSX)|
|6  | [One-way Data Binding](#One-way-Data-Binding)|
|7  | [Components](#Components)|
|8  | [Conditional Statements](#Conditional-Statements)|
|9  | [React v/s angular?](#React-vs-angular)|
|10 | [Library v/s Framework](#Library-vs-Framework)|
|11 | [states v/s props](#states-vs-props)|
|12 | [How can you update the state of a component](#How-can-you-update-the-state-of-a-component)|
|13 | [different phases of the component lifecycle](#different-phases-of-the-component-lifecycle)|
|14 | [lifecycle methods of React components](#lifecycle-methods-of-React-components)|
|15 | [stateful v/s stateless components](#stateful-vs-stateless-components)|
|16 | [functional v/s class components](#functional-vs-class-components)|
|17 | [How to prevent re-renders in React](#How-to-prevent-reRenders-in-React)|
|18 | [Element v/s Component](#Element-vs-Component)|
|19 | [What is CRA and its benefits](#What-is-CRA-and-its-benefits)|
|20 | [What are fragments](#What-are-fragments)|
|21 | [client v/s server-side rendering](#client-vs-serverSide-rendering)|
|22 | [What are Higher Order Components(HOC))](#What-are-Higher-Order-Components)|
|23 | [What are Pure Components](#What-are-Pure-Components)|
|24 | [Hooks](#Hooks)|
|24 | [useState](#useState)|
|24 | [useReducer](#useReducer)|
|24 | [useRef](#useRef)|
|24 | [useEffect](#useEffect)|
|24 | [useContext](#useContext)|
|24 | [useMemo](#useMemo)|
|24 | [useCallback](#useCallback)|
|24 | [Custom Hooks](#Custom-Hooks)|
|25 | [types of Hooks in React](#types-of-Hooks-in-React)|
|26 | [controlled v/s uncontrolled components](#controlled-vs-uncontrolled-components)|
|27 | [router](#router)|
|28 | [REDUX](#REDUX)|
|29 | [Redux Lifecycle for an application](#Redux-Lifecycle-for-an-application)|
|30 | [advantages of using Redux](#advantages-of-using-Redux)|
|31 | [State the core principles of Redux](#State-the-core-principles-of-Redux)|
|32 | [action in Redux architecture](#action-in-Redux-architecture)|
|33 | [reducers in Redux architecture](#reducers-in-Redux-architecture)|
|34 | [store in Redux](#store-in-Redux)|
|35 | [Redux Thunk](#Redux-Thunk)|
|36 | [Redux Saga](#Redux-Saga)|
|37 | [How can the addition of multiple middlewares to Redux be done](#How-can-the-addition-of-multiple-middlewares-to-Redux-be-done)|
|38 | [context vs React Redux](#context-vs-React-Redux)|
|39 | [keys in React](#keys-in-React)|
|40 | [What are the different ways to style a React component](#What-are-the-different-ways-to-style-a-React-component)|
|41 | [Name a few techniques to optimize React app performance](#Name-a-few-techniques-to-optimize-React-app-performance)|
|42 | [How can the addition of multiple middlewares to Redux be done](#How-can-the-addition-of-multiple-middlewares-to-Redux-be-done)|
|43 | [packageJson file](#packageJson-file)|
|44 | [packageLockJson file](#packageLockJson-file)|
|45 | [packageJson vs packageLockJson](#packageJson-vs-packageLockJson)|
|46 | [nodeModules](#nodeModules)|
|47 | [public folder in ReactJS](#public-folder-in-ReactJS)|
|48 | [src](#src)|
|   | **interview questions** |
|50 | [What are Pure Components](#what-are-pure-components)|
|51 | [What is the difference between HTML and React event handling](#what-is-the-difference-between-html-and-react-event-handling)|
|52 | [What are inline conditional expressions?](#what-are-inline-conditional-expressions)|
|53 | [What is the use of refs?](#what-is-the-use-of-refs)|
|54 | [What are forward refs?](#what-are-forward-refs)|
|55 | [difference between createElement and cloneElement](#what-is-the-difference-between-createelement-and-cloneelement)|
|56 | [What is Lifting State Up in React?](#what-is-lifting-state-up-in-react)|
|57 | [What is reconciliation?](#what-is-reconciliation)|
|58 | [Why React uses className over class attribute?](#why-react-uses-classname-over-class-attribute)|
|59 | [How to apply validation on props in React?](#how-to-apply-validation-on-props-in-react)|
|60 | [What are error boundaries in React v16?](#what-are-error-boundaries-in-react-v16)|
|61 | [How error boundaries handled in React v15?](#how-error-boundaries-handled-in-react-v15)|
|62 | [What is the use of react-dom package?](#what-is-the-use-of-react-dom-package)|
|63 | [What is the purpose of render method of react-dom?](#what-is-the-purpose-of-render-method-of-react-dom)|
|64 | [What is ReactDOMServer?](#what-is-reactdomserver)|
|65 | [How to use innerHTML in React?](#how-to-use-innerhtml-in-react)|
|66 | [Is it good to use setState() in componentWillMount() method?](#is-it-good-to-use-setstate-in-componentwillmount-method)|
|67 | [How do you conditionally render components?](#how-do-you-conditionally-render-components)|
|68 | [How do you memoize a component?](#how-do-you-memoize-a-component)|
|69 | [How you implement Server Side Rendering or SSR?](#how-you-implement-server-side-rendering-or-ssr)|
|70 | [Why should component names start with capital letter?](#why-should-component-names-start-with-capital-letter)|
|71 | [Can you force a component to re-render without calling setState?](#can-you-force-a-component-to-re-render-without-calling-setstate)|
|72 | [How to loop inside JSX?](#How-can-the-addition-of-multiple-middlewares-to-Redux-be-done)|
|73 | [What is the difference between React and ReactDOM?](#what-is-the-difference-between-react-and-reactdom)|
|74 | [Why ReactDOM is separated from React?](#why-reactdom-is-separated-from-react)|
|77 | [How to listen to state changes?](#how-to-listen-to-state-changes)|
|78 | [Is it possible to use React without rendering HTML?](#is-it-possible-to-use-react-without-rendering-html)|
|79 | [How to pretty print JSON with React?](#how-to-pretty-print-json-with-react)|
|80 | [How to focus an input element on page load?](#how-to-focus-an-input-element-on-page-load)|
|81 | [What are the possible ways of updating objects in state?](#what-are-the-possible-ways-of-updating-objects-in-state)|
|82 | [How to use https instead of http in create-react-app?](#how-to-use-https-instead-of-http-in-create-react-app)|
|83 | [Why is a component constructor called only once?](#why-is-a-component-constructor-called-only-once)|
|84 | [What is the benefit of styles modules?](#what-is-the-benefit-of-styles-modules)|
|85 | [What are the popular React-specific linters?](#what-are-the-popular-react-specific-linters)|
|   | **interview questions from React Testing** |
|86 | [What is Shallow Renderer in React testing?](#what-is-shallow-renderer-in-react-testing)|
|87 | [What is TestRenderer package in React?](#what-is-testrenderer-package-in-react)|
|88 | [What is the purpose of ReactTestUtils package?](#what-is-the-purpose-of-reacttestutils-package)|
|89 | [What is Jest?](#what-is-jest)|
|90 | [What are the advantages of Jest over Jasmine?](#what-are-the-advantages-of-jest-over-jasmine)|
|91 | [Give a simple example of Jest test case](#give-a-simple-example-of-jest-test-case)|
|   | **interview questions from React Redux** |
|92 | [What is flux?](#what-is-flux)|
|93 | [Can I dispatch an action in reducer?](#can-i-dispatch-an-action-in-reducer)|
|94 | [How to reset state in Redux?](#how-to-reset-state-in-redux)|
|95 | [Why are Redux state functions called reducers?](#why-are-redux-state-functions-called-reducers)|
|96 | [How to make AJAX request in Redux?](#how-to-make-ajax-request-in-redux)|
|97 | [What is the mental model of redux-saga?](#what-is-the-mental-model-of-redux-saga)|
|98 | [What are the differences between call() and put() in redux-saga?](#what-are-the-differences-between-call-and-put-in-redux-saga)|
|99 | [What are the differences between redux-saga and redux-thunk?](#what-are-the-differences-between-redux-saga-and-redux-thunk)|

### what is react
-> React is an open-source JavaScript Library created by Facebook(SPA - single page application) for creating dynamic and interactive applications and building better UI/UX design for web and mobile applications.it makes code easier to debug by dividing them into components.

**[⬆ Back to Top](#table-of-contents)**

### What are its features
1. ### SPA 
it build an application by using SPA - single page application means in normal web application ,in which when we are clicking on any button or selecting            option from navigation bar then the web page is reloading then that means that application is your "multi - page application".but in SPA does not reload the browser page and just only updates the page without reloading then that application is known as Single Page application. When we create React application using CRA, (create-react-app boilerplate , developed by Facebook) it always create the application which will be Single page application.

**[⬆ Back to Top](#table-of-contents)**

2. ### virtual DOM means
it uses special dom insted of "real-DOM" called virtual DOM means 
In realDom, JavaScript Frameworks update the whole DOM at once, which makes the web application slow. But React uses virtual DOM, whenever any React             application gets loaded on the screen for the first time., or React components get mounted on the screen for the first time. Now when any user makes any             changes on the screen like button click because of which the state variable will get updated so in this case the changes will not directly go to Real DOM.
Instead, react uses virtual DOM. So we are having two virtual doms, one virtual dom gets created at the time of mounting of react component so it is a copy of       our real dom. Another virtual dom is the dom which contains the new changes, updated state variables values. Now these two virtual doms will get compared with       each other and will check for the new changes. this complete procedure is known as “diffing algorithm”. Now the new changes will be updated in your Real dom.         this procedure is known as "Reconciliation".
So Manipulating the virtual DOM is much faster, thats way  A virtual DOM object is a representation of a DOM object, like a lightweight copy.

scaler(As stated by the react team, virtual DOM is a concept where a virtual representation of the real DOM is kept inside the memory and is synced with the real DOM by a library such as ReactDOM 
Why was virtual DOM introduced? 
DOM manipulation is an integral part of any web application, but DOM manipulation is quite slow when compared to other operations in JavaScript. The efficiency of the application gets affected when several DOM manipulations are being done. Most JavaScript frameworks update the entire DOM even when a small part of the DOM changes.

For example, consider a list that is being rendered inside the DOM. If one of the items in the list changes, the entire list gets rendered again instead of just rendering the item that was changed/updated. This is called inefficient updating.

To address the problem of inefficient updating, the react team introduced the concept of virtual DOM.
How does it work?
<img width="500" height="250" style="text-align=:center" src="https://user-images.githubusercontent.com/92531202/164884238-0d49e0c2-630c-40b5-bb68-3206e81441fa.png" >
For every DOM object, there is a corresponding virtual DOM object(copy), which has the same properties. The main difference between the real DOM object and the virtual DOM object is that any changes in the virtual DOM object will not reflect on the screen directly. Consider a virtual DOM object as a blueprint of the real DOM object. Whenever a JSX element gets rendered, every virtual DOM object gets updated.
**Note- One may think updating every virtual DOM object might be inefficient, but that’s not the case. Updating the virtual DOM is much faster than updating the real DOM since we are just updating the blueprint of the real DOM.

React uses two virtual DOMs to render the user interface. One of them is used to store the current state of the objects and the other to store the previous state of the objects. Whenever the virtual DOM gets updated, react compares the two virtual DOMs and gets to know about which virtual DOM objects were updated. After knowing which objects were updated, react renders only those objects inside the real DOM instead of rendering the complete real DOM. This way, with the use of virtual DOM, react solves the problem of inefficient updating
)

**[⬆ Back to Top](#table-of-contents)**

### JSX
react use JSX(JavaScript Syntax Extension)
JSX is a combination of HTML and JavaScript. We can embed JavaScript objects inside the HTML elements.place them in the DOM without using functions like appendChild( ) or createElement( ).But JSX is not supported by the browsers, as a result Babel compiler transcompile the code into JavaScript code. JSX makes codes easy and understandable. It is easy to learn if we know HTML and JavaScript.
->Why can’t browsers read JSX
Because there is no inherent implementation for the browser engines to read and understand them. JSX is not intended to be implemented by the engines or browsers, it is intended to be used by various transcompiler like (Babel ) which transform these JSX into valid JavaScript code.
![image](https://user-images.githubusercontent.com/92531202/164877770-4deefef6-5c0c-4339-896f-718bb8abe93a.png)

**[⬆ Back to Top](#table-of-contents)**

### One-way Data Binding
a special feature is One-way Data Binding:Follows Unidirectional data flow or data binding.The data in react flows only in one direction i.e. the data is       transferred from top to bottom i.e. from parent components to child components. The properties(props) in the child component cannot return the data to its           parent component but it can have communication with the parent components to modify the states according to the provided inputs. This is the working process of       one-way data binding. This keeps everything modular and fast.

**[⬆ Back to Top](#table-of-contents)**

### Components
React.js is component-based, which means React.js divides the web page into multiple components as it is component-based.Each component is a         part of the UI design which has its own logic and design

**[⬆ Back to Top](#table-of-contents)**

### Conditional Statements
JSX allows us to write conditional statements. The data in the browser is displayed according to the conditions provided inside the JSX.

**[⬆ Back to Top](#table-of-contents)**

### React vs angular
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
        
 **[⬆ Back to Top](#table-of-contents)**
 
### Library vs Framework
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
        
**[⬆ Back to Top](#table-of-contents)**

👉What is the purpose of render() in React?
   

### states vs props
Both props and state are plain JavaScript objects. While both of them hold information Props
props:
 -Props are read-only components. It is an object which stores the value of attributes of a tag and works similar to the HTML attributes. It allows passing             data from one component to other components (parent to child component ). It is similar to function arguments and can be passed to the component the same way         as arguments passed in a function. Props are immutable so we cannot modify the props from inside the child-component.
 -Props are also objects that hold information to control the behavior of that particular component.

scaler(
What is prop drilling in React?
Sometimes while developing React applications, there is a need to pass data from a component that is higher in the hierarchy to a component that is deeply nested. To  pass data between such components, we pass props from a source component and keep passing the prop to the next component in the hierarchy till we reach the deeply    nested component.
The disadvantage of using prop drilling is that the components that should otherwise be not aware of the data have access to the data.
  ![image](https://user-images.githubusercontent.com/92531202/164887113-d8cc7470-1261-4216-888e-967fb48ff5e1.png)
)      
 
Scaler(The props: in React are the inputs to a component of React. They can be single-valued or objects having a set of values that will be passed to components of React during creation by using a naming convention that almost looks similar to HTML-tag attributes. We can say that props are the data passed from a parent component into a child component.
The main purpose of props is to provide different component functionalities such as:
  Passing custom data to the React component.
  Using through this.props.reactProp inside render() method of the component.
  Triggering state changes.
  
React State:
Every component in react has a built-in state object, which contains all the property values that belong to that component.
In other words, the state object controls the behaviour of a component. Any change in the property values of the state object leads to the re-rendering of the component.
Note- State object is not available in functional components but, we can use React Hooks to add state to a functional component
 )
 state:
      -the State of a component is an object that holds some information that may change over the lifetime of the component.
      -States can be used in Class Components, Functional components with the use of React Hooks (useState and other methods) while Props don’t have this limitation.         State is generally updated by event handlers.

**[⬆ Back to Top](#table-of-contents)**

### How can you update the state of a component
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
  
 **[⬆ Back to Top](#table-of-contents)** 

### different phases of the component lifecycle
There are four different phases in the lifecycle of React component. They are:

![image](https://user-images.githubusercontent.com/92531202/164892281-6f5dc928-4de8-467a-90b2-c35a35fd9b41.png)

-Initialization: During this phase, React component will prepare by setting up the default props and initial state for the upcoming tough journey.
-Mounting: Mounting refers to putting the elements into the browser DOM. Since React uses VirtualDOM, the entire browser DOM which has been currently rendered would not      be refreshed. This phase includes the lifecycle methods componentWillMount and componentDidMount.
-Updating: In this phase, a component will be updated when there is a change in the state or props of a component. This phase will have lifecycle methods like                componentWillUpdate, shouldComponentUpdate, render, and componentDidUpdate.
-Unmounting: In this last phase of the component lifecycle, the component will be removed from the DOM or will be unmounted from the browser DOM. This phase will have the    lifecycle method named componentWillUnmount.

**[⬆ Back to Top](#table-of-contents)**

### lifecycle methods of React components
React lifecycle hooks will have the methods that will be automatically called at different phases in the component lifecycle and thus it provides good control over what happens at the invoked point. It provides the power to effectively control and manipulate what goes on throughout the component lifecycle.
For example, if you are developing the YouTube application, then the application will make use of a network for buffering the videos and it consumes the power of the battery (assume only these two). After playing the video if the user switches to any other application, then you should make sure that the resources like network and battery are being used most efficiently. You can stop or pause the video buffering which in turn stops the battery and network usage when the user switches to another application after video play.
So we can say that the developer will be able to produce a quality application with the help of lifecycle methods and it also helps developers to make sure to plan what and how to do it at different points of birth, growth, or death of user interfaces.
The various lifecycle methods are:
-constructor(): This method will be called when the component is initiated before anything has been done. It helps to set up the initial state and initial values.
-getDerivedStateFromProps(): This method will be called just before element(s) rendering in the DOM. It helps to set up the state object depending on the initial props. The -getDerivedStateFromProps() method will have a state as an argument and it returns an object that made changes to the state. This will be the first method to be called on     an updating of a component.
-render(): This method will output or re-render the HTML to the DOM with new changes. The render() method is an essential method and will be called always while the           remaining methods are optional and will be called only if they are defined.
-componentDidMount(): This method will be called after the rendering of the component. Using this method, you can run statements that need the component to be already kept   in the DOM.
-shouldComponentUpdate(): The Boolean value will be returned by this method which will specify whether React should proceed further with the rendering or not. The default     value for this method will be True.
-getSnapshotBeforeUpdate(): This method will provide access for the props as well as for the state before the update. It is possible to check the previously present value     before the update, even after the update.
-componentDidUpdate(): This method will be called after the component has been updated in the DOM.
-componentWillUnmount(): This method will be called when the component removal from the DOM is about to happen

**[⬆ Back to Top](#table-of-contents)**

### stateful vs stateless components
   -In React, a stateful component is a component that holds some state.  Stateless components, by contrast, have no state. but that both types of components can use     props.
   -They are also known as Container and Presentational components.That means the stateful components are keeping track of changing data, while stateless components       print out what is given to them via props, or they always render the same thing.
   
**[⬆ Back to Top](#table-of-contents)**

### functional vs class components
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

**[⬆ Back to Top](#table-of-contents)**

### How to prevent reRenders in React
Reason for re-renders in React:
    -Re-rendering of a component and its child components occur when props or the state of the component has been changed.
    -Re-rendering components that are not updated, affects the performance of an application.
to prevent re-rendering:
   
**[⬆ Back to Top](#table-of-contents)** 

### Element vs Component
   React Elements:
             -An Element is a plain object, describing what we want to appear on the screen in terms of the DOM nodes, A React Element returned from                   components.making it light and faster to render than components.
             -React Element contains both type and property. It may contain other Elements in its props, but React Element does not have any methods.
             -React elements are not what we see in the browser. They are just objects in memory and we can’t change anything about them.
             -Elements are immutable i,e once created cannot be changed.
             -We cannot use React Hooks with elements as elements are immutable.
             -creating an element "React.createElement()" it will take up three parameters:- type of the element, properties, and children for creating an element.
             
                 🦖import React from 'react';
                    import ReactDOM from 'react-dom';
                    const ele1 = React.createElement("h1",null,"Hey hello");
                    ReactDOM.render(ele1,document.getElementById("root"));
                 ​ we are creating an element with h1 tags, keeping its property as null and for the children, we are passing a string “Hey hello”.
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
                  
**[⬆ Back to Top](#table-of-contents)**

### What is CRA and its benefits
   -The create-react-app  it is a tool or(boilerplate) allows you to quickly create & run React applications with no configuration step.
   -Create React App (CRA) is the easiest way to get started building React applications. It provides a default setup with a number of core features in,                 including a build system containing a module bundler (webpack) and a transpiler (Babel).
    It includes everything we need to build a React app:
      1.React, JSX, ES6, and Flow syntax support.
      2.Language extras beyond ES6 like the object spread operator.
      3.Autoprefixed CSS, so you don’t need -webkit- or other prefixes.
      4.A fast interactive unit test runner with built-in support for coverage reporting.
      5.A live development server that warns about common mistakes.
      6.A build script to bundle JS, CSS, and images for production, with hashes and sourcemaps.

**[⬆ Back to Top](#table-of-contents)**
   
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
              
**[⬆ Back to Top](#table-of-contents)**              
    
### What are fragments 
Why fragments are better than container divs?
     Fragments:"<> </> or <React.Fragment> </React.Fragment>" to return multiple elements. Fragments allows to group a list of children without adding extra nodes to        the  DOM.
     benfit of fragments:
                        1.use of div Increases the size of the DOM: DOM sizes get large when there are too many DOM nodes or HTML tags on your page or when these                              nodes are nested too deeply. As a result, the user’s browser consumes additional power to process an website, resulting in slow page load                         time and low page speed scores.()
                        2.fragment Using divs creates extra nodes, resulting in a high memory usage.
                        3.Oversized DOMs cause memory usage to increase, style processing to lag, and layout reflows to be costly.
                        4.Debugging and tracing the origin of the extra nodes become more challenging as the component tree nests deeper.
                        5.It difficult to maintain the desired layout: Flexbox and Grid have a unique parent-child relationship, and adding divs breaks the markup.

**[⬆ Back to Top](#table-of-contents)**

### client vs serverSide rendering
 server-side rendering:
    -In server-side rendering when a user makes a request to a webpage, the server prepares an HTML page by fetching user-specific data and sends it to the user’s       machine over the internet. The browser then construes the content and displays the page. This entire process of fetching data from the database, creating an HTML     page and sending it to client happens in  milliseconds.
    -when user clicks a link on the page, the browser sends a request to the server and the entire process is carried out by the server again. This process not only      increases the load on the server but also consumes unnecessary internet bandwidth.
 client-side rendering:
    -client-side rendering, it’s about rendering content in the browser using JavaScript. So instead of getting all the content from the HTML document itself, a          bare-bones HTML document with a JavaScript file in initial loading itself is received, which renders the rest of the site using the browser.
    -With client-side rendering, the initial page load is naturally a bit slow. However, after that, every subsequent page load is very fast. In this approach,            communication with server happens only for getting the run-time data. Moreover, there is no need to reload the entire UI after every call to the server. The          client-side framework manages to update UI with changed data by re-rendering only that particular DOM element.
    -Angular and React.js are some of the best examples of libraries used in client-side rendering.
  application of each:
        -An application has very simple UI with fewer pages/features use server-side. v/s An application has very complex UI with many pages/features use client
        -An application has less dynamic data                                          |   An application has large and dynamic data
   
   **[⬆ Back to Top](#table-of-contents)**
        
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

**[⬆ Back to Top](#table-of-contents)**

### What are Higher Order Components
To share common functionality between components
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
 scaler(
 Higher-Order Component(HOC) is a function that takes in a component and returns a new component.
 ![image](https://user-images.githubusercontent.com/92531202/164891358-7b1c3550-3048-4b5f-951c-cbf2d43f0408.png)
  need a Higher Order Component
   While developing React applications, we might develop components that are quite similar to each other with minute differences. In most cases, developing similar            components might not be an issue but, while developing larger applications we need to keep our code DRY, therefore, we want an abstraction that allows us to define this    logic in a single place and share it across components. HOC allows us to create that abstraction.
 )
 
**[⬆ Back to Top](#table-of-contents)**
                        
### What are Pure Components
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

**[⬆ Back to Top](#table-of-contents)**

### Hooks    
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
 scaler(React Hooks are the built-in functions that permit developers for using the state and lifecycle methods within React components. These are newly added features made available in React 16.8 version. Each lifecycle of a component is having 3 phases which include mount, unmount, and update. Along with that, components have properties and states. Hooks will allow using these methods by developers for improving the reuse of code with higher flexibility navigating the component tree.
 
Using Hook, all features of React can be used without writing class components. For example, before React version 16.8, it required a class component for managing the state of a component. But now using the useState hook, we can keep the state in a functional component.

**What are the rules that must be followed while using React Hooks?   

  There are 2 rules which must be followed while you code with Hooks:
  React Hooks must be called only at the top level. It is not allowed to call them inside the nested functions, loops, or conditions.
  It is allowed to call the Hooks only from the React Function Components

**[⬆ Back to Top](#table-of-contents)**

### types of Hooks in React

   ![image](https://user-images.githubusercontent.com/92531202/164894079-3b626562-25d8-4b79-9191-3e354482a0dd.png)
   
  There are two types of Hooks in React. They are:
1.Built-in Hooks: The built-in Hooks are divided into 2 parts
Basic Hooks:

1. ### useState
useState(): This functional component is used to set and retrieve the state.
 ```const [state, setState] = useState(initialstate)
 ```
The useState() is a Hook that allows you to have state variables in functional components. React has two types of components, one is class components which are ES6 classes that extend from React and the other is functional components. Class components a Component and can have state and lifecycle methods: class Message extends React. The useState hook is a special function that takes the initial state as an argument and returns an array of two entries.
Syntax: The first element is the initial state and the second one is a function that is used for updating the state.
We can also pass a function as an argument if the initial state has to be computed. And the value returned by the function will be used as the initial state.
 ```const [sum, setsum] = useState(function generateRandomInteger(){5+7);})
 ```
 ```1.useState:-
           🦖 const [state, setState] = useState(initialState);
            -Returns a stateful value, and a function to update it.
            -During the initial render, the returned state (state) is the same as the value passed as the first argument (initialState).
            -The setState function is used to update the state. It accepts a new state value and enqueues a re-render of the component.
            🦖setState(newState);
            Functional updates:If the new state is computed using the previous state, you can pass a function to setState. The function will receive the previous                 value, and return an updated value.
            🦖 <button onClick={() => setCount(prevCount => prevCount - 1)}>-</button>
  ```
**[⬆ Back to Top](#table-of-contents)**

2. ### useReducer
The useReducer Hook is the better alternative to the useState hook and is generally more preferred over the useState hook when you have complex state-building logic or when the next state value depends upon its previous value or when the components are needed to be optimized.

useReducer() : It is used when there is a complex state logic that is having several sub-values or when the upcoming state is dependent on the previous state. It     will also enable you to optimization of component performance that will trigger deeper updates as it is permitted to pass the dispatch down instead of callbacks.
The useReducer hook takes three arguments including reducer, initial state, and the function to load the initial state lazily.  
```const [state, dispatch] = useReducer(reducer, initialArgs, init);
```
```
  useReducer:The useReducer Hook is the better alternative to the useState hook and is generally more preferred over the useState hook when we have                     complex state-building logic or when the next state value depends upon its previous value or when the components are needed to be optimized.  
            The useReducer hook takes two arguments including reducer, initial state; 
             const [state, dispatch] = useReducer(reducer, initialArg, init);
           
                🦖 import React, { useReducer } from "react";
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
```

**[⬆ Back to Top](#table-of-contents)**

3. ### useRef
It will permit creating a reference to the DOM element directly within the functional component.
The useRef is a hook that allows to directly create a reference to the DOM element in the functional component. 
purpose does useRef hook serve?
Some of the use cases of useRef hook are:
1.To access DOM elements
2.To persist values in successive renders

Accessing DOM elements
One of the most common use case of useRef hook is to access DOM elements (NOT custom React component). For example if you want to access an input element after it has been mounted to the DOM, instead of using document.getElementById, document.querySelector or any other method for selecting DOM elements like in vanilla javascript, you can use useRef hook. This is illustrated in the example below.

```import React from "react";
       import ReactDOM from "react-dom";
       const App = (props) => {
         const inputRef = React.useRef(null);
         React.useEffect(() => {
           console.log(inputRef.current);
           inputRef.current.focus();
         }, []);
         return (
           <form>
             <input 
               type="text"
               placeholder="Enter Name" 
               name="name" 
               ref={inputRef} />
           </form>
         );
       };
       const root = document.getElementById("root");
       ReactDOM.render(<App />, root);
```
Persist Values Across Successive
useRef isn’t just for DOM refs, but it’s a generic container that can hold anything, similar to an instance property on a class. There are situations where you may want to persist values across renders instead of recreating them on each render. Instead of storing these values in states which may cause additional unnecessary rendering, you can put them in useRef ‘s current property. For example, lets look at this Timer component.
Using ref with class components If you want to reference a DOM element in class components, you can use React.createRef API.

```      const Timer = () => {
         const intervalRef = useRef();

         useEffect(() => {
           const id = setInterval(() => {
             // ...
           });
           intervalRef.current = id;
           return () => {
             clearInterval(intervalRef.current);
           };
         });

         // ...
       }
```
use refs in React:
  1)You need to directly access the DOM element(Need to focus an element? Need to play or pause a video? )
  2) Storing mutable state(Using refs to handle mutable state can be useful if you want to prevent the re-rendering of your components. One common use case of this is   implementing a usePrevious hook. With this hook, you can keep track of the previous value of one of your state variables.)
  3)Forwarding Refs
  
**[⬆ Back to Top](#table-of-contents)**

4. ### useEffect
It enables for performing the side effects in the functional components.
The useEffect React Hook is used for performing the side effects in functional components. With the help of useEffect, you will inform React that your component requires something to be done after rendering the component or after a state change. The function you have passed(can be referred to as “effect”) will be remembered by React and call afterwards the performance of DOM updates is over. Using this, we can perform various calculations such as data fetching, setting up document title, manipulating DOM directly, etc, that don’t target the output value. The useEffect hook will run by default after the first render and also after each update of the component. React will guarantee that the DOM will be updated by the time when the effect has run by it.

Where the first argument callback represents the function having the logic of side-effect and it will be immediately executed after changes were being pushed to DOM. The second argument dependencies represent an optional array of dependencies. The useEffect() will execute the callback only if there is a change in dependencies in between renderings.
There are two types of side effects in React component. They are:
1.Effects without Cleanup: This side effect will be used in useEffect which does not restrict the browser from screen update. It also improves the                      responsiveness of an application. A few common examples are network requests, Logging, manual DOM mutations, etc.
2.Effects with Cleanup: Some of the Hook effects will require the cleanup after updating of DOM is done. For example, if you want to set up an external data         source subscription, it requires cleaning up the memory else there might be a problem of memory leak. It is a known fact that React will carry out the                 cleanup of memory when the unmounting of components happens. But the effects will run for each render() method rather than for any specific method. Thus we           can say that, before execution of the effects succeeding time the React will also cleanup effects from the preceding render
               
useEffect:-carries out an effect each time there is a state change. By default, it runs after the first render and every time the state is updated. 
-React useEffect is a function that gets executed for 3 different React component lifecycles.
Those lifecycles are componentDidMount, componentDidUpdate, and componentWillUnmount lifecycles.
-useEffect() fuction takes two arguments- 1.what are things we have to exicute and 2.dependencies 
dependencies:-1.empty 2. empty array[] & 3. states list form as array
>If you want to run an effect on mount and unmount, you can pass an empty array ([])

```import React, { useState, useEffect } from 'react';
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
```

**[⬆ Back to Top](#table-of-contents)**

5.### useContext
It is used for creating common data that is to be accessed by the components hierarchy without having to pass the props down to each level.
Context provides a way to pass data through the component tree without having to pass props down manually at every level.
-solving one major problem React problem — prop drilling.Prop drilling is the processing of getting data from component A to component Z by passing it through multiple layers of intermediary React components. Component will receive props indirectly and you.
-wide-state storge and directly pass that to the components without building a long propchain directly change it from any comoponents in                              application and directly pass it to any component in application 

```     import {createContext} from 'react'
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
```

limitation of context:is not optimized for high frequncey changes  ex:state change every second or multple times /seconds

**[⬆ Back to Top](#table-of-contents)**

6. ### useMemo
Memoization is an optimization technique that passes a complex function to be memoized. In memoization, the result is “remembered” when the same parameters are passed-in subsequently.
useMemo() : This will be used for recomputing the memoized value when there is a change in one of the dependencies. This optimization will help for avoiding           expensive calculations on each render.
The useMemo is a hook used in the functional component of react that returns a memoized value. 
memoization in general when we don’t need to recompute the function with a given argument for the next time as it returns the cached result. A memoized function remembers the results of output for a given set of inputs. For example, if there is a function to add two numbers, and we give the parameter as 1 and 2 for the first time the function will add these two numbers and return 3, but if the same inputs come again then we will return the cached value i.e 3 and not compute with the add function again. In react also, we use this concept, whenever in the React component, the state and props do not change the component and the component does not re-render, it shows the same output. The useMemo hook is used to improve performance in our React application.
```const memoizedValue = useMemo(functionThatReturnsValue, arrayDepencies)
```
example:-

```import { useState ,useMemo} from 'react';
       export function MultiplyerOf2() {
           const [number, setNumber] = useState(1);
           const [inc, setInc] = useState(0);

           console.log("parent rendering");
           const factorial = useMemo(() => childFun(number), [number]);

           const onClickFun=()=>{
               setInc(pre => pre+1);
           }

           return (
               <>
                   <div>
                       Factorial of
                       <input type="number" value={number} onChange={(event)=> setNumber(event.target.value)} />
                       is {factorial}
                       <button onClick={onClickFun}>Re-render</button>
                   </div>
               </>
           )

       }
       function childFun(n) {
           console.log('child rendering');
           return n*2;
       }
```

**[⬆ Back to Top](#table-of-contents)**

7.useCallback
useCallback() :This is useful while passing callbacks into the optimized child components and depends on the equality of reference for the prevention of unneeded     renders.The useCallback hook is used when you have a component in which the child is rerendering again and again without need.
when a component re-renders, every function inside of the component is recreated and therefore these functions’ references change between renders.
The useCallback hook receives a function as a parameter, and also an array of dependencies. The useCallback hook will return a memoized version of the callback, and it’ll only be changed if one of the dependencies has changed.
```useCallback(callback, dependencies)
```
will return a memoized instance of the callback that only changes if one of the dependencies has changed. This means that instead of recreating the function object on every re-render, we can use the same function object between renders.
Use case scenario:-
1)Passing callbacks to optimized child components
useCallback is especially useful to prevent unnecessary renders when passing callbacks to optimized child components that rely on reference equality.

### The Difference Between useCallback And useMemo
useCallback: The useCallback is a react hook that returns a memoized callback when passed a function and a list of dependencies as parameters. It’s very useful when a component is passing a callback to its child component to prevent the rendering of the child component. It only changes the callback when one of its dependencies gets changed.

useMemo: The useMemo is similar to useCallback hook as it accepts a function and a list of dependencies but it returns the memoized value returned by the passed function. It recalculated the value only when one of its dependencies change. It is useful to avoid expensive calculations on every render when the returned value is not going to change.



**[⬆ Back to Top](#table-of-contents)**

8.useImperativeHandle():  It will enable modifying the instance that will be passed with the ref object.

9.useDebugValue(): It is used for displaying a label for custom hooks in React DevTools.

10.useLayoutEffect(): It is used for the reading layout from the DOM and re-rendering synchronously.

11. ### Custom Hooks
 A custom Hook is basically a function of JavaScript. The Custom Hook working is similar to a regular function. The “use” at the beginning of the Custom Hook Name is required for React to understand that this is a custom Hook and also it will describe that this specific function follows the rules of Hooks. Moreover,developing custom Hooks will enable you for extracting component logic from within reusable functions. 

**[⬆ Back to Top](#table-of-contents)**

### controlled vs uncontrolled components
2 ways to handle the input value, the first one is the Controlled Component and the second is Uncontrolled component
controlled:
The controlled component is a way that we can handle the form input value using the "state" and to change the input value there is only one way to                    change it is using "setState or useState" if you are using React Hooks and you can change this state using one of the events like onChange and when                  the user starts writing any character setState or useState will be called and update the state of this input then it will add the new value inside the                input.         
- most cases, devlopers using controlled components to implement forms. In a controlled component, form data is handled by a React component. The                      alternative is uncontrolled components, where form data is handled by the DOM itself.

  `` 🦖 import React, { useState } from "react";
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
   ```         
Uncontrolled:The uncontrolled component is like traditional HTML form inputs that we will not be able to handle the value by yourself but the DOM will take           care of handling the value of the input and save it then we can get this value using React Ref
                    
  ```🦖 import React, { useRef } from "react";
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
  ```
  
⚖️scaler(Controlled and uncontrolled components are just different approaches to handling input from elements in react. 
<img width="500" height="250" style="text-align=:center" src="https://user-images.githubusercontent.com/92531202/164884461-1cc466de-537e-4207-adb0-3af5931715b9.png" >

Controlled component: In a controlled component, the value of the input element is controlled by React. We store the state of the input element inside the code, and by using event-based callbacks, any changes made to the input element will be reflected in the code as well.
When a user enters data inside the input element of a controlled component, onChange function gets triggered and inside the code, we check whether the value entered is valid or invalid. If the value is valid, we change the state and re-render the input element with the new value.
the value of the input element is determined by the state of the inputValue variable. Any changes made to the input element is handled by the updateInput function.

<img width="500" height="250" style="text-align=:center" src="https://user-images.githubusercontent.com/92531202/164885850-1804bb3d-3cd4-4b43-9296-9fbe43494498.png" >

Uncontrolled component: In an uncontrolled component, the value of the input element is handled by the DOM itself. Input elements inside uncontrolled components work just like normal HTML input form elements.The state of the input element is handled by the DOM. Whenever the value of the input element is changed, event-based callbacks are not called. Basically, react does not perform any action when there are changes made to the input element.
Whenever use enters data inside the input field, the updated data is shown directly. To access the value of the input element, we can use ref.
we are not using onChange function to govern the changes made to the input element. Instead, we are using ref to access the value of the input element.

<img width="500" height="250" style="text-align=:center" src="https://user-images.githubusercontent.com/92531202/164886613-a313d0b0-c663-43a1-b57a-3fe9e073965b.png" >
)

**[⬆ Back to Top](#table-of-contents)**

### router    
👉react router? 🦖  The 'react-router-dom' is the package that is used in React apps for routing. 
-react router is a standard library for routing in React. It enables the navigation among views of various components in a React Application, allows changing          the browser URL, and keeps the UI in sync with the URL.
-React Router is dynamic and  client-side routing, allows us to build a single-page web application with navigation without the page refreshing as the user            navigates.React Router uses component structure to call components, which display the appropriate information.
-React Router plays an important role to display multiple views in a single page application. Without React Router, it is not possible to display multiple            views in React applications. 
-Sometimes a URL like can match more than one route pattern. React Router ranks our routes and picks the best one. this is the router-6 feature 
     
The main Components of React Router are:
-BrowserRouter:BrowserRouter is a router implementation that uses the HTML5 history API(pushState, replaceState and the popstate event) to keep your UI in            sync with the URL. It is the parent component that is used to store all of the other components.

-Routes:The Routes component looks through all of its child routes and it displays ranks  routes and picks the best one one whose path matches the                   current URL.
-switch v/s routes:Routes are chosen based on the best match instead of being traversed in order.
-The switch component looks through all of its child routes and it displays the first one whose path matches the current URL.
-Route: Route is the conditionally shown component that renders some UI when its path matches the current URL.
-Link & NavLink: Link component is used to create links to different routes and implement navigation around the application. It works like HTML anchor tag.
>When we use the NavLink as a tag, it automatically inherit an active class when clicked. On the other hand, the Link tag does now have an active class                when clicked.
>The Link component is used to navigate the different routes on the site.But NavLink is used to add the style attributes to the active routes.
>ability to set an "activeClassName" and "activeStyle" on NavLink, is there any reason to use NavLink over Link
  🦖 <Link to="/">Home</Link>
  🦖 <NavLink exact activeClassName="active" activeStyle={{color:'red',background:'red',}} to="/">Home </NavLink>   it is v5 feature
  
Scaler(
React Router refers to the standard library used for routing in React. It permits us for building a single-page web application in React with navigation without even  refreshing the page when the user navigates. It also allows to change the browser URL and will keep the user interface in sync with the URL. React Router will make use of the component structure for calling the components, using which appropriate information can be shown. Since React is a component-based framework, it’s not necessary to include and use this package. Any other compatible routing library would also work with React.
The major components of React Router
-BrowserRouter: (is the router implementation for HTML5 browsers (vs Native)),for keeping our UI to be in sync with the URL. It is the parent component   useful in    storing all other components.
-Routes:Routes are chosen based on the best match instead of being traversed in order.
-Route:(is the conditionally shown component based on matching a path to a URL.)It is considered to be a conditionally shown component and some UI will be rendered by this whenever there is a match between its path and the current URL.
-Link:It is useful in creating links to various routes and implementing navigation all over the application. It works similarly to the anchor tag in HTML
 )
 topics:- 1.nested route 2. dynamic route 
 👉 router hooks:
   1.useNavigate() -It helps to go to the specific URL,forward or backward pages.(it is a new hook introduced in React Router v6 and it is extremely useful and easy    to use.) 
     Uses:
          Go to the previous or next pages
          Redirect user to a specific Url
          
**[⬆ Back to Top](#table-of-contents)**
      
### REDUX 
 https://dook.pro/blog/technology/39-redux-vs-react-context-which-one-is-the-right-winner
👉what is redux?
Redux is an open-source library made using the scripting language JavaScript. Redux's primary use lies in managing and centralizing application state and it is      usually used along with JavaScript libraries, for instance, React or Angular in order to build UIs (User Interfaces). It is a predictable state container for        applications built using JavaScript. It is based on the Flux design pattern. Redux is very small in size (around 2 kilobytes) and has no dependencies.

**[⬆ Back to Top](#table-of-contents)**

### Redux Lifecycle for an application
Redux starts with a call back from the User Interface component which dispatches an action with a payload. After that, the reducers intercept and receive the dispatched actions, generating a new application state. After that, the actions are propagated down through a hierarchy of components from the Redux store.
 ![image](https://user-images.githubusercontent.com/92531202/165000424-78da5561-7938-4042-ae62-75445d975250.png)
 
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

**[⬆ Back to Top](#table-of-contents)**

### advantages of using Redux
   -Redux provides extremely easy state transfer between the components.
   -The states are always predictable in Redux and its maintenance is relatively easy.
   -Debugging and testing code in Redux is simple through logging behaviour and status.
   -Redux provides great performance. It might occur to us that keeping the application's state global would result in bad performance. However, usually, that is not      the case as React Redux implements a lot of performance optimizations internally so that our own connected component only re-renders when it actually needs to.
   -Redux also offers state persistence by storing the application's state to local storage and restoring it after a refresh

**[⬆ Back to Top](#table-of-contents)**

### State the core principles of Redux
-Single source of truth: The global state of our application is always put away in an object tree inside one store.
-The state is read-only: The only way to change the state of our application is by emitting an action, an object explaining what has happened.
-Changes are made with pure functions: This principle means that in order to define how the state tree is being transformed by the actions, we have to write pure     reducers

**[⬆ Back to Top](#table-of-contents)**

### action in Redux architecture
In the Redux architecture, actions are nothing but the plain JavaScript objects which contain a type field. They can be thought of as an event that is used to        describe something which has happened in the application. Actions contain only a tiny bit of information that is required to mention what has happened
example of the usage of Actions in Redux's architecture 
                                                  const addingTodoAction = {
                                                      type: 'ADD',
                                                      payload: 'Do-homework'
                                                 }

**[⬆ Back to Top](#table-of-contents)**

### reducers in Redux architecture
Reducers in Redux's architecture are pure functions that are used to take the previous state and an action and return the next  state.
(previous_state, action) => new_state
example how reducers are used in Redux:-
                                   ![image](https://user-images.githubusercontent.com/92531202/164999808-a5cb45d9-db77-4f87-a5f9-e08c6c0d3624.png)

👉What are the things which we should never do inside a reducer?
-Modify the argument of the reducer
-We should assure that we do not perform any side operations such as routing transitions, API calls, etc.
-We should not call non-pure functions, for instance Date.now(), Math.random(), etc

**[⬆ Back to Top](#table-of-contents)**

### store in Redux
is used to carry together all the states.reducers, and actions which create the app.
responsibilities of the store are:-
The state of the current application from inside is held by the Redux Store.
We can access the current state using store.getState().
We can update the state using store.dispatch(action).
We can also register listener callbacks using the store.subscriber(listener)       
👉how to set the initial state in Redux?
In order to set the initial state in Redux, we have to pass the initial state as the second argument to createStore.
![image](https://user-images.githubusercontent.com/92531202/165001538-031c4ff5-2701-46dd-9d0e-f1ed3772fd04.png)
👉Redux Store methods.   
getState()
subscribe(listener)
dispatch(action)
replaceReducer(nextReducer)

**[⬆ Back to Top](#table-of-contents)**

### Redux Thunk
Using Redux Thunk middleware, we can write action creators returning a function instead of an action. This thunk can postpone the dispatch of an action, or           do conditional dispatchment. The arguments passed to the inner function are the store methods dispatch and getState(). In the event of an action creator             returning a function, the function gets executed by the Redux Thunk middleware and it does not have to be pure. In other words, the function is allowed to           have side effects, including executing asynchronous API calls. It can even dispatch actions. Redux thunk is used to delay the dispatch of an action, or to           dispatch in the event of a certain condition being met. At the time of dispatch of a function instead of an action object, if Redux Thunk middleware is               enabled, the middleware will call that function with the dispatch method itself as the first argument.

**[⬆ Back to Top](#table-of-contents)**

### Redux Saga
Redux Saga is a middleware library that can be useful for allowing a Redux store to interact with the resources outside of itself in an asynchronous manner,         for example, making HTTP requests to external services, accessing browser storage, executing Input/Output operations and many more. These operations are also         called side effects

**[⬆ Back to Top](#table-of-contents)**

### How can the addition of multiple middlewares to Redux be done
In order to add multiple middlewares to Redux, the usage of applyMiddleware can do the work. In applyMiddleware, we can pass every piece of middleware as a new      argument. Therefore, our job is to just pass each piece of middleware that we want.
In the example given below, we have added Redux Thunk and logger middlewares as an argument:
  ```import { createStore, applyMiddleware } from 'redux'
      const createStoreWithMiddleware = applyMiddleware(ReduxThunk, logger)(createStore);
   ```
   
**[⬆ Back to Top](#table-of-contents)**

### context vs React Redux
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
-It is perfect for larger applications.

⚖️scaler(The React Hook cannot be considered as a replacement for Redux (It is an open-source, JavaScript library useful in managing the application state) when it comes to the management of the global application state tree in large complex applications, even though the React will provide a useReducer hook that manages state transitions similar to Redux. Redux is very useful at a lower level of component hierarchy to handle the pieces of a state which are dependent on each other, instead of a declaration of multiple useState hooks.
In commercial web applications which is larger, the complexity will be high, so using only React Hook may not be sufficient. Few developers will try to tackle the challenge with the help of React Hooks and others will combine React Hooks with the Redux.)
   
**[⬆ Back to Top](#table-of-contents)**

### keys in React
   <img width="500" height="250" style="text-align=:center" src="https://user-images.githubusercontent.com/92531202/164876607-0f6d069a-a678-48d5-9bdd-891c4f1bca4c.png" >
        const ids = [1,2,3,4,5];
        const listElements = ids.map((id)=>{
        return(
        <li key={id.toString()}>
          {id}
        </li>
        )
        })
Importance of keys -
Keys help react identify which elements were added, changed or removed.
Keys should be given to array elements for providing a unique identity for each element.
Without keys, React does not understand the order or uniqueness of each element.
With keys, React has an idea of which particular element was deleted, edited, and added.
Keys are generally used for displaying a list of data coming from an API.


**[⬆ Back to Top](#table-of-contents)**

👉differences between functional and class components?

  ![image](https://user-images.githubusercontent.com/92531202/164894217-deb65fa2-4a43-4e90-ac88-75a913c60e11.png)
  
Before the introduction of Hooks in React, functional components were called stateless components and were behind class components on a feature basis. After the            introduction of Hooks, functional components are equivalent to class components.
-Declaration fun(Functional components are nothing but JavaScript functions and therefore can be declared using an arrow function or the function keyword)
             cls(Class components, on the other hand, are declared using the ES6 class)
-Handling props fun(In functional components, the handling of props is pretty straightforward. Any prop provided as an argument to a functional component can be                                 directly used inside HTML elements)
                cls(this keyword is used in the case of class components)
                
<img width="500" height="250" style="text-align=:center" src="https://user-images.githubusercontent.com/92531202/164879335-3c40179c-5fd9-40f7-ae39-de2c8797a039.png" >

-Handling state fun(Functional components use React hooks to handle state. It uses the useState hook to set the state of a variable inside the component
                    Since useState hook returns an array of two items, the first item contains the current state, and the second item is a function used to update                              the state.)
                cls(We cannot use React Hooks inside class components, therefore state handling is done very differently in a class component,For updating the state, we                     need to first bind the addStudent function to this. Only then, we will be able to use the setState function which is used to update the state. )
                
<img width="500" height="250" style="text-align=:center" src="https://user-images.githubusercontent.com/92531202/164883758-ca2fa94f-cc71-410f-ba39-4c41d53fb89f.png" >
                   
**[⬆ Back to Top](#table-of-contents)**

### What are the different ways to style a React component
There are many different ways through which one can style a React component. Some of the ways are :
-Inline Styling: We can directly style an element using inline style attributes. Make sure the value of style is a JavaScript object:
  ```class RandomComponent extends React.Component {
         render() {
           return (
             <div>
               <h3 style={{ color: "Yellow" }}>This is a heading</h3>
               <p style={{ fontSize: "32px" }}>This is a paragraph</p>
             </div>
           );
         }
       }
   ```
   
-Using JavaScript object: We can create a separate JavaScript object and set the desired style properties. This object can be used as the value of the inline style    attribute.

   ```class RandomComponent extends React.Component {
               paragraphStyles = {
                 color: "Red",
                 fontSize: "32px"
               };

               headingStyles = {
                 color: "blue",
                 fontSize: "48px"
               };

               render() {
                 return (
                   <div>
                     <h3 style={this.headingStyles}>This is a heading</h3>
                     <p style={this.paragraphStyles}>This is a paragraph</p>
                   </div>
                 );
               }
          }
   ```       
   
-CSS Stylesheet: We can create a separate CSS file and write all the styles for the component inside that file. This file needs to be imported inside the component   file.
    ```import './RandomComponent.css';
              class RandomComponent extends React.Component {
               render() {
                 return (
                   <div>
                     <h3 className="heading">This is a heading</h3>
                     <p className="paragraph">This is a paragraph</p>
                   </div>
                 );
               }
            }
     ```       
-CSS Modules: We can create a separate CSS module and import this module inside our component. Create a file with “.module.css”‘ extension, styles.module.css:
       ![image](https://user-images.githubusercontent.com/92531202/164889853-9b37f827-e1ca-400b-b8c6-38f251cfc10f.png)
       
**[⬆ Back to Top](#table-of-contents)**
    
### Name a few techniques to optimize React app performance

  There are many ways through which one can optimize the performance of a React app,
  Using useMemo( ) -
    -it is a React hook that is used for caching CPU-Expensive functions.
    -Sometimes in a React app, a CPU-Expensive function gets called repeatedly due to re-renders of a component, which can lead to slow rendering.
    -useMemo( ) hook can be used to cache such functions. By using useMemo( ), the CPU-Expensive function gets called only when it is needed.
  Using React.PureComponent -
     -It is a base component class that checks the state and props of a component to know whether the component should be updated.
     -Instead of using the simple React.Component, we can use React.PureComponent to reduce the re-renders of a component unnecessarily.
  Maintaining State Colocation -
   -This is a process of moving the state as close to where you need it as possible.
   -Sometimes in React app, we have a lot of unnecessary states inside the parent component which makes the code less readable and harder to maintain. Not to forget, having    -many states inside a single component leads to unnecessary re-renders for the component.
   -It is better to shift states which are less valuable to the parent component, to a separate component.
  Lazy Loading -
   -It is a technique used to reduce the load time of a React app. Lazy loading helps reduce the risk of web app performances to a minimum
   
👉Differentiate React Hooks vs Classes
  
**[⬆ Back to Top](#table-of-contents)**

### packageJson file
(package-lock.json contain exact dependency tree to be installed in /node_modules. It helps while a team is working on private apps to ensure that they are working on the same version of dependencies and sub-dependencies. It also maintains a history of changes done in package.json so, that at any point of time, when required previous changes can be looked back in the package-lock.json file.
name - points to name of your app.
version - refers to the current version that the application is using.
“private”: true - is a foolproof setting which avoids accidentally publishing of your react app as a public package in npm ecosystem.
Dependencies will contain all required node modules and versions required for the application. By default, 2 dependencies are added which include React and React-Dom that allow using JavaScript. In our demo, we are using React version 16.8.
Scripts specify aliases that can be used to access some React command in a more efficient manner.

.gitignore - This file is the standard file which is used by source control tool git to identify which files and folders are need to be ignored while committing the code. Until and unless this file exists, the create-react-app command will not create a git repo in this folder.
)
package.json is used to store the metadata associated with the project as well as to store the list of dependency packages. In order to add dependency packages to your projects, you need to create package.json file. The file makes it easy for others to manage and install the packages associated with the project.
  A package.json file:
    lists the packages the project depends on
    specifies versions of a package that your project can use.
    makes your build reproducible, and therefore easier to share with other developers.   
    This lists the package by default under dependecies with its version number.
    scripts specifies aliases that you can use to access some of the react-scripts commands in a more efficient manner. For example, running npm start in your           command line will run react-scripts start behind the scenes. Similar is true for other attributes: build, test, etc.       

**[⬆ Back to Top](#table-of-contents)**

### packageLockJson file
    package-lock.json will describe the exact dependency tree currently installed. 
    
**[⬆ Back to Top](#table-of-contents)**
    
### packageJson vs packageLockJson
The package.json file records the minimum version of different dependencies that your app needs
If you update the versions of a particular package, the change is not necessarily going to be reflected here.The package.json file is used for more than just         dependencies. It also is used to define project properties, descriptions, and license information.
    
Where the package.json file is used for a handful of different things, the package-lock.json file is solely used to "lock" dependencies to a specific version         number, including minor and patch versions.This file keeps track of the the exact version of each installed package which means that future installs will be able     to build an identical dependency tree.
    
**[⬆ Back to Top](#table-of-contents)**

### nodeModules
(This folder contains all dependencies and sub-dependencies specified in package.json used by React app. It contains more than 800 subfolders, this folder is automatically added in the .gitignore file.)
In Node.js, Modules are the blocks of encapsulated code that communicates with an external application on the basis of their related functionality. Modules can be a single file or a collection of multiples files/folders.
 Modules are of three types:
  Core Modules:
  local Modules:
  Third-party Modules:
  
**[⬆ Back to Top](#table-of-contents)**

### public folder in ReactJS 
(This folder contains files which don’t require additional processing by webpack. The index.html file is considered as an entry point for the web application.)
The public folder contains static files such as index.html, javascript library files, images, and other assets, etc. which you don’t want to be processed by webpack. Files in this folder are copied and pasted as they are directly into the build folder. Only files inside the `public` folder can be referenced from the HTML.

**[⬆ Back to Top](#table-of-contents)**

### src 
This folder is the heart of React application as it contains JavaScript which needs to be processed by webpack. In this folder, there is a main component App.js, its related styles (App.css), test suite (App.test.js). index.js, and its style (index.css); which provide an entry point into the App. Lastly, it contains registerServiceWorker.js which takes care of caching and updating files for the end user. It helps in offline capability and faster page loading after the first visit.
           
**[⬆ Back to Top](#table-of-contents)**
           
## interview questions     

7. ### What are Pure Components?

    *`React.PureComponent`* is exactly the same as *`React.Component`* except that it handles the `shouldComponentUpdate()` method for you. When props or state changes, *PureComponent* will do a shallow comparison on both props and state. *Component* on the other hand won't compare current props and state to next out of the box. Thus, the component will re-render by default whenever `shouldComponentUpdate` is called.

   **[⬆ Back to Top](#table-of-contents)**
13. ### What is the difference between HTML and React event handling?
    Below are some of the main differences between HTML and React event handling,

    1. In HTML, the event name usually represents in *lowercase* as a convention:

        ```html
        <button onclick='activateLasers()'>
        ```

       Whereas in React it follows *camelCase* convention:

        ```jsx harmony
        <button onClick={activateLasers}>
        ```

    2. In HTML, you can return `false` to prevent default behavior:

        ```html
        <a href='#' onclick='console.log("The link was clicked."); return false;' />
        ```

       Whereas in React you must call `preventDefault()` explicitly:

        ```javascript
        function handleClick(event) {
          event.preventDefault()
          console.log('The link was clicked.')
        }
        ```

    3. In HTML, you need to invoke the function by appending `()`
       Whereas in react you should not append `()` with the function name. (refer "activateLasers" function in the first point for example)

   **[⬆ Back to Top](#table-of-contents)**           
           
 17. ### What are inline conditional expressions?

    You can use either *if statements* or *ternary expressions* which are available from JS to conditionally render expressions. Apart from these approaches, you can also embed any expressions in JSX by wrapping them in curly braces and then followed by JS logical operator `&&`.

    ```jsx harmony
    <h1>Hello!</h1>
    {
        messages.length > 0 && !isLogin?
          <h2>
              You have {messages.length} unread messages.
          </h2>
          :
          <h2>
              You don't have unread messages.
          </h2>
    }
    ```

   **[⬆ Back to Top](#table-of-contents)**      
           
 19. ### What is the use of refs?

    The *ref* is used to return a reference to the element. They *should be avoided* in most cases, however, they can be useful when you need a direct access to the DOM element or an instance of a component.


   **[⬆ Back to Top](#table-of-contents)**          
           
21. ### What are forward refs?

    *Ref forwarding* is a feature that lets some components take a *ref* they receive, and pass it further down to a child.

    ```jsx harmony
    const ButtonElement = React.forwardRef((props, ref) => (
      <button ref={ref} className="CustomButton">
        {props.children}
      </button>
    ));

    // Create ref to the DOM button:
    const ref = React.createRef();
    <ButtonElement ref={ref}>{'Forward Ref'}</ButtonElement>
    ```


   **[⬆ Back to Top](#table-of-contents)**
   
31. ### What is the difference between createElement and cloneElement?

    JSX elements will be transpiled to `React.createElement()` functions to create React elements which are going to be used for the object representation of UI. Whereas `cloneElement` is used to clone an element and pass it new props.


   **[⬆ Back to Top](#table-of-contents)**
   
32. ### What is Lifting State Up in React?

    When several components need to share the same changing data then it is recommended to *lift the shared state up* to their closest common ancestor. That means if two child components share the same data from its parent, then move the state to parent instead of maintaining local state in both of the child components.


   **[⬆ Back to Top](#table-of-contents)**
41. ### What is reconciliation?

    When a component's props or state change, React decides whether an actual DOM update is necessary by comparing the newly returned element with the previously rendered one. When they are not equal, React will update the DOM. This process is called *reconciliation*.


   **[⬆ Back to Top](#table-of-contents)**
   
45. ### Why React uses `className` over `class` attribute?

    `class` is a keyword in JavaScript, and JSX is an extension of JavaScript. That's the principal reason why React uses `className` instead of `class`. Pass a string as the `className` prop.

    ```jsx harmony
    render() {
      return <span className={'menu navigation-menu'}>{'Menu'}</span>
    }
    ```

   **[⬆ Back to Top](#table-of-contents)**

51. ### How to apply validation on props in React?

    When the application is running in *development mode*, React will automatically check all props that we set on components to make sure they have *correct type*. If the type is incorrect, React will generate warning messages in the console. It's disabled in *production mode* due to performance impact. The mandatory props are defined with `isRequired`.

    The set of predefined prop types:

    1. `PropTypes.number`
    2. `PropTypes.string`
    3. `PropTypes.array`
    4. `PropTypes.object`
    5. `PropTypes.func`
    6. `PropTypes.node`
    7. `PropTypes.element`
    8. `PropTypes.bool`
    9. `PropTypes.symbol`
    10. `PropTypes.any`

    We can define `propTypes` for `User` component as below:

    ```jsx harmony
    import React from 'react'
    import PropTypes from 'prop-types'

    class User extends React.Component {
      static propTypes = {
        name: PropTypes.string.isRequired,
        age: PropTypes.number.isRequired
      }

      render() {
        return (
          <>
            <h1>{`Welcome, ${this.props.name}`}</h1>
            <h2>{`Age, ${this.props.age}`}</h2>
          </>
        )
      }
    }
    ```

    **Note:** In React v15.5 *PropTypes* were moved from `React.PropTypes` to `prop-types` library.

    *The Equivalent Functional Component*

    ```jsx harmony
    import React from 'react'
    import PropTypes from 'prop-types'
   
    function User({name, age}) {
      return (
        <>
          <h1>{`Welcome, ${name}`}</h1>
          <h2>{`Age, ${age}`}</h2>
        </>
      )
    }

    User.propTypes = {
        name: PropTypes.string.isRequired,
        age: PropTypes.number.isRequired
      }
    ```

   **[⬆ Back to Top](#table-of-contents)**
   
54. ### What are error boundaries in React v16?

    *Error boundaries* are components that catch JavaScript errors anywhere in their child component tree, log those errors, and display a fallback UI instead of the component tree that crashed.

    A class component becomes an error boundary if it defines a new lifecycle method called `componentDidCatch(error, info)` or `static getDerivedStateFromError() `:

    ```jsx harmony
    class ErrorBoundary extends React.Component {
      constructor(props) {
        super(props)
        this.state = { hasError: false }
      }

      componentDidCatch(error, info) {
        // You can also log the error to an error reporting service
        logErrorToMyService(error, info)
      }

      static getDerivedStateFromError(error) {
         // Update state so the next render will show the fallback UI.
         return { hasError: true };
       }

      render() {
        if (this.state.hasError) {
          // You can render any custom fallback UI
          return <h1>{'Something went wrong.'}</h1>
        }
        return this.props.children
      }
    }
    ```

    After that use it as a regular component:

    ```jsx harmony
    <ErrorBoundary>
      <MyWidget />
    </ErrorBoundary>
    ```

   **[⬆ Back to Top](#table-of-contents)**   
  
55. ### How error boundaries handled in React v15?

    React v15 provided very basic support for *error boundaries* using `unstable_handleError` method. It has been renamed to `componentDidCatch` in React v16.

   **[⬆ Back to Top](#table-of-contents)**
   
57. ### What is the use of `react-dom` package?

    The `react-dom` package provides *DOM-specific methods* that can be used at the top level of your app. Most of the components are not required to use this module. Some of the methods of this package are:

    1. `render()`
    2. `hydrate()`
    3. `unmountComponentAtNode()`
    4. `findDOMNode()`
    5. `createPortal()`

   **[⬆ Back to Top](#table-of-contents)**   
   
58. ### What is the purpose of render method of `react-dom`?

    This method is used to render a React element into the DOM in the supplied container and return a reference to the component. If the React element was previously rendered into container, it will perform an update on it and only mutate the DOM as necessary to reflect the latest changes.

    ```
    ReactDOM.render(element, container[, callback])
    ```

    If the optional callback is provided, it will be executed after the component is rendered or updated.


   **[⬆ Back to Top](#table-of-contents)**
   
59. ### What is ReactDOMServer?

    The `ReactDOMServer` object enables you to render components to static markup (typically used on node server). This object is mainly used for *server-side rendering* (SSR). The following methods can be used in both the server and browser environments:

    1. `renderToString()`
    2. `renderToStaticMarkup()`

    For example, you generally run a Node-based web server like Express, Hapi, or Koa, and you call `renderToString` to render your root component to a string, which you then send as response.

    ```javascript
    // using Express
    import { renderToString } from 'react-dom/server'
    import MyPage from './MyPage'

    app.get('/', (req, res) => {
      res.write('<!DOCTYPE html><html><head><title>My Page</title></head><body>')
      res.write('<div id="content">')
      res.write(renderToString(<MyPage/>))
      res.write('</div></body></html>')
      res.end()
    })
    ```

   **[⬆ Back to Top](#table-of-contents)** 
   
60. ### How to use innerHTML in React?

    The `dangerouslySetInnerHTML` attribute is React's replacement for using `innerHTML` in the browser DOM. Just like `innerHTML`, it is risky to use this attribute considering cross-site scripting (XSS) attacks. You just need to pass a `__html` object as key and HTML text as value.

    In this example MyComponent uses `dangerouslySetInnerHTML` attribute for setting HTML markup:

    ```jsx harmony
    function createMarkup() {
      return { __html: 'First &middot; Second' }
    }

    function MyComponent() {
      return <div dangerouslySetInnerHTML={createMarkup()} />
    }
    ```

   **[⬆ Back to Top](#table-of-contents)**
   
65. ### Is it good to use `setState()` in `componentWillMount()` method?

    Yes, it is safe to use `setState()` inside `componentWillMount()` method. But at the same it is recommended to avoid async initialization in `componentWillMount()` lifecycle method. `componentWillMount()` is invoked immediately before mounting occurs. It is called before `render()`, therefore setting state in this method will not trigger a re-render. Avoid introducing any side-effects or subscriptions in this method. We need to make sure async calls for component initialization happened in `componentDidMount()` instead of `componentWillMount()`.

    ```jsx harmony
    componentDidMount() {
      axios.get(`api/todos`)
        .then((result) => {
          this.setState({
            messages: [...result.data]
          })
        })
    }
    ```

   **[⬆ Back to Top](#table-of-contents)**   

67. ### How do you conditionally render components?

    In some cases you want to render different components depending on some state. JSX does not render `false` or `undefined`, so you can use conditional *short-circuiting* to render a given part of your component only if a certain condition is true.

    ```jsx harmony
    const MyComponent = ({ name, address }) => (
      <div>
        <h2>{name}</h2>
        {address &&
          <p>{address}</p>
        }
      </div>
    )
    ```

    If you need an `if-else` condition then use *ternary operator*.

    ```jsx harmony
    const MyComponent = ({ name, address }) => (
      <div>
        <h2>{name}</h2>
        {address
          ? <p>{address}</p>
          : <p>{'Address is not available'}</p>
        }
      </div>
    )
    ```

   **[⬆ Back to Top](#table-of-contents)**

70. ### How do you memoize a component?

    There are memoize libraries available which can be used on function components.

    For example `moize` library can memoize the component in another component.

    ```jsx harmony
    import moize from 'moize'
    import Component from './components/Component' // this module exports a non-memoized component

    const MemoizedFoo = moize.react(Component)

    const Consumer = () => {
      <div>
        {'I will memoize the following entry:'}
        <MemoizedFoo/>
      </div>
    }
    ```

    **Update:** Since React v16.6.0, we have a `React.memo`. It provides a higher order component which memoizes component unless the props change. To use it, simply wrap the component using React.memo before you use it.

    ```js
      const MemoComponent = React.memo(function MemoComponent(props) {
        /* render using props */
      });
      OR
      export default React.memo(MyFunctionComponent);
    ```

   **[⬆ Back to Top](#table-of-contents)**
   
71. ### How you implement Server Side Rendering or SSR?

    React is already equipped to handle rendering on Node servers. A special version of the DOM renderer is available, which follows the same pattern as on the client side.

    ```jsx harmony
    import ReactDOMServer from 'react-dom/server'
    import App from './App'

    ReactDOMServer.renderToString(<App />)
    ```

    This method will output the regular HTML as a string, which can be then placed inside a page body as part of the server response. On the client side, React detects the pre-rendered content and seamlessly picks up where it left off.

   **[⬆ Back to Top](#table-of-contents)**  
   
81. ### What is a switching component?

    A *switching component* is a component that renders one of many components. We need to use object to map prop values to components.

    For example, a switching component to display different pages based on `page` prop:

    ```jsx harmony
    import HomePage from './HomePage'
    import AboutPage from './AboutPage'
    import ServicesPage from './ServicesPage'
    import ContactPage from './ContactPage'

    const PAGES = {
      home: HomePage,
      about: AboutPage,
      services: ServicesPage,
      contact: ContactPage
    }

    const Page = (props) => {
      const Handler = PAGES[props.page] || ContactPage

      return <Handler {...props} />
    }

    // The keys of the PAGES object can be used in the prop types to catch dev-time errors.
    Page.propTypes = {
      page: PropTypes.oneOf(Object.keys(PAGES)).isRequired
    }
    ```

   **[⬆ Back to Top](#table-of-contents)**
   
87. ### Why should component names start with capital letter?

    If you are rendering your component using JSX, the name of that component has to begin with a capital letter otherwise React will throw an error as an unrecognized tag. This convention is because only HTML elements and SVG tags can begin with a lowercase letter.
    ```jsx harmony
    class SomeComponent extends Component {
     // Code goes here
    }
    ```
    You can define component class which name starts with lowercase letter, but when it's imported it should have capital letter. Here lowercase is fine:

    ```jsx harmony
    class myComponent extends Component {
      render() {
        return <div />
      }
    }

    export default myComponent
    ```

    While when imported in another file it should start with capital letter:

    ```jsx harmony
    import MyComponent from './MyComponent'
    ```


    #### What are the exceptions on React component naming?

    The component names should start with an uppercase letter but there are few exceptions to this convention. The lowercase tag names with a dot (property accessors) are still considered as valid component names.
    For example, the below tag can be compiled to a valid component,

    ```jsx harmony
         render() {
              return (
                <obj.component/> // `React.createElement(obj.component)`
              )
        }
    ```

   **[⬆ Back to Top](#table-of-contents)**
     
90. ### Can you force a component to re-render without calling setState?

    By default, when your component's state or props change, your component will re-render. If your `render()` method depends on some other data, you can tell React that the component needs re-rendering by calling `forceUpdate()`.

    ```javascript
    component.forceUpdate(callback)
    ```

    It is recommended to avoid all uses of `forceUpdate()` and only read from `this.props` and `this.state` in `render()`.

   **[⬆ Back to Top](#table-of-contents)** 
   
92. ### How to loop inside JSX?

    You can simply use `Array.prototype.map` with ES6 *arrow function* syntax.

    For example, the `items` array of objects is mapped into an array of components:

    ```jsx harmony
    <tbody>
      {items.map(item => <SomeComponent key={item.id} name={item.name} />)}
    </tbody>
    ```

    But you can't iterate using `for` loop:

    ```jsx harmony
    <tbody>
      for (let i = 0; i < items.length; i++) {
        <SomeComponent key={items[i].id} name={items[i].name} />
      }
    </tbody>
    ```

    This is because JSX tags are transpiled into *function calls*, and you can't use statements inside expressions. This may change thanks to `do` expressions which are *stage 1 proposal*.


   **[⬆ Back to Top](#table-of-contents)**

96. ### What is the difference between React and ReactDOM?

    The `react` package contains `React.createElement()`, `React.Component`, `React.Children`, and other helpers related to elements and component classes. You can think of these as the isomorphic or universal helpers that you need to build components. The `react-dom` package contains `ReactDOM.render()`, and in `react-dom/server` we have *server-side rendering* support with `ReactDOMServer.renderToString()` and `ReactDOMServer.renderToStaticMarkup()`.


   **[⬆ Back to Top](#table-of-contents)**

97. ### Why ReactDOM is separated from React?

    The React team worked on extracting all DOM-related features into a separate library called *ReactDOM*. React v0.14 is the first release in which the libraries are split. By looking at some of the packages, `react-native`, `react-art`, `react-canvas`, and `react-three`, it has become clear that the beauty and essence of React has nothing to do with browsers or the DOM.

    To build more environments that React can render to, React team planned to split the main React package into two: `react` and `react-dom`. This paves the way to writing components that can be shared between the web version of React and React Native.


   **[⬆ Back to Top](#table-of-contents)**
   
102. ### How to listen to state changes?

     The `componentDidUpdate` lifecycle method will be called when state changes. You can compare provided state and props values with current state and props to determine if something meaningful changed.

     ```
     componentDidUpdate(object prevProps, object prevState)
     ```

     **Note:** The previous releases of ReactJS also uses `componentWillUpdate(object nextProps, object nextState)` for state changes. It has been deprecated in latest releases.

   **[⬆ Back to Top](#table-of-contents)**

104. ### Is it possible to use React without rendering HTML?

     It is possible with latest version (>=16.2). Below are the possible options:

     ```jsx harmony
     render() {
       return false
     }
     ```

     ```jsx harmony
     render() {
       return null
     }
     ```

     ```jsx harmony
     render() {
       return []
     }
     ```

     ```jsx harmony
     render() {
       return <React.Fragment></React.Fragment>
     }
     ```

     ```jsx harmony
     render() {
       return <></>
     }
     ```

     Returning `undefined` won't work.

   **[⬆ Back to Top](#table-of-contents)**

105. ### How to pretty print JSON with React?

     We can use `<pre>` tag so that the formatting of the `JSON.stringify()` is retained:

     ```jsx harmony
     const data = { name: 'John', age: 42 }

     class User extends React.Component {
       render() {
         return (
           <pre>
             {JSON.stringify(data, null, 2)}
           </pre>
         )
       }
     }

     React.render(<User />, document.getElementById('container'))
     ```

   **[⬆ Back to Top](#table-of-contents)**

107. ### How to focus an input element on page load?

     You can do it by creating *ref* for `input` element and using it in `componentDidMount()`:

     ```jsx harmony
     class App extends React.Component{
       componentDidMount() {
         this.nameInput.focus()
       }

       render() {
         return (
           <div>
             <input
               defaultValue={'Won\'t focus'}
             />
             <input
               ref={(input) => this.nameInput = input}
               defaultValue={'Will focus'}
             />
           </div>
         )
       }
     }

     ReactDOM.render(<App />, document.getElementById('app'))
     ```

     Also in Functional component (react 16.08 and above)
     
      ```jsx harmony
      import React, {useEffect, useRef} from 'react';

      const App = () => {
        const inputElRef = useRef(null)
        
        useEffect(()=>{
          inputElRef.current.focus()
        }, [])
        
        return(
          <div>
            <input
              defaultValue={'Won\'t focus'}
            />
            <input
              ref={inputElRef}
              defaultValue={'Will focus'}
            />
          </div>
        )
      }

      ReactDOM.render(<App />, document.getElementById('app'))
      ```
   **[⬆ Back to Top](#table-of-contents)**

108. ### What are the possible ways of updating objects in state?

     1. **Calling `setState()` with an object to merge with state:**

         * Using `Object.assign()` to create a copy of the object:

             ```javascript
             const user = Object.assign({}, this.state.user, { age: 42 })
             this.setState({ user })
             ```

         * Using *spread operator*:

             ```javascript
             const user = { ...this.state.user, age: 42 }
             this.setState({ user })
             ```

     2. **Calling `setState()` with a function:**

         ```javascript
         this.setState(prevState => ({
           user: {
             ...prevState.user,
             age: 42
           }
         }))
         ```


   **[⬆ Back to Top](#table-of-contents)**

112. ### How to use https instead of http in create-react-app?

     You just need to use `HTTPS=true` configuration. You can edit your `package.json` scripts section:

     ```json
     "scripts": {
       "start": "set HTTPS=true && react-scripts start"
     }
     ```

     or just run `set HTTPS=true && npm start`


   **[⬆ Back to Top](#table-of-contents)**

119. ### Why is a component constructor called only once?

     React's *reconciliation* algorithm assumes that without any information to the contrary, if a custom component appears in the same place on subsequent renders, it's the same component as before, so reuses the previous instance rather than creating a new one.


   **[⬆ Back to Top](#table-of-contents)**

125. ### What is the benefit of styles modules?

     It is recommended to avoid hard coding style values in components. Any values that are likely to be used across different UI components should be extracted into their own modules.

     For example, these styles could be extracted into a separate component:

     ```javascript
     export const colors = {
       white,
       black,
       blue
     }

     export const space = [
       0,
       8,
       16,
       32,
       64
     ]
     ```

     And then imported individually in other components:

     ```javascript
     import { space, colors } from './styles'
     ```

   **[⬆ Back to Top](#table-of-contents)**


126. ### What are the popular React-specific linters?

     ESLint is a popular JavaScript linter. There are plugins available that analyse specific code styles. One of the most common for React is an npm package called `eslint-plugin-react`. By default, it will check a number of best practices, with rules checking things from keys in iterators to a complete set of prop types.

     Another popular plugin is `eslint-plugin-jsx-a11y`, which will help fix common issues with accessibility. As JSX offers slightly different syntax to regular HTML, issues with `alt` text and `tabindex`, for example, will not be picked up by regular plugins.


   **[⬆ Back to Top](#table-of-contents)**
   
## React Testing

146. ### What is Shallow Renderer in React testing?

     *Shallow rendering* is useful for writing unit test cases in React. It lets you render a component *one level deep* and assert facts about what its render method returns, without worrying about the behavior of child components, which are not instantiated or rendered.

     For example, if you have the following component:

     ```javascript
     function MyComponent() {
       return (
         <div>
           <span className={'heading'}>{'Title'}</span>
           <span className={'description'}>{'Description'}</span>
         </div>
       )
     }
     ```

     Then you can assert as follows:

     ```jsx harmony
     import ShallowRenderer from 'react-test-renderer/shallow'

     // in your test
     const renderer = new ShallowRenderer()
     renderer.render(<MyComponent />)

     const result = renderer.getRenderOutput()

     expect(result.type).toBe('div')
     expect(result.props.children).toEqual([
       <span className={'heading'}>{'Title'}</span>,
       <span className={'description'}>{'Description'}</span>
     ])
     ```


   **[⬆ Back to Top](#table-of-contents)**
    
147. ### What is `TestRenderer` package in React?

     This package provides a renderer that can be used to render components to pure JavaScript objects, without depending on the DOM or a native mobile environment. This package makes it easy to grab a snapshot of the platform view hierarchy (similar to a DOM tree) rendered by a ReactDOM or React Native without using a browser or `jsdom`.

     ```jsx harmony
     import TestRenderer from 'react-test-renderer'

     const Link = ({page, children}) => <a href={page}>{children}</a>

     const testRenderer = TestRenderer.create(
       <Link page={'https://www.facebook.com/'}>{'Facebook'}</Link>
     )

     console.log(testRenderer.toJSON())
     // {
     //   type: 'a',
     //   props: { href: 'https://www.facebook.com/' },
     //   children: [ 'Facebook' ]
     // }
     ```


   **[⬆ Back to Top](#table-of-contents)**
    
148. ### What is the purpose of ReactTestUtils package?

     *ReactTestUtils* are provided in the `with-addons` package and allow you to perform actions against a simulated DOM for the purpose of unit testing.


   **[⬆ Back to Top](#table-of-contents)**
    
149. ### What is Jest?

     *Jest* is a JavaScript unit testing framework created by Facebook based on Jasmine and provides automated mock creation and a `jsdom` environment. It's often used for testing components.


   **[⬆ Back to Top](#table-of-contents)**
    
150. ### What are the advantages of Jest over Jasmine?

     There are couple of advantages compared to Jasmine:

     - Automatically finds tests to execute in your source code.
     - Automatically mocks dependencies when running your tests.
     - Allows you to test asynchronous code synchronously.
     - Runs your tests with a fake DOM implementation (via `jsdom`) so that your tests can be run on the command line.
     - Runs tests in parallel processes so that they finish sooner.


   **[⬆ Back to Top](#table-of-contents)**
    
151. ### Give a simple example of Jest test case

     Let's write a test for a function that adds two numbers in `sum.js` file:

     ```javascript
     const sum = (a, b) => a + b

     export default sum
     ```

     Create a file named `sum.test.js` which contains actual test:

     ```javascript
     import sum from './sum'

     test('adds 1 + 2 to equal 3', () => {
       expect(sum(1, 2)).toBe(3)
     })
     ```

     And then add the following section to your `package.json`:

     ```json
     {
       "scripts": {
         "test": "jest"
       }
     }
     ```

     Finally, run `yarn test` or `npm test` and Jest will print a result:

     ```console
     $ yarn test
     PASS ./sum.test.js
     ✓ adds 1 + 2 to equal 3 (2ms)
     ```

152. ### What is flux?

     *Flux* is an *application design paradigm* used as a replacement for the more traditional MVC pattern. It is not a framework or a library but a new kind of architecture that complements React and the concept of Unidirectional Data Flow. Facebook uses this pattern internally when working with React.

     The workflow between dispatcher, stores and views components with distinct inputs and outputs as follows:

     ![flux](images/flux.png)


   **[⬆ Back to Top](#table-of-contents)**

157. ### Can I dispatch an action in reducer?

     Dispatching an action within a reducer is an **anti-pattern**. Your reducer should be *without side effects*, simply digesting the action payload and returning a new state object. Adding listeners and dispatching actions within the reducer can lead to chained actions and other side effects.


   **[⬆ Back to Top](#table-of-contents)**

163. ### How to reset state in Redux?

     You need to write a *root reducer* in your application which delegate handling the action to the reducer generated by `combineReducers()`.

     For example, let us take `rootReducer()` to return the initial state after `USER_LOGOUT` action. As we know, reducers are supposed to return the initial state when they are called with `undefined` as the first argument, no matter the action.

     ```javascript
     const appReducer = combineReducers({
       /* your app's top-level reducers */
     })

     const rootReducer = (state, action) => {
       if (action.type === 'USER_LOGOUT') {
         state = undefined
       }

       return appReducer(state, action)
     }
     ```

     In case of using `redux-persist`, you may also need to clean your storage. `redux-persist` keeps a copy of your state in a storage engine. First, you need to import the appropriate storage engine and then, to parse the state before setting it to undefined and clean each storage state key.

     ```javascript
     const appReducer = combineReducers({
       /* your app's top-level reducers */
     })

     const rootReducer = (state, action) => {
       if (action.type === 'USER_LOGOUT') {
         Object.keys(state).forEach(key => {
           storage.removeItem(`persist:${key}`)
         })

         state = undefined
       }

       return appReducer(state, action)
     }
     ```

   **[⬆ Back to Top](#table-of-contents)**

166. ### Why are Redux state functions called reducers?

     Reducers always return the accumulation of the state (based on all previous and current actions). Therefore, they act as a reducer of state. Each time a Redux reducer is called, the state and action are passed as parameters. This state is then reduced (or accumulated) based on the action, and then the next state is returned. You could *reduce* a collection of actions and an initial state (of the store) on which to perform these actions to get the resulting final state.


   **[⬆ Back to Top](#table-of-contents)**

167. ### How to make AJAX request in Redux?

     You can use `redux-thunk` middleware which allows you to define async actions.

     Let's take an example of fetching specific account as an AJAX call using *fetch API*:

     ```javascript
     export function fetchAccount(id) {
       return dispatch => {
         dispatch(setLoadingAccountState()) // Show a loading spinner
         fetch(`/account/${id}`, (response) => {
           dispatch(doneFetchingAccount()) // Hide loading spinner
           if (response.status === 200) {
             dispatch(setAccount(response.json)) // Use a normal function to set the received state
           } else {
             dispatch(someError)
           }
         })
       }
     }

     function setAccount(data) {
      return { type: 'SET_Account', data: data }
     }
     ```

   **[⬆ Back to Top](#table-of-contents)**   
   
177. ### What are the differences between `call()` and `put()` in redux-saga?

     Both `call()` and `put()` are effect creator functions. `call()` function is used to create effect description, which instructs middleware to call the promise. `put()` function creates an effect, which instructs middleware to dispatch an action to the store.

     Let's take example of how these effects work for fetching particular user data.

     ```javascript
     function* fetchUserSaga(action) {
       // `call` function accepts rest arguments, which will be passed to `api.fetchUser` function.
       // Instructing middleware to call promise, it resolved value will be assigned to `userData` variable
       const userData = yield call(api.fetchUser, action.userId)

       // Instructing middleware to dispatch corresponding action.
       yield put({
         type: 'FETCH_USER_SUCCESS',
         userData
       })
     }
     ```

   **[⬆ Back to Top](#table-of-contents)**

179. ### What are the differences between `redux-saga` and `redux-thunk`?

     Both *Redux Thunk* and *Redux Saga* take care of dealing with side effects. In most of the scenarios, Thunk uses *Promises* to deal with them, whereas Saga uses *Generators*. Thunk is simple to use and Promises are familiar to many developers, Sagas/Generators are more powerful but you will need to learn them. But both middleware can coexist, so you can start with Thunks and introduce Sagas when/if you need them.


   **[⬆ Back to Top](#table-of-contents)**
   

   
