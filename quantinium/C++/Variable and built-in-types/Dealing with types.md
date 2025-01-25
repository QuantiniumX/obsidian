### type aliases
A *type alias* is a name that is a synonym for another type.
~~~cpp
typedef double wages; //eages is a synonym for double
typedef wages base, *p // base is synonym for double, p for double *
~~~

>Alias declaration - using SI = sales_item // SI is synonym for sales_item.

### auto type
Sometime we don't know the type of an expression. Under these circumstances we use the auto type specifier. 

~~~cpp
auto item = val1 + val2;
~~~
Here we are telling the compiler to deduce the type of the item.

While declaring multiple variable wiht auto there should be consistent type for both the variables.
~~~cpp 
auto sz = 0, pi = 3.14 // illegal 
~~~ 

### decltype 
Inspects the declared type of an entity or the type and value category of an expression.

Sometimes we want to define a variable with a type that the compiler deduces from an expression but do not want to use that expression to initialize the variable. For such cases, the new standard introduced a second type specifier, decltype.

`decltype (f()) sum = x;` // sum has whatever type f() returns

[decltype](https://en.cppreference.com/w/cpp/language/decltype) 




