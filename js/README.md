
### Table of Contents

| No. | Questions |
|---- | ---------
|1  | [How JavaScript engine executes a script?](#what-are-the-possible-ways-to-create-objects-in-javascript) |
|2  | [call stack](#what-is-a-prototype-chain)|
|3  | [event-loop](#what-is-the-difference-between-call-apply-and-bind)|
|2  | [threadpool](#what-is-a-prototype-chain)|
|2  | [Browser API](#what-is-a-prototype-chain)|
|2  | [callback queue](#what-is-a-prototype-chain)|
|2  | [micro-task](#what-is-a-prototype-chain)|
|4  | [data types in js](#what-is-json-and-its-common-operations)|
|5  | [primitive data types](#what-is-the-purpose-of-the-array-slice-method)|
|6  | [composite data types](#what-is-the-purpose-of-the-array-splice-method)|
|7  | [Hoisting](#what-is-the-difference-between-slice-and-splice)|
|8  | [TDZ temporal dead zone](#how-do-you-compare-object-and-map)|
|9  | [let v/s const v/s var](#what-is-the-difference-between--and--operators)|
|10 | [Strict equality (===) and equality(==)](#what-are-lambda-or-arrow-functions)|
|11 | [JavaScript is a loosely typed and dynamic language](#what-is-a-first-class-function)|
|12 | [difference between type conversion and type coercion](#what-is-a-first-order-function)|
|13 | [pass by value and pass by reference](#what-is-a-higher-order-function)|
|14 | [deep and shallow copies](#what-is-a-unary-function)|
|15 | [Function](#what-is-the-currying-function)|
|16 | [IIFE immediately-invoked-function-expression](#what-is-a-pure-function)|
|16 | [Anonymous Function](#what-is-a-pure-function)|
|17 | [Higher Order Functions](#what-is-the-purpose-of-the-let-keyword)|
|18 | [callback functions](#what-is-the-difference-between-let-and-var)|
|19 | [What is a pure function](#what-is-the-reason-to-choose-the-name-let-as-a-keyword)|
|20 | [What are lambda or arrow functions](#how-do-you-redeclare-variables-in-switch-block-without-an-error)|
|21 | [What is a first class function](#what-is-the-temporal-dead-zone)|
|22 | [What is a first order function](#what-is-iifeimmediately-invoked-function-expression)|
|23 | [What is a unary function](#how-do-you-decode-or-encode-a-url-in-javascript)|
|23 | [Generator function](#what-is-json-and-its-common-operations)|
|24 | [recurstion](#what-is-memoization)|
|25 | [this keyword](#what-is-hoisting)|                  need callbacks
|26 | [call-bind-apply methods](#what-are-classes-in-es6)|
|27 | [scope](#what-are-closures)|
|28 | [lexical scope](#what-are-modules)|
|29 | [Closures](#why-do-you-need-modules)|
|30 | [What are the possible ways to create objects in JavaScript](#what-is-scope-in-javascript)|
|31 | [function attached to an object](#what-is-a-service-worker)|
|32 | [Prototypes](#how-do-you-manipulate-dom-using-a-service-worker)|
|33 | [prototype chaining](#how-do-you-reuse-information-across-service-worker-restarts)|
|34 | [Object Destructuring](#what-is-indexeddb)|
|35 | [set](#what-is-web-storage)|
|36 | [map](#what-is-a-post-message)|
|37 | [weakSet](#what-is-a-cookie)|
|38 | [weakMap](#why-do-you-need-a-cookie)|
|39 | [need callbacks](#what-are-the-options-in-a-cookie)|
|40 | [CALLBACK hell](#how-do-you-delete-a-cookie)|
|41 | [promise](#What-are-the-differences-between-cookie-local-storage-and-session-storage)|
|42 | [Consuming a Promise](#what-is-the-main-difference-between-localstorage-and-sessionstorage)|
|43 | [promise chaining](#how-do-you-access-web-storage)|
|44 | [try catch throw finally in js](#what-are-the-methods-available-on-session-storage)|
|45 | [What are the possible ways to create an array](#what-is-a-storage-event-and-its-event-handler)|
|46 | [ways to empty the array](#why-do-you-need-web-storage)|
|47 | [rest parameter and spread operator](#how-do-you-check-web-storage-browser-support)|
|48 | [constructor](#how-do-you-check-web-workers-browser-support)|
|49 | [ES6 class](#give-an-example-of-web-worker)|
|50 | [use strict](#what-are-the-restrictions-of-web-workers-on-dom)|
|51 | [array methods](#what-is-a-promise)|
|52 | [string methods](#why-do-you-need-a-promise)|
|53 | [object methods](#what-are-the-three-states-of-promise)|
|54 | [map methods](#what-is-a-callback-function)|
|55 | [set methods](#why-do-we-need-callbacks)|
|56 | [Math Methods](#what-is-a-callback-hell)|
|57 | [DOM Methods](#what-is-server-sent-events)|
|58 | [date Methods](#how-do-you-receive-server-sent-event-notifications)|
|59 | [DOM](#how-do-you-check-browser-support-for-server-sent-events)|
|60 | [DOM selectors](#what-are-the-events-available-for-server-sent-events)|
|61 | [window vs document](#what-are-the-main-rules-of-promise)|
|62 | [window.onload vs document.onload](#what-is-callback-in-callback)|
|63 | [what are the possible ways of making an API call in JavaScript](#what-is-promise-chaining)|
|64 | [What is web storage](#what-is-promise.all)|
|65 | [What is a cookie](#what-is-the-purpose-of-race-method-in-promise)|
|66 | [local storage ](#what-is-a-strict-mode-in-javascript)|
|67 | [session storage](#why-do-you-need-strict-mode)|
|68 | [What is IndexedDB](#how-do-you-declare-strict-mode)|
|69 | [JSON](#what-is-the-purpose-of-double-exclamation)|
|70 | [JQUERY](#what-is-the-purpose-of-double-exclamation)|
|71 | [Async & await](#what-is-the-purpose-of-double-exclamation)|


### How JavaScript engine executes a script
when JavaScript engine executes a script, it creates execution contexts. Each execution context has two phases: the creation phase and the execution phase.

creation phase:-
When a script executes for the first time, the JavaScript engine creates a Global Execution Context. During this creation phase it performs the following 
1.Create a global object i.e., window in the web browser or global in Node.js.
2.creates special variable called this  which points to the global object.
3.Setup a memory heap for storing variables and function references.
4.Store the function declarations in the memory heap and variables within the global execution context with the 
initial values as undefined.

The execution phase:-
During the execution phase, the JavaScript engine executes the code line by line. In this phase, it assigns values to variables and executes the function calls.
For every function call, the JavaScript engine creates a new Function Execution Context. The Function Execution Context is similar to the Global Execution Context, but instead of creating the global object, it creates the arguments object that contains a reference to all the parameters passed into the function.
To keep track of all the execution contexts, including the Global Execution Context and Function Execution Contexts,
the JavaScript engine uses a data structure named call stack.

**[⬆ Back to Top](#table-of-contents)**

### call stack
JavaScript engine uses a call stack to manage execution contexts: the Global Execution Context and Function Execution Contexts. The call stack works based on the LIFO principle i.e., last-in-first-out.

When we execute a script, the JavaScript engine creates a Global Execution Context and pushes it on top of the call stack.Whenever a function is called, the JavaScript engine creates a Function Execution Context for the function, pushes it on top of the Call Stack, and starts executing the function. If a function calls another function, the JavaScript engine creates a new Function Execution Context for the new function that is being called and pushes it on top of the call stack. When the current function completes, the JavaScript engine pops it from the call stack and resumes the execution where it left off in the last code listing. The script will stop when the call stack is empty.

**[⬆ Back to Top](#table-of-contents)**

### event Loop
JavaScript is a single-threaded programming language. measns, JavaScript can do only one thing at a single point in time.but When we call the setTimeout() function, make a fetch request or click a button, the web browser can do these activities concurrently and asynchronously. The setTimeout(), fetch requests, and DOM events are parts of the Web APIs of the web browser.
so browesr has js-engine,threadpool,callbackqueue,eventloop,microtask,Browser API 
javaScript engine place the setTimeout() return, fetch requests return, and DOM events into a callback queue.
The event loop is a constantly running process that monitors both the callback queue and the call stack.If the call stack is not empty, the event loop waits until it is empty and places the next function from the callback queue to the call stack. If the callback queue is empty.

### callbackqueue
javaScript maintains a queue of callback functions. It is called a callback queue or task queue. A queue data structure is First-In-First-Out(FIFO). So, the callback function that first gets into the queue has the opportunity to go out first. Callback Queue gets the ordinary callback functions coming from the setTimeout() API after the timer expires. Callback Queue has lesser priority than Microtask Queue of fetching the callback functions to Event Loop.

**[⬆ Back to Top](#table-of-contents)**

### microtask 
Microtask Queue is like the Callback Queue, but Microtask Queue has higher priority. All the callback functions coming through Promises. Promise handling always has higher priority so the JavaScript engine executes all the tasks from Microtask Queue and then moves to the Callback Queue. Microtask Queue has higher priority than Callback Queue of fetching the callback functions to Event Loop.

**[⬆ Back to Top](#table-of-contents)**

### threadpool

**[⬆ Back to Top](#table-of-contents)**

### Browser API 


**[⬆ Back to Top](#table-of-contents)**

### data types in js
Data types basically specify what kind of data can be stored and manipulated within a program.
There are 7 Primitive data types and Object, Array, and Function (which are all types of objects) are composite data types in JavaScript

### 1. primitive data types
1.The Boolean data type :- can hold only two values: true or false.
JavaScript, there are only five falsy values-> zero, the empty string, undefined, null,NAN

2.Undefined :- (is a primitive type in JavaScript.)type The undefined data type can only have one value-the special value undefined. If a variable has been declared, but has not been assigned a value, has the value undefined.undefined is a property of the global object. That is, it is a variable in global scope. The initial value of undefined is the primitive value A variable that has not been assigned a value is of type undefined.
(A variable or an object has an undefined value when no value is assigned before using it.)
JavaScript uses the undefined value in the following situations.
1) Accessing an uninitialized variable
2) Accessing a non-existing property of an object
3) Function parameters :- call the a function and don’t pass all the arguments, the parameters inside the function becomes undefined
4) Functions return a value :- A function that doesn’t have a return statement implicitly returns undefined
5) Accessing out-of-bounds array elements 

3.null type:- You can assign null to a variable to denote that currently that variable does not have any value but it will have later on. A null means absence of a value.(JavaScript uses the null value to represent the intentional absence of any object value.),typeof null is object

4.NAN :- stands for 'Not a Number' It represents a value which is not a valid number.NaN is a property of the global object. 
NaN, It is a result of an invalid or an undefined mathematical operation.
Operations return NaN
1) Parsing numbers :- If JavaScript cannot convert a string to a number, it returns NaN. In this case, NaN indicates that the parsing has failed.
   ex:- parseInt('x100')
2) Use undefined as an operand :- console.log(undefined * 2); // NaN
3) Using NaN as an operand :- console.log( 10 + 1 / NaN ); // NaN
4) Using indeterminate forms :- When an arithmetical operation is in the indeterminate form, it returns NaN ex:- console.log(10 + 0 / 0); // NaN
5) Using invalid arguments of math functions :- When a math function receives an invalid argument, it returns NaN 
   ex:- console.log( Math.sqrt(-1));// NaN  Since it only accepts a non-negative number, passing -1 results in NaN.

5.number type :- Js The number data type is used to represent positive or negative  or decimal place, the JavaScript number type uses the IEEE-754 format.
ES2020 introduced a new primitive type bigint that represent big integer numbers whose values are larger than 2^53 – 1.

6.string type :- String type is used to represent textual data. It is a set of "elements" of 16-bit unsigned integer values,Each element in the String occupies a position in the String. The first element is at index 0, the next at index 1, and so on. The length of a String is the number of elements in it.
Strings are created using single or double quotes.JavaScript strings are immutable. This means that once a string is created, it is not possible to modify it.
   
7.Symbol type.

**[⬆ Back to Top](#table-of-contents)**

### composite data types
    arr,objects,function
 
**[⬆ Back to Top](#table-of-contents)**

### Hoisting
When the JavaScript engine executes the JavaScript code, it creates the global execution context. The global execution context has two phases: creation and execution.During the creation phase, the JavaScript engine moves the variable and function declarations to the top of your code. This feature is known as hoisting in JavaScript. so we can use functions and variables before they're declared.

**[⬆ Back to Top](#table-of-contents)**

### TDZ temporal dead zone
there is a period between entering scope and being declared where they cannot be accessed. This period is the temporal dead zone (TDZ). Accessing let and const varibles  in the inner scope still causes a ReferenceError. If let were not hoisted, it would log outer value. The TDZ is a good thing because it helps to highlight bugs—accessing a value before it has been declared is rarely intentional.
The TDZ also applies to default function arguments. Arguments are evaluated left to right, and each argument is in the TDZ until it is assigned
            function testDefaults(a = b, b) { }
            testDefaults(undefined, 1);

**[⬆ Back to Top](#table-of-contents)**

### let v/s const v/s var
using these three we can declare a variable in JavaScript,
VAR:
Before the ES6, var was var only way to declare variables. and let and var after ES 2015.
->Scope of var: When we declare a variable outside a function its scope is global.the variables whose declaration happens with "var" outside a function (even within a block) are accessible in the whole window. but when the declaration of a variable occurs inside a function, it is available and accessible only within that function. that's why var is function scope.
->Re-declaration of "var" variables:The variables declared using var can be re-declared within the same scope also, and it will not raise any error.
->Hoisting of var:So var variables hoist to the top of its scope and initialize with a value of undefined.

LET:In ES 2015 release, ES released one more keyword for declaration of variables, which is known as the "let".
->Scope of let:let is block scoped. A block is a chunk of code bounded by {}. Moreover, a variable that one declares in a block with the "let" is only available for use within that block only."let" are block-scoped and can't access outside the block in which the declaration happens.
->Re-declaration of "let" variables:The variable declared using let can't be re-declared.
->Hoisting of let: let declarations hoist to the top. But, unlike var, which initializes as undefined, the let keyword does not initialize. So if you try to use a let variable before the declaration, you'll get a "Reference Error".

CONST: Variables declared with the "const" keyword maintain constant values and can't change their values during the scope. 
Scope of const:Similar to let, the scope of the const variables is also blocked.
Re-declaration of const variables:Similar to let variables, the variable declared using const can't be re-declared.
Hoisting of const:Just like "let", "const" declarations hoist to the top but don't initialize.

**[⬆ Back to Top](#table-of-contents)**

### Strict-equality vs equality 
==(equality operator or loose equality operator) and the other one is === (strict equality operator). Both of these operators check the value of operands for equality. But, the difference between == & === is that the == does a type conversion before checking for equality.

**[⬆ Back to Top](#table-of-contents)**

### JavaScript is a loosely typed and dynamic language
means we don’t have to explicitly specify types of variables and objects. but in A strongly typed language we should specified what kind of data/value we are storing it but TypeScript is a superset of JavaScript it is strongly typed language.

**[⬆ Back to Top](#table-of-contents)**

### difference between type conversion and type coercion
type coercion:- is the automatic or implicit conversion of values from one data type to another,the coercion is done implicitly. When JavaScript operates in a wrong data type, it will try to convert the value to the right data type.
examples:- 12 + ""    //Output is "12" as number 12 is converted to string "12"
           "15" * 2    //Output is 30 as string 15 is converted to number 15
           undefined + 6 //Output is NaN as undefined could not be converted to number
           "Hello" + null  //Output is "Hellonull", as null is converted to string "null"
           null + 25     //Output is 25, as null is converted to 0.
           true + true //Output is 2, as true is converted to number 1.
           false + 10 //Output is 10, as false is converted to number 0.
           10 * [6] //Output is 60, as [6] is converted to number 6.
           10 * [10, 20] //Output is NaN, as [10, 20] could not be converted to number
           [1] + [1,2] //Output is "11,2" as [1] is converted to "1" and [1,2] is converted "1,2". Finally the two are concatenated to give the result "11,2"
           
Type conversion:- (In this case, type conversion is explicitly done in the code by the developer.) JavaScript provides inbuilt methods for type conversion. using the inbuilt functions like Number(), String(), Boolean(),paresInt() etc.
examples:-1)Converting to Number:- The Number() global method is used to convert any other data type value to numeric values.
            Number("25") //Output is 25 as "25" string is converted to number 25
            Number("") //Output is 0 as "" string is converted to 0
            Number([]) //Output is 0 as [] is converted to 0
            Number(null) //Output is 0 as null is converted to 0
            Number(true) //Output is 1 as true is converted to 1
            Number(false) //Output is 0 as false is converted to 0
            Number("Test") //Output is NaN as "Test" could not be converted to number
            parseInt() and parseFloat() methods can also be used to convert numbers stored as a string to a number. 
            For all other data types, it will return NaN.
         2)Converting to String :-The String() global method is used to convert any other data type value to string values.
            String(25) //Output is "25" as 25 is converted to string "25"
            String([]) //Output is "" as [] is converted to empty string ""
            String(null) //Output is "null" as null is converted to string "null"
            String(true) //Output is "true" as true is converted to string "true"
            String(false) //Output is "false" as false is converted to string "false"
            String({}) //Output is "[object Object]" as {} is converted to string(similar to calling toString() on a object)
         3)Converting to Boolean:- The Boolean() global method is used to convert any other data type value to Boolean values.
            Boolean(25) //Output is true
            Boolean([]) //Output is true
            Boolean(null) //Output is false
            Boolean({}) //Output is true
            Boolean("Yeah! I will be converted to Boolean.") //Output is true
            
**[⬆ Back to Top](#table-of-contents)**

### pass by value and pass by reference 
passed by value:-
In JavaScript, all function arguments are always passed by value. It means that JavaScript copies the values of the variables into the function arguments.
Any changes that you make to the arguments inside the function do not reflect the passing variables outside of the function. In other words, the changes made to the arguments are not reflected outside of the function.

passed by reference  value:-
If function arguments are passed by reference, the changes of variables that you pass into the function will be reflected outside the function.This is not possible in JavaScript. passing paramaters as objects

**[⬆ Back to Top](#table-of-contents)**

### deep and shallow copies
shallow copies:-
When a reference variable is copied into a new reference variable using the assignment operator, a shallow copy of the referenced object is created. In simple words, a reference variable mainly stores the address of the object it refers to. When a new reference variable is assigned the value of the old reference variable, the address stored in the old reference variable is copied into the new one. This means both the old and new reference variable point to the same object in memory. As a result if the state of the object changes through any of the reference variables it is reflected for both. 
ex:- 
      var employee = {
          eid: "E102",
          ename: "Jack",
          eaddress: "New York",
          salary: 50000
      }
      var newEmployee = employee;    // Shallow copy

deep copies:-
deep copy makes a copy of all the members of the old object, allocates separate memory location for the new object and then assigns the copied members to the new object. In this way, both the objects are independent of each other and in case of any modification to either one the other is not affected. Also, if one of the objects is deleted the other still remains in the memory. Now to create a deep copy of an object in JavaScript we use JSON.parse() and JSON.stringify() methods. 
ex:-
      var employee = {
          eid: "E102",
          ename: "Jack",
          eaddress: "New York",
          salary: 50000
      }
      var newEmployee = JSON.parse(JSON.stringify(employee)); //Deep Copy
      
Here the new object is created using the JSON.parse() and JSON.stringify() methods of JavaScript. JSON.stringify() takes a JavaScript object as argument and then transforms it into a JSON string. This JSON string is passed to the JSON.parse() method which then transforms it into a JavaScript object. This method is useful when the object is small and has serializable properties. But if the object is very large and contains certain non-serializable properties then there is a risk of data loss. Specially if an object contains methods then JSON.stringify() will fail as methods are non-serializable. There are better ways to deep clone of which one is Lodash which allows cloning methods as well.

Lodash To Deep Copy:(https://www.geeksforgeeks.org/what-is-shallow-copy-and-deep-copy-in-javascript/)
Lodash is a JavaScript library that provides multiple utility functions and one of the most commonly used function of the Lodash library is the cloneDeep() method. This method helps in deep cloning of an object and also clones the non serializable properties which were a limitation in the JSON.stringify() approach.
ex:-
   const lodash = require('lodash');
   var employee = {
       eid: "E102",
       ename: "Jack",
       eaddress: "New York",
       salary: 50000,
       details: function () {
           return "Employee Name: "
               + this.ename + "-->Salary: "
               + this.salary;
       }
   }
   var deepCopy = lodash.cloneDeep(employee);

**[⬆ Back to Top](#table-of-contents)**

### Function 
is a A block of code which we can use multiple times, so you define or declare it once, and then  use it wherever we want as many times.
different ways of declaring a function in JS
1)Function Expression:-   var greet = function () { }
2)Anonymous Function:-  
3)Immediately Invoked Function Expressions (IIFE)
4)Constructor Function
5)Arrow Function
6)regular function
7)Generator function  = - - - - - - - - - - - - - - - - -

**[⬆ Back to Top](#table-of-contents)**

### IIFE immediately-invoked-function-expression
Immediately Invoked Function Expressions (IIFE) are functions that can be stated as expressions or normal declarations and use the anonymous property of the function expression to execute its code. If you want to execute a function immediately after the declaration, use IIFE. This is executed by wrapping the anonymous function in parentheses and ending it with a semicolon.
          (function () {
            console.log("Welcome to Javascript");
          })();

**[⬆ Back to Top](#table-of-contents)**

### Anonymous Function 
Anonymous function declaration allows function names to appear hidden in the declaration itself. An anonymous function can also be an argument of a function hence, it can be declared inside another function as its parameters.
    setTimeout(
        function () {
          console.log("Executed after three seconds");
        }  , 3000 // delay in milliseconds
    )

**[⬆ Back to Top](#table-of-contents)**

### Higher Order Functions
A higher order function is a function that takes a function as an argument, or returns a function.we are using higher-order functions when passing callback functions.some pre-defined methods are map,filter,settimout,Eventlistener these methods take a function as an argument.
ex:-  const firstOrderFunc = () => console.log ('Hello, I am a First order function');
      const higherOrder = ReturnFirstOrderFunc => ReturnFirstOrderFunc();
      higherOrder(firstOrderFunc);

**[⬆ Back to Top](#table-of-contents)**

### callback functions
A callback function is a function passed into another function as an argument. This function is invoked inside the outer function to complete an action.
this callback function uesd in many inbuild methods: like,filter,map,addEventListener

**[⬆ Back to Top](#table-of-contents)**

### What is a pure function
Pure Function is a function (a block of code ) that always returns the same result if the same arguments are passed. It does not depend on any state, or data change during a program’s execution rather it only depends on its input arguments. Also a pure function does not produce any observable side effects such as network requests or data mutation etc.
ex:-        function calculateGST( productPrice ) {
               return productPrice * 0.05;
            }

**[⬆ Back to Top](#table-of-contents)**

### What are lambda or arrow functions
arrow function arrow functions do not get their own 'this keyword' (lexical this keyword,) because it simply gets picked up from the outer lexical scope of the arrow function. basically an arrow function inherits the this keyword from the parent scope.

**[⬆ Back to Top](#table-of-contents)**

### What is a first class function
In Javascript, functions are first class objects. First-class functions means when functions in that language are treated like any other variable.
For example, in such a language, a function can be passed as an argument to other functions, can be returned by another function and can be assigned as a value to a variable.
ex:-     const handler = () => console.log ('This is a click handler function');
         document.addEventListener ('click', handler);

**[⬆ Back to Top](#table-of-contents)**

### What is a first order function
First-order function is a function that doesn’t accept another function as an argument and doesn’t return a function as its return value.
ex:- const firstOrder = () => console.log ('I am a first order function!');

**[⬆ Back to Top](#table-of-contents)**

### Unary function
Unary function (i.e. monadic) is a function that accepts exactly one argument. It stands for a single argument accepted by a function.
const unaryFunction = a => console.log (a + 10); // Add 10 to the given argument and display the value

**[⬆ Back to Top](#table-of-contents)**

### Generator function
https://www.javascripttutorial.net/es6/javascript-generators/ 
In JavaScript, a regular function is executed based on the run-to-completion model. It cannot pause midway and then continues from where it paused. ES6 introduces a new kind of function that is different from a regular function: function generator or generator.
A generator can pause midway and then continues from where it paused.
First, you see the asterisk (*) after the function keyword. The asterisk denotes that the generate() is a generator, not a normal function.
Second, the yield statement returns a value and pauses the execution of the function
      ex: function* generate() {
             console.log('invoked 1st time');
             yield 1;
             console.log('invoked 2nd time');
             yield 2;
           }

**[⬆ Back to Top](#table-of-contents)**

### recurstion
recurstion is a method of solving problems by breaking them  into smaller subsets of the main problem, so we can use this samll subset to find solustion.in programming we can achive this by calling a function itself, usually with a different input passed to the child function. It calls itself over and over until an exit condition is reached, and then passes the results back up the call stack.

if we doing with recurstion in programming we should keep two things in mind
   1.base condition 
   2.what is the return type
         
there are many different way to do recurstion
   1.tail recurstion- when a recursive call is the last thing
   2.Head Recursion- when a recursive call is the first thing
   3.Tree Recursion-
   4.Indirect Recursion-
   5.Nested Recursion-

**[⬆ Back to Top](#table-of-contents)**

### this keyword
https://www.javascripttutorial.net/javascript-this/
the this references the object of which the function is a property. In other words, the this references the object that is currently calling the function.
Which object depends on how this is being invoked (used or called).

The this keyword refers to different objects depending on how it is used:
In an object method, this refers to the object.
Alone, this refers to the global object.
In a function, this refers to the global object.
In a function, in strict mode, this is undefined.
In an event, this refers to the element that received the event.
Methods like call(), apply(), and bind() can refer this to any object.

ex:- Suppose you have an object called counter that has a method next(). When you call the next() method, you can access the this object.
let counter = {
  count: 0,
  next: function () {
    return ++this.count;
  },
};
counter.next();
Inside the next() function, the this references the counter object. See the following method call:
The next() is a function that is the property of the counter object. Therefore, inside the next() function, the this references the counter object.


but In the global context, the this references the global object, which is the window object on the web browser or global object on Node.js.
but in arrow functions do not get their own 'this keyword' (lexical this keyword,) because it simply gets picked up from the outer lexical scope of the arrow function.
basically an arrow function inherits the this keyword from the parent scope.
console.log(`in global execution context 'this keyword' points to window object: `,this);
 var obj={
            firstName:"Prajwal",
            lastName:"Veeresh",
            method:function(){
                console.log(`in function execution context 'this keyword' points to parent object of method: `,this);
                console.log(`fullName: ${this.firstName} ${this.lastName}`);
            }
        }
        obj.method();
        
arrow function arrow functions do not get their own 'this keyword' (lexical this keyword,) because it simply gets picked up from the outer lexical scope of the arrow function. basically an arrow function inherits the this keyword from the parent scope.
        var obj2={
            from:"Bangalore",
            method:()=>{
                console.log(this);// O/P window object
            }
        }
        obj2.method();
        var obj3={
            to:'USA',
            inside_obj:{
                flightNo:145678,
                inside_method:()=>{
                    console.log(this);// O/P window object
                }
            }
        }
        obj3.inside_obj.inside_method();        
        
**[⬆ Back to Top](#table-of-contents)**

### call-bind-apply methods
call,bind,apply methods to tie a function into an object and call the function as if it belonged to that object The bind method creates a copy of the function and sets the this keyword
Call: The call() method invokes a function with a given this value and arguments provided one by one
Apply: Invokes the function with a given this value and allows you to pass in arguments as an array
bind: returns a new function, allowing you to pass any number of arguments

Call and apply are pretty interchangeable. Both execute the current function immediately. You need to decide whether it’s easier to send in an array or a comma separated list of arguments. You can remember by treating Call is for comma (separated list) and Apply is for Array.
Whereas Bind creates a new function that will have this set to the first parameter passed to bind().
var employee1 = {firstName: 'John', lastName: 'Rodson'};
var employee2 = {firstName: 'Jimmy', lastName: 'Baily'};
function invite(greeting1, greeting2) {
    console.log(greeting1 + ' ' + this.firstName + ' ' + this.lastName+ ', '+ greeting2);
}

call
invite.call(employee1, 'Hello', 'How are you?'); // Hello John Rodson, How are you?
invite.call(employee2, 'Hello', 'How are you?'); // Hello Jimmy Baily, How are you?

apply
invite.apply(employee1, ['Hello', 'How are you?']); // Hello John Rodson, How are you?
invite.apply(employee2, ['Hello', 'How are you?']); // Hello Jimmy Baily, How are you?
        
bind
var inviteEmployee1 = invite.bind(employee1);
var inviteEmployee2 = invite.bind(employee2);
inviteEmployee1('Hello', 'How are you?'); // Hello John Rodson, How are you?
inviteEmployee2('Hello', 'How are you?'); // Hello Jimmy Baily, How are you?

**[⬆ Back to Top](#table-of-contents)**

### scope

        
