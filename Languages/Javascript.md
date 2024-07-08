Javascript / Java (same thing) is the language used to make websites by making them dynamic.
- [Just-in-time-compiled](https://www.howtogeek.com/devops/what-is-just-in-time-jit-compilation/#what-does-jit-compilation-do) - Compiling of program while it's being executed.
- [Prototype-based](https://developer.mozilla.org/en-US/docs/Glossary/Prototype-based_programming)
- Single-threaded
- Dynamic language

``` Javascript
console.log("Hello World");
```

In JS, you can use a template literal to interpolate dynamic values into a string templates. Kinda like python f-string.
Template literals start with back-ticks. It allows us to interpolate dynamic values into string template.
``` Javascript
const v = 5; //declare using const
let w = 5; // declare using let
console.log(`v is ${v}`);
```

### null
It's null. Most programming languages have it. null values are 'falsy'
**Conversion^ - 
- False - boolean
- 0 - number zero
- '' = empty string 

### undefined
poor man's null.

**undefined** means the variable was never assigned a value.
**null** is just same but we assign it explicitly. It doesn't mean we can't assign undefined.

### Operators and if-else
Normal operator usage and normal if else and ternary operator like python or c.

### Functions 
``` Javascript
console.log(getLabel(3))
// prints 'awful'

function getLabel(numStars) {
  if (numStars > 7) {
    return 'great'
  } else if (numStars > 3) {
    return 'okay'
  } else {
    return 'awful'
  }
}
```
JS interpreter reads whole first and function definition are globally scoped, then goes back to executing where it is called. In JS it doesn't matter where the function definitions occur. 

#### Other ways to define a function
```Javascript
//using the function keyworkd
function add(x, y) {
    return x + y;
}
const add = function(x, y) {
  return x + y
}

// Fat arrow function
const add = (x, y) => {
  return x + y
}
```

### Arrays
These are dynamically allocated arrays. Python list. C++ vectors.
``` Javascript
const numbers = [1, 2, 3, 4, 5]
const strings = ['banana', 'apple', 'pear']
const miscellaneous = [true, 7, 'adamantium']
numbers.push(6);
console.log(numbers[0])
```
### Loops 
```Javascript
for (let i = 0; i < 10; i++) {
  console.log(i)
}

let list = [4, 5, 6];
// for...in return the keys
for (let i in list) {
  console.log(i); // "0", "1", "2",
}
//for...of return the values.
for (let i of list) {
  console.log(i); // 4, 5, 6
}
```
