# Chapter 2
## Variables And Basic Types

- 2.1 Primitive Built-In Types
- 2.2 Literal Constants
- 2.3 Variables
- 2.4 *const* Qualifier
- 2.5 References
- 2.6 Typedef Names
- 2.7 Enumerations
- 2.8 Class Types
- 2.9 Writing Our Own Header Files
- Chapter Summary
- Defined Terms


## [Exercise 2.1](ex2_1/ex2_1/main.cpp)

> What is the difference between an **int**, a **long**, and a **short** value?


- well a short has a minimum size of 16 bits
- int has a minimum size of 16 bits
- and long has a min size of 32 bits
- so short is <= int <= long

## [Exercise 2.2]

> Whats the difference between an *unsigned* and a *signed* type?

- unsigned can only be 0 or greater
- signed types can also represent negative values

## [Exercise 2.3]

> If a *short* on a given machine has 16 bits, then what is the largest number that can be assigned to a *short*?

- at least 32768 

> To an *unsigned short*?

- 65535


## [Exercise 2.4]

> What value is assigned if we assign 100,000 to a 16-bit *unsigned* short?

- 34464



> What value is assigned if we assign 100,000 to a plain 16-bit short?

- This depends on the compiler


## [Exercise 2.5]

> What is the difference between a *float* and a *double*?

- float is only guaranteed to offer 6 significant digits
- double is guaranteed to offer 10 significant digits


## [Exercise 2.6]

> To calculate a mortage payment, what types would you use for the rate, principal and payment?

- I would use *double* for all types
- rate, princial, payment: *double* is easy and cost effective at the same time


## [Exercise 2.7]

> Explain the difference between the following sets of literal constants:

(a) 'a', L'a', "a", L"a"
 - 'a' is a character
 - L'a' is a wide character
 - "a" is a string
 - L"a" is a string of wide characters

(b) 10, 10u, 10L, 10uL, 012, 0xC
- 10 is a integral literal
- 10u is an unsigned integral 
- 10L is a long literal

(c) 3.14, 3.14f, 3.14L
- 3.14 is a double
- 3.14f is a float
- 3.14 is a float


## [Exercise 2.8]

> Determine the type of each of these literal constants:

(a) -10
- is a signed int

(b) -10u
- is an signed unsigned int, not legal?

(c) -10. 
- is a double

(d) is a double, expressed as a scientific number


## [Exercise 2.9]

> Which, if any, of the following are illegal?

- c, d, f, e


## [Exercise 2.10](ex2_10/ex2_10/main.cpp)

> Using escape sequences, write a program to print 2M followed by a newline.


> Modify the program to print 2, then a tab, then an M, followed by a newline.


## [Exercise 2.11](ex2_11/ex2_11/main.cpp)


> Write a program that promts the user to input two numbers, the base and exponent. Print the result of raising the base to the power of the exponent.


## [Exercise 2.12]

> Distinguish between an lvalue and and rvalue; show examples of each.


- A rvalue can only be used on the right side of an assignment, a lvalue can be used on both left and right sides of an assignment operator.

- Example of rvalue

 variable = rvalue + 4;
 
 - Example of lvalue
 
 lvalue = variable * 84;
 
 variableName = lvalue * 32;


## [Exercise 2.13]

> Name one case where an lvalue is required.


- when you want to assign an expression so as to store it and use it ater.

## [Exercise 2.14](ex2_14/ex2_14/main.cpp)

> Which, if any, of the following names are invalid? Correct each identified invalid name.

(a)
- int doubleInt = 3.14159;

(b)
- char _;

(c)
- bool catch_22;

(d)
- char oneOrTwo = '1';

(e)
- float Float = 3.14f;

## [Exercise 2.15](ex2_15/ex2_15/main.cpp)

> What, if any, are the differences between the following definintions:

```cpp
int month = 9, day = 7;

int month = 09, day = 07;
```

- the first initializes decimal 9 and 7
- the second tries to initialize as octals, but does so incorrectly.

- the error can be corrected like this:
	- *int month = 011;



## [Exercise 2.16](ex2_16/ex2_16/main.cpp)


> Assuming *calc* is a function that returns a *double*, which, if any,  of the following are illegal definitions?

> Correct any that are identified as illegal.


## [Exercise 2.17]

> What are the initial values, if any, of each of the following variables?

```cpp
std::string global_str;
int global_int;

int main()
{
	int local_int;
	std::string local_string;
	
	//  ...
	return 0;
}
```

- the initial values are:
	- global_string = ""
	- int global_int = 0;
	- int local_int => undefined
	- local_string = ""


## [Exercise 2.18]

> Explain the meaning of each of these instances of *name*.


```cpp

/// string identifier declarantion
extern std::string name;				

// direct initialization
std::string name("exercise 3.5a")	       

// definition, declaration and initialization
extern std::string name("exercise 3.5a) 
```


## [Exercise 2.19](ex2_19/ex2_19/main.cpp)

> What is the value of *j* in the following program?

```cpp
int i = 42;

int main()
{
	int i = 100;
	int j = i;
}
```

- the value of *j* == 100


## [Exercise 2.20](ex2_20/ex2_20/main.cpp)

> Given the following program fragment, what values are printed?


```cpp
int i = 100, sum = 0;

for (int i = 0; i != 10; ++i)
{
	sum +=i;
}

std::cout << i << " " << sum << std::endl;
```

## [Exercise 2.21](ex2_21/ex2_21/main.cpp)

> Is the following program legal?

```cpp
int sum = 0;
for (int i = 0; i != 10; ++i)
{
	sum += i;
}

std::cout << "Sum from 0 to " << i << " is " << sum << std::endl;
```


- No, you can not use the variable *i* outside the statement scope


## [Exercise 2.22](ex2_22/ex2_22/main.cpp)

> The following program fragment, while legal, is an example of poor style. What problem(s) does it contain? How would you improve it?

```cpp
for (int i = 0; i < 100; ++i)
	/// processing
```

- it uses a literal value 100,
- it uses less than 

- i would make a variable that lets describes where the integral literal comes from
- I would use not equal to instead of less than


## [Exercise 2.23]

> Which of the following are legal?
> For those usages that are illegal, explain why.

```cpp
// a)
const int buf; 	// legal

// b)
int cnt = 0;		// legal
const int sz = cnt;		// legal


// c)	
cnt++;		// legal
sz++		// not legal, const variables cannot be modified
```

## [Exercise 2.24](ex2_24/ex2_24/main.cpp)

> Which of the following definintions, if any, are invalid? 
> Why?
> How would you correct them?


```cpp

// a)
int ival = 1.01;	

// b)
int& rval1 = 1.01;	// invalid
// non-const reference to literal temp int
// correct by: int& rval1 = ival;

// c)
int& rval2 = ival;

// d)
const int& rval3 = 1;
```



## [Exercise 2.25](ex2_25/ex2_25/main.cpp)

> Given the preceding definitions, which, if any, of the following assignments are invalid?
> If they are valid, explain what they do.

```cpp
// a)
rval2 = 3.14159;
// changes the value of ival to 3

// b)
rval2 = rval3	 // the value that rval3 refers to is assigned to ival

// c)
ival = rval3
//  legal, ival is assigned a copy of the value that rval3 references

// d)
rval3 = ival // illegal, trying to change a const ref

```

## [Exercise 2.26](ex2_26/ex2_26/main.cpp)

> What are the differences among the definitions in (a)
> and the assignments in (b)?
> Which, if any, are illegal?

```cpp

// a)
int ival = 0; // creates a new variable and defines it
const int& ri = 0; // creates a new reference

// b)
ival = ri; // assigns a new value destroying the old
ri = ival; // illegal const ref cannot be changed
```


## [Exercise 2.27](ex2_26/ex2_26/main.cpp)

> What does the following code print?

```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

- prints: 10 10



#2.6 Typedef Names

## [Exercise 2.28](ex2_28/ex2_28/main.cpp)

> Compile the following program to determine whether your compiler complains about a missing semicolon after a class definition.


```cpp

class Foo
{
} // no semicolon

int main()
{
	return 0;
}
```

- compiler error was straight to the point:
	- Expected ";" at after class


## [Exercise 2.29]

> The *public* section of a class holds all members that anyone using the class can access

> The *private* section of a class encapsulates members so that only the class has direct access to these.


## [Exercise 2.30] (ex2_30/ex2_30/main.cpp)

> Define the data members of classes to represent the following types:


a) a phone number
b) an address
c) an employee or a company
d) a student at a university


























