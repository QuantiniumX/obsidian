C++ defines a set of primitive types that include the arithmetic types and special type names *void*.

### Arithmetic Types
Arithmetic types are divided into two integral types and floating-point types.
We can use the `sizeof` to find the size of the size of the type. 

| Type | Meaning | Min size |
| ---- | ---- | ---- |
| bool | boolean | 8 bits |
| char | character | 8 bits |
| wchar_t | wide char | 32 bits |
| char16_t | unicode char | 16 bits |
| char32_t | unicode char | 32 bits |
| short | short int | 16 bits |
| int | int | 32 bits |
| long | long int | 64 bits |
| long long | really long int | 64 bits |
| float | single-precision floating point | 6 sign. digits |
| double | double-precision floating point | 10 sign. digits |
| long double | extended-precision floating point | 10 sign. digits |

The size of a `bool` data type is not explicitly specified in the C++ standard. However, it's common for `bool` to be implemented as 8 bits (1 byte) on many systems, where any non-zero value represents true and zero represents false. 

The size depends upon the architecture of the system as well as the compiler. it may vary system to system.

#### Signed and Unsigned Types
Except for bool and the extended character types, the integral types may be signed or unsigned
- Signed types-  signed type represents negative or positive numbers (including zero). By default the data types such as int, long, short ,long long are signed. 
- Unsigned types- unsigned type represents only values greater than or equal to zero.
##### int
int = -2^31 -> 2^31 - 1 (-1 is there as 0 is also an int)
unsigned int = 0 -> 2^32 - 1 (-1 for 0)

##### char
By default char is unsigned i.e. 0 -> 2^8 - 1
signed char = -128 -> 127

### Literals
A value, such as 42, is known as a literal because its value self-evident. Every literal has a type. The form and value of a literal determine its type.

#### Integer and Floating-Point Literals
We can write an integer literal using decimal, octal, or hexadecimal notation.
- 20 -> decimal (normal vale)
- 024 -> octal (starts with 0)
- 0x14 -> hexadecimal (begin with 0x or 0X)

[computer memory]


The type of an integer literal depends on its value and notation. By default, decimal literals are signed whereas octal and hexadecimal literals can be either signed or unsigned types. A decimal literal has the smallest type of int, long, or long long (i.e., the first type in this list) in which the literal’s value ts. Octal and hexadecimal literals have the smallest type of int, unsigned int, long, unsigned
long, long long, or unsigned long long in which the literal’s value fits. It is an error to use a literal that is too large to t in the largest related type. There are no literals of type short.

Although integer literals may be stored in signed types, technically speaking,the value of a decimal literal is never a negative number. If we write what appears to be a negative decimal literal, for example, -42, the minus sign is not part of the literal. The minus sign is an operator that negates the value of its (literal) operand.

Floating-point literals include either a decimal point or an exponent specified using scientific notation. Using scientific notation, the exponent is indicated by either E or e:
- 3.1415
- 3.14159E0
- 0.
- 0e0
- .001

By default, floating-point literals have type double. We can override the default using a suffix.

#### Character and Character String Literals
A character enclosed within single quotes is a literal of type char. Zero or more characters enclosed in double quotation marks is a string literal
- 'a' -> char literal 
- "hello World" -> string literal

The type of a string literal is array of constant chars. The compiler appends a null character '\0' to every string literal. The size of the actual string literal is one more than its apparent size.

Two string literals that appear adjacent t one another and that are separated only by spaces, tabs or newlines are concatenated into into a single literal. 
~~~cpp
std::cout << "a really, really long string literal "
			  "that spans two lines" << std::endl;
~~~

#### Escape Sequences
Some characters, such as backspace or control characters, have no visible image. Such characters are non-printable. Other characters (single and double quotation marks, question mark, and backslash) have special meaning in the language. Our programs cannot use any of these characters directly. Instead, we use an escape sequence to represent such characters

| name | symbol |
| ---- | ---- |
| newline | \n |
| vertical tab | \v |
| backlash | \\ |
| carriage return | \r |
| horizontal tab | \t |
| backspace | \b |
| question mark | \\? |
| formfeed | \f |
| alert(bell) | \a |
| double quotes | \\" |
| single quotes | \\' |
We can also write a generalized escape sequence, which is \x followed by one or more hexadecimal digits or a \ followed by one, two, or three octal digits.

#### Specifying the Type of a Literal
We can override the default type of an integer, floating- point, or character literal by supplying a suffix or prefix
eg - `u8"hi"!` - utf-8 string literal, `42ULL` - unsigned long long

#### Boolean and Pointer Literals
The words true and false are literals of type bool:
`bool test = false;`

The word [nullptr](https://en.cppreference.com/w/cpp/language/nullptr) is a pointer literal.

