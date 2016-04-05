
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





## [Exercise 1.7](ex1_7/main.cpp)

> Compile a program that has incorrectly nested comments


## [Exercise 1.8](ex1_8/main.cpp)

> Indicate which, if any, of the following output statements, are legal.


```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
```

**Answer:**
- The first two lines are legal
- One inside the quote signs, the comment pair is seen as text


## [Exercise 1.9](ex1_9_for_loop_behaviour/ex1_9_for_loop_behaviour/main.cpp)

> What does the following *for* loop do?
> What is the value of *sum*?

```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
	sum += i;
```

- The for loop adds all numbers from and including -100 to and including 100
- The value of *sum = 0*



## [Exercise 1.10 a](ex1_10_b/ex1_9_b/main.cpp)

> Write a program that uses a *for* loop to sum the numbers from 50 to 100.



## [Exercise 1.10 b](ex1_10_b/ex1_9_b/main.cpp)
>  Now rewrite the program above using a *while*.



## [Exercise 1.11 a](ex1_11_a/ex1_11_a/main.cpp)

> Write a program using a *while* loop to print the numbers from 10 down to 0.


## [Exercise 1.11 b](ex1_11_b/ex1_11_b/main.cpp)

> Now rewrite the program using a *for*.


## [Exercise 1.12](ex1_12/ex1_12/main.cpp)

> Compare and contrast the loops you wrote in the previous two exercises.

> Are there advantages or disadvantages to using either form?

- advantages with the for loop is that it is more compact

## [Exercise 1.13](ex1_13/ex1_13/main.cpp)

> Compilers vary as to how easy it is to understand their diagnostics.
> Write programs that contain the common errors discussed in the box on 16.
> Study the messages the compiler generates so that these messages will be familiar when you encounter them while compiling more complex programs.

## [Exercise 1.14](ex1_14/ex1_14/main.cpp)

> What happens in the program presented in this section if the input values are equal?

- The equal input value is printed as the sum.

## [Exercise 1.15](ex1_15/ex1_15/main.cpp)

> Compile and run the program from this section whit two equal values as input. Compare the output to what you predicted in the previous exercise. Explain any disrepancy between what happened and what you predicted.

- Predicted:   17
- Output:		  17


## [Exercise 1.16](ex1_16/ex1_16/main.cpp)

> Write a program to print the larger of two inputs supplied by the user.

## [Exercise 1.17[(ex1_17/ex1_17/main.cpp)

> Write a program to ask the user to enter a series of numbers. Print a message saying how many of the numbers are negative numbers.



## [Exercise 1.18](ex1_18/ex1_18/main.cpp)

> Write a program that prompts the user for two numbers and writes each number in the range specified by the two numbers to the standard output.



## [Exercise 1.19](ex1_19/ex1_19/main.cpp)

> What happens if you give the numbers 1000 and 2000 to the program written for the previous exercise?


- If you give the numbers 1000, and 2000, the number including the ones entered.


> Revise the program so that it never prints more than 10 numbers per line.





## [Exercise 1.20](ex1_20/ex1_20/main.cpp)

> Write a program to sum the numbers in a user-specified range,
> ommitting the *if* test that sets the upper and lower bounds.
> Predict what happens if the input is the numbers 7 and 3, in that order.
> Now run the program giving it the number 7 and 3, and see if the results match your expectations.
> If not restudy the discussion on the *for* and *while* loop until you understand what happened.

- I predict that the sum will be zero;
- sum starts out at zero, and since we are going to add all numbers in the range 7 to 3, 7 is already higher than 3 so we will never enter the for loop and sum will remain zero;

- result after running the program: sum == 0

## [Exercise 1.21](ex1_21/ex1_21/main.cpp)

> The Web site (http://www.awprofessional.com/cpp_primer) contains a copy of *Sales_item.h* in the Chapter 1 code directory. Copy that file to your working directory.

> Write a program that loops through a set of book sales transactions, reading each transaction and writing that transaction to the standard output.



## [Exercise 1.22](ex1_22/ex1_22/main.cpp)

> Write a program that reads two *Sales_item* objects that have the same *ISBN* and produces their sum.


## [Exercise 1.23](ex1_23/ex1_23/main.cpp)

> Write a program that reads several transactions for the same *ISBN*.
> Write the sum of all the transactions that were read.









