A variable provides us with named storage that our programs can manipulate. Each variable in C++ has a type. The type determines the size and layout of the variable’s memory, the range of values that can be stored within that memory, and the set of operations that can be applied to the variable

## Variable Definitions
A simple variable definition consists of a type specifier, followed by a list of one or more variable names separated by commas, and ends with a semicolon.
`int cum = 0;`

### Initialize
An object that is initialized gets the specified value at the moment it is created.
`double price = 109.99, discount = price * 0.16;`
`double foo = fn(foo, bar);`

<mark style="background: #FF5582A6;">*NOTE* - Initialization is not assignment. Initialization happens when a variable is given a value when it is created. Assignment obliterates an object’s current value and replaces that value with a new one.</mark>

- [List initialization](https://en.cppreference.com/w/cpp/language/list_initialization)
- [Default initialization](https://en.cppreference.com/w/cpp/language/default_initialization)- This is the initialization performed when an object is constructed with no initializer. - `std::string empty`

### Declaration and Definition

*[Declaration](https://en.cppreference.com/w/cpp/language/declarations)* - Declaration when you give information to the compiler about the type of the variable, the name of the variable and the value it holds if it holds any.
eg - `extern int a;`

*[Definition](https://en.cppreference.com/w/cpp/language/definition)* - definition is when you give information to the compiler where that variable will be stored. eg - `int a ` is declaration and definition. `int a = 5` is declaration and definition and initialization.

<mark style="background: #FF5582A6;">Note - Don't confuse definition with initialization they are different.</mark>

### [Identifiers](https://en.cppreference.com/w/cpp/language/identifiers)
Identifiers in C++ can be composed of letters, digits, and the underscore character. The language imposes no limit on name length. Identifiers must begin with either a letter or an underscore. Identifiers are case-sensitive; upper- and lowercase letters are distinct. 
`int someone, some_one, someOne, SOMEONE;`

### Scope of a name 
A scope is a part of the program in which a name has a particular meaning. Most scopes in C++ are delimited by curly braces.

~~~cpp
//                global  scope  scope
//                scope     S      T
int x;         //   ─┐                 // program point X
               //    │
{              //    │     ─┐
    {          //    │      │     ─┐
        int y; //    │      │      │   // program point Y
    }          //    │      │     ─┘
}              //   ─┘     ─┘
~~~



