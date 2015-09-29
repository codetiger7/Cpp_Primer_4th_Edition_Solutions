
## [Exercise 1.1](ex1_1/main.cpp)

> Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the *main* program from page 2.


## [Exercise 1.2](ex1_2/main.cpp)

> Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. However, systems vary as to how (or even whether) they report a failure from *main*. Recompile and rerun your program to see how your system treats a failure indicator from main.

![image](ex1_2/main.cpp)

## [Exercise 1.3](ex1_3/main.cpp)

> Write a program to print "Hello, World" on the standard output.

## [Exercise 1.4](ex1_4/main.cpp)

> Our program used the built-in addition operator, *+*, to generate the sum of two number. Write a program that uses the multiplication operator, *\**, to generate the product of two numbers.


## [Exercise 1.5](ex1_5/main.cpp)

> We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

## [Exercise 1.6]

> Explain what the following program fragment does:

```cpp
std::cout << "The sum of " << v1;
			<< " and " << v2;
			<< " is " << v1 + v2
			<< std::endl;
```

**Answer:**

- the program means to prints the text
- and also the values v1 and v2
- it also prints the sum of these values
- the program then means to start a new line and flushes the buffer

- the code is not legal
	- initialization of v1 and v2 is missing
	- cout is missing for the two statements ending with a semi colon.





















