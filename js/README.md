
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
examples:- 
12 + ""    //Output is "12" as number 12 is converted to string "12"
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
7)Generator function 

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
ex:-    function calculateGST( productPrice ) {
               return productPrice * 0.05;
         }   

**[⬆ Back to Top](#table-of-contents)**

### What are lambda or arrow functions
arrow function arrow functions do not get their own 'this keyword' (lexical this keyword,) because it simply gets picked up from the outer lexical scope of the arrow function. basically an arrow function inherits the this keyword from the parent scope.

**[⬆ Back to Top](#table-of-contents)**

### What is a first class function
In Javascript, functions are first class objects. First-class functions means when functions in that language are treated like any other variable.
For example, in such a language, a function can be passed as an argument to other functions, can be returned by another function and can be assigned as a value to a variable.
ex:-    const handler = () => console.log ('This is a click handler function');
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
scope defines accessibility of variables, objects and functions in some particular part of programming code during runtime.
In other words, scope determines the visibility of variables and other resources in areas of your code.        

There are two types of scope in JavaScript.
1.Global scope: Variables declared outside of any function become global variables. so we can be access and modified from any function.
2.Local scope :
            a.Block Scope, it will apply only for let and const varibles but doesn't apply var varible
            b.Functional Scope, it will apply for let const and var
            
**[⬆ Back to Top](#table-of-contents)**
            
### scope chain
the JavaScript engine will try to find the variable’s value in the current scope.If it could not find the variable, it will look into the outer scope and will continue to do so until it finds the variable or reaches global scope.
If it’s still could not find the variable, it will either implicitly declare the variable in the global scope (if not in strict mode) or return an error.

**[⬆ Back to Top](#table-of-contents)**

### lexical scope
A lexical scope in JavaScript means that a variable defined outside a function can be accessible inside inside function defined after the variable declaration.
But the opposite is not true.
       var a = 10; 
          var par_func = function (){ // outermost function
            var b = 20;
            console.log("a and b is accessible (outer):", a, b);
            var innerFunc= function (){ // innermost function
              var c = 30;
              console.log("a and b and c is accessible (innner):", a, b, c);
            }
            innerFunc();
          }
          par_func()
        
        
**[⬆ Back to Top](#table-of-contents)**

### Closures
A closure is the combination of a function and the lexical environment which measn that function was declared.It is an inner function that has access to the outer or enclosing function’s variables. The closure has three scope chains.
The closure has three scope chains
 1.Own scope where variables defined between its curly brackets
 2.Outer function’s variables
 3.Global variables
        var a = 10; // variable a assigned to 10
        var par_func = function (){ // outermost function
          var b = 20;
          console.log("a and b is accessible (outer):", a, b);
          var innerFunc= function (){ // innermost function
            var c = 30;
            console.log("a and b and c is accessible (innner):", a, b, c);
           }
           return innerFunc;
        }
        var var25= par_func();
        var25();
        

**[⬆ Back to Top](#table-of-contents)**

### What are the possible ways to create objects in JavaScript
there are 5 ways to create object in js
1.Object Literal
2.using new Object() method 
3.using Object.create(proto,propertiesObject)
4.uinsg Constructor Function
5.using ES6 Classes

-Object Literal Way:
The Simplest and easiest way to create an object is using Object Literal “{}”. Just define properties and values inside curly braces
         let obj51={name:"Prajwal"};
         console.log(obj51.name);
        
-new Object() Way
way to create an Object is by using new Object() method. For simplicity, but readability and execution speed, by use object literal way.
         let obj52=new Object({name:"Prajwal"});
         console.log(obj52.name);

 Object Literal vs new Object()
{} is literal and literals are evaluated faster in JavaScript, but new Object() is a constructor call to function Object() which is having its own definition that takes comparatively more time to evaluate.

-Object.create(proto,propertiesObject) Way.this method creates a new object, using an existing object as the prototype of the newly created object.
it takes two parameters. The first parameter is a mandatory object that serves as the prototype of the new object to be created. The second parameter is an optional object which contains the properties to be added to the new object.
         let object53=Object.create(obj51,{new_property:{value:23}});

-Constructor Function Way
The constructor function is a function allows to create multiple objects of the same constructor function with the help of new keyword
Technically speaking, a constructor function is a regular function with the following convention:
* The name of a constructor function starts with a capital letter like Person, Document, etc.
* A constructor function should be called only with the new operator.
      function Constructor_fun(name,age,phone){
            this.name=name;
            this.age=age;
            this.phone=phone;
      }
      let obj54=new Constructor_fun("Prajwal");

-ES6 Classes
By using classes we can create a new objects.The constructor method is a special method of a class for creating and initializing an object instance of that class.
      class cls_Obj{
          constructor(name, age, phone){
            this.name=name;
            this.age=age;
            this.phone=phone;
          }
        }
        let obj55=new cls_Obj("Prajwal",23);

**[⬆ Back to Top](#table-of-contents)**

### function attached to an object

**[⬆ Back to Top](#table-of-contents)**

### Prototypes
Prototypes: are the mechanism by which JavaScript objects inherit features from one another. Every object in JavaScript has a built-in property called prototype.The prototype is itself an object.
When we try to access a property of an object: if the property can't be found in the object itself, the prototype is searched for the property. If the property still can't be found, then the prototype's prototype is searched, and so on until either the property is found, or the end of the chain is reached, in which case undefined is returned.
      const obj8={
          city:"Bangalore",
          greet:function (){
            console.log(`Greetings from ${this.city}`);
          }
      }
      console.log(obj8)//list of all the properties available to this object.these extra properties come from prototype
to check its own property or not using hasOwnProperty() method 
console.log(obj8.hasOwnProperty('city'));//true
console.log(obj8.hasOwnProperty('name'));//false
->Object.prototype, is the most basic prototype, that all objects have by default. The prototype of Object.prototype is null, so it's at the end of the prototype chain:
console.log(Object.getPrototypeOf(obj8));//Object {...}
console.log(Object.getPrototypeOf(Object.getPrototypeOf(obj8)));//null

**[⬆ Back to Top](#table-of-contents)**

### prototype chaining
When we try to access a property of an object: if the property can't be found in the object itself, the prototype is searched for the property. If the property still can't be found, then the prototype's prototype is searched, and so on until either the property is found, or the end of the chain is reached, in which case undefined is returned.
        let person_obj={
          name:"Veeresh",
          college:"B.M.S.C.E"
        }
        let person_obj2=Object.create(person_obj,{age:{value:"23"}});
        console.log(person_obj2.hasOwnProperty('age'));//true
        console.log(person_obj2.hasOwnProperty('name'));//false
        let person_obj3=Object.create(person_obj2,{number:{value:"9148302***"}});
        console.log(person_obj3.__proto__.__proto__.__proto__);
        console.log(Object.prototype.__proto__);
        
->Shadowing properties:

**[⬆ Back to Top](#table-of-contents)**

### Object Destructuring
OavaScript Object Destructuring is the syntax for extracting values from an object property and assigning them to a variable.

```let person={
   name:"Prajwal V",
   age:23,
   from:"Bengaluru"
}
let name=person.name;
let age=person.age;
let from=person.from;
```
We have to explicitly mention the name and age property with the user object in dot(.) notation, then declare variables accordingly and assign them. 
Setting default values and also we assign the age property to the age variable with the default value of 18.
```let{name,age,from}=person;
let{name,age:currentAge=18,from,contactNo='63628***',}=person;
```
if property not there in object it will take defult value

**[⬆ Back to Top](#table-of-contents)**

### SET
A set is a collection of items which are unique i.e no element can be repeated, values of any type.Set in ES6 are ordered: elements of the set can be iterated in the insertion order. Set can store any types of values whether primitive or objects.
To create a new empty Set, 
```let setObject = new Set();
```
The Set constructor also accepts an optional iterable object. If you pass an iterable object to the Set constructor, all the elements of the iterable object will be added to the new set:
Set methods:
1.add(value) – appends a new element with a specified value to the set.
2.clear()  – removes all elements from the Set object.
3.delete(value) – deletes an element specified by the value.
4.entries()– returns a new Iterator that contains an array of  [value, value]
5.forEach(callback [, thisArg]) – invokes a callback on each element of the Set with the this value sets to thisArg in each call.
6.has(value) – returns true if an element with a given value is in the set, or false if it is not.
7.keys() – is the same as values() function.

```let chars = new Set(['a', 'a', 'b', 'c', 'c']);
   console.log(chars);//Set { 'a', 'b', 'c' }
   console.log(chars.size);//  3
   console.log(chars instanceof Set);// true
   chars.add('d');// Set { 'a', 'b', 'c', 'd' }
   console.log(chars.has('a'));// true
   chars.delete('d'); //   Set { 'a', 'b', 'c',}
   chars.clear(); //Set{}
   
   for (let char of chars) {
    console.log(char);
   }
   
   for (let [key, value] of chars.entries()) { //Set also provides the keys(), values(), and entries() methods like the Map.Set are identical. 
    console.log(key === value);
   }
   
   Invoke a callback function on each element of a set,If you want to invoke a callback on every element of a set, you can use the forEach() method.
   chars.forEach(char => console.log(char.toUpperCase()));
   ``` 
**[⬆ Back to Top](#table-of-contents)**

### MAP
A data structure in which data is stored as key value pairs. In which a unique key maps to a value. Both the key and the value can be in any data type.A map is an iterable data structure. This means that the sequence of insertion is remembered and that we can access the elements in e.g. a for..of loop.

-A Map is ordered and iterable, whereas a objects is not ordered and not iterable
-We can put any type of data as a Map key, whereas objects can only have a number, string, or symbol as a key.
-A Map inherits from Map.prototype. This offers all sorts of utility functions and properties which makes working with Map objects a lot easier.
```let map = new Map([iterable]);
```
methods:
1.clear() – removes all elements from the map object.
2.delete(key) – removes an element specified by the key. It returns if the element is in the map, or false if it does not.
3.entries() – returns a new Iterator object that contains an array of [key, value] for each element in the map object. The order of objects in the map is the same as the insertion order.
4.forEach(callback[, thisArg]) – invokes a callback for each key-value pair in the map in the insertion order. The optional thisArg parameter sets the this value for each callback.
5.get(key) – returns the value associated with the key. If the key does not exist, it returns undefined.
6.has(key) – returns true if a value associated with the key exists, otherwise, return false.
7.keys() – returns a new Iterator that contains the keys for elements in insertion order.
8.values() returns a new iterator object that contains values for each element in insertion order.
9.set(key, value) – sets the value for the key in the map object. It returns the map object itself therefore you can chain this method with other methods.

```let userRoles = new Map();
   console.log(userRoles instanceof Map); // true
   userRoles.set(john, 'admin');
   
   let userRoles = new Map([  //Initialize a map with an iterable object
    [john, 'admin'],
    [lily, 'editor'],
    [peter, 'subscriber']
   ]);
   
   userRoles.get(john); // admin
   userRoles.get({name: 'Foo'}); //undefined 
   userRoles.has(lily); // true
   console.log(userRoles.size); // 3
   
   //Iterate over map keys
   for (const user of userRoles.keys()) {
      console.log(user.name);
   }
   //Iterate over map values
   for (let role of userRoles.values()) {
      console.log(role);
   }
   //entries()
   for (const role of userRoles.entries()) {
      console.log(`${role[0].name}: ${role[1]}`);
   }
   //forEach() method of the map object:
   userRoles.forEach((role, user) => console.log(`${user.name}: ${role}`));
  ```
 
 **[⬆ Back to Top](#table-of-contents)**

### weakSet
A WeakSet is similar to a Set except that it contains only objects.Just as with Sets, each object in a WeakSet may occur only once; all objects in a WeakSet's collection are unique.WeakSets are collections of objects only ,They cannot contain prmitive values like string,numbers,null,undfined If you try to add anything else than an object JavaScript will throw an error.
The WeakSet is weak,means {weakset objects loses all references it will be “marked”} for garbage collection.we know javascript has  garbage collection algorithm inside the JavaScript engine,which automatically removes old, unused objects from the computer memory. When this garbage collection happens this object is released from the memory. It is gone.we can’t predict when it will happen.WeakSets are not iterable.(No iteration and size property) in weakSet and wekMap objects
The main difference is that references to objects in Set are strong while references to objects in WeakSet are weak. i.e, An object in WeakSet can be garbage collected if there is no other reference to it.
1.Sets can store any value Whereas WeakSets can store only collections of objects
2.WeakSet does not have size property unlike Set
3.WeakSet does not have methods such as clear, keys, values, entries, forEach.
4.WeakSet is not iterable.

```var ws = new WeakSet();
   let my_weakSet=new WeakSet([obj2,obj3]);
   let obj={name:"prajwal",age:23}
   my_weakSet.add(obj);
   my_weakSet.delete(obj3);Removing objects from WeakSets using delete() method It will return true if the object was successfully removed. 
   console.log(my_weakSet.has(obj),my_weakSet.has(obj3));// Checking if object exists in a WeakSet
```

 **[⬆ Back to Top](#table-of-contents)**

### weakMap
The WeakMap object is a collection of key/value pairs in which the keys are weakly referenced. In this case, keys must be objects and the values can be arbitrary values. not with any other data type.all keys in a WeakMap are weakly referenced. This means that objects used as key for a WeakMap can still be garbage collected. This will happen when all references to those objects are gone.When these objects are no longer used by any part of the program,garbage collection will free them from memory.
The main difference is that references to key objects in Map are strong while references to key objects in WeakMap are weak. i.e, A key object in WeakMap can be garbage collected if there is no other reference to it. Other differences are,
1.Maps can store any key type Whereas WeakMaps can store only collections of key objects
2.WeakMap does not have size property unlike Map
3.WeakMap does not have methods such as clear, keys, values, entries, forEach.
4.WeakMap is not iterable.

```var ws = new WeakMap();
   ws.set(user);
   ws.has(user);    // true
   ws.delete(user); // removes user from the map
   ws.has(user);    // false, user has been removed
```

**[⬆ Back to Top](#table-of-contents)**
 
### CALLBACK hell
we tries to execute multiple asynchronous operations one after the other. By nesting callbacks The use of callbacks makes the code difficult to write and maintain. It also increases the difficulty of identifying the flow of the application,
```async1(function(){
    async2(function(){
        async3(function(){
            async4(function(){
                ....
            });
        });
    });
});
```


**[⬆ Back to Top](#table-of-contents)**

### promise
promise is an object  that may produce a single value some time in the future with either a resolved value or a reason that it’s not resolved(for example, network error). 
It will be in one of the 3 possible states: 
pending:initial state, neither fulfilled nor rejected.
fulfilled: meaning that the operation was completed successfully.
or rejected:meaning that the operation failed.
A pending promise can either be fulfilled with a value or rejected with a reason (error)

Promises are used to handle asynchronous operations. They provide an alternative approach for callbacks by reducing the callback hell and writing the cleaner code.
Creating a promise:create a promise in JavaScript, you use the Promise constructor:
   ```const promise = new Promise(resolve => {
        setTimeout(() => {
          resolve("I'm a Promise!");
        }, 5000);
     }, reject => {
   });
   promise.then(value => console.log(value));
   ```

**[⬆ Back to Top](#table-of-contents)**

### Consuming a Promise
by using then, catch, finally methods to further action with a promise that becomes settled.
         then():method is used to schedule a callback to be executed when the promise is successfully resolved.
         this method takes two callback functions:- promiseObject.then(onFulfilled, onRejected);
         catch():

**[⬆ Back to Top](#table-of-contents)**

### promise chaining
The instance method of the Promise object such as then(), catch(), or finally() returns a separate "promise object".Therefore, you can call the promise’s instance method on the return Promise. The successively calling methods in this way is referred to as the promise chaining.
The process of executing a sequence of asynchronous tasks one after another using promises is known as Promise chaining.
```let my_promise3=new Promise((resolve, reject)=>{
          setTimeout(()=>{
             resolve(1);
          },1*1000)
       })
       my_promise3.then((result)=>{
         console.log(result);
         return result*2
       }).then((result)=>{
        console.log(result);
        return result*3
       }).then((result)=>{
        console.log(result);
       })
```

**[⬆ Back to Top](#table-of-contents)**

### promise.all
Promise.all is a promise that takes an array of promises as an input (an iterable), and it gets resolved when all the promises get resolved or any one of them gets rejected.

```Promise.all([Promise1, Promise2, Promise3]) .then(result) => {   console.log(result) }) .catch(error => console.log(`Error in promises ${error}`)) ```
Note: Remember that the order of the promises(output the result) is maintained as per input order.

**[⬆ Back to Top](#table-of-contents)**

### promise.race
Promise.race() method will return the promise instance which is firstly resolved or rejected. example of race() method where promise2 is resolved first

```var promise1 = new Promise(function(resolve, reject) {
    setTimeout(resolve, 500, 'one');
   });
   var promise2 = new Promise(function(resolve, reject) {
    setTimeout(resolve, 100, 'two');
   });
   
   Promise.race([promise1, promise2]).then(function(value) {
      console.log(value); // "two" // Both promises will resolve, but promise2 is faster
   });
```

**[⬆ Back to Top](#table-of-contents)**

### try catch throw finally in js
When executing JavaScript code, errors will most definitely occur. These errors can occur due to the fault from the programmer’s side or the input is wrong or even if there is a problem with the logic of the program. When an error occurs, JavaScript will stop and generate an error message.
No one wants its software to fail or crash. Exceptions are the major reason for software failure. The exceptions can be handled in the program beforehand and prevent the execution from stopping. This is known as exception handling.exception handling is the mechanism for identifying the undesirable states that the program can reach and specifying the desirable outcomes of such states.Try-catch is the most common method used for handling exceptions in the program.
~The try statement lets you test a block of code to check for errors.
~The catch statement lets you handle the error if any are present.
~The throw statement lets you make your own errors.
~The finally statement lets you execute code, after try and catch.
~The finally block runs regardless of the result of the try-catch block.
```try {
  let result = add(10, 20);
  console.log(result);
} catch (e) {
  console.log({ name: e.name, message: e.message });
}
console.log('Bye');
```
```try {
      let result = add(10, 20);
      throw {name:'error',message:'please eneter valid i/p'}
   } catch (e) {
      console.log({ name: e.name, message: e.message });
   }
```

**[⬆ Back to Top](#table-of-contents)**

### What are the possible ways to create an array
An array in JavaScript can be defined and initialized in two ways, 1.array literal and 2.Array constructor way.
Array Literal syntax is simple. It takes a list of values separated by a comma and enclosed in square brackets. 
 ```let arr=["a","b","c","d","e","f"];```

Array Constructor initialize an array with Array constructor syntax using new keyword.
```var arrayName = new Array(element1, element2, element3,... elementN);
       let arr2=new Array();
```

**[⬆ Back to Top](#table-of-contents)**

### ways to empty the array 
4 Ways to Empty an Array in JavaScript
1.Assigning it to a new empty array
```let arr=[]; ```
2.set its length to zero
```arr.length=0; ```
3.Using splice() method,splice method removing or replacing existing elements
```arr.splice(0,arr.length)```
4.Using pop() method:remove each element of the array one by one using the while loop and pop()
``` while(arr.length){
        arr.pop();
    }
```

**[⬆ Back to Top](#table-of-contents)**

### rest parameter and spread operator























































