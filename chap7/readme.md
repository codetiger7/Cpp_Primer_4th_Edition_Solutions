# Chapter 7: Functions


## [Exercise 7.1]

> What is the difference between a parameter and an argument?

- A parameter is are variables defined inside the function parameter list
- Arguments are values used to initialize the parameters of a function during a function call.


## [Exercise 7.2]

> Indicate which of the following functions are in error and why.
> Suggest how you might correct the problems.


```cpp
// (a)
int f()
{
	string s;
	// ...
	return s;
}

// (b)
f2 (int i)
{
	/* ... */
}

// (c)
int calc(int v1, int v1)
/* ... */
}

// (d)
double square(double x)
	return x * x

```

- functions a, b, and c are in error
	- a) returns a string instead of int
	- b) has no return type
	- c) is missing a, curly bracket


- **suggested fixes:**

```cpp

// (a)
string f()
{
	string s;
	// ...
	return s;
}

// (b)
void f2 (int i)
{
	/* ... */
}

int calc(int v1, int v1)
{
	/* ... */
}
```


## [Exercise 7.3](ex7_3/ex7_3/main.cpp)

> Write a program to take two *int* parameters and generate
> the result of raising the first parameter to the power of
> the second.
> Write a program to call your function passing it two *int*s.
> Verify the result.


## [Exercise 7.4](ex7_4/ex7_4/main.cpp)

> Write a program to return the absolute value of its parameter.



## [Exercise 7.5](ex7_5/ex7_5/main.cpp)

> Write a function that takes an *int* and a pointer to an *int*
> and returns the larger of the *int* value of the value to
> which the pointer points.
> What type should you use for the pointer?
> 


## [Exercise 7.17]

> When is it valid to return a reference ?
> A const reference ?

- Return a reference when you want to change the object referred to after the return.
- Return a const reference when you do not want to change the object referred to after return.
- Not do NOT return a ref to a local object.


## [Exercise 8.18]

> What potential run time problem does the following function have?

```cpp

string& processText()
{
	string text;
	while (cin >> text)
	{
		/* ... */
	}
	
	// ...
	return text;
}

```

- Here a reference to a local object is returned.
- After the function is finished the **text** variable is removed from the stack (memory freed).
- Then any reference to the object is invalid.


## [Exercise 7.19]

> Indicate whether the following program is legal.
> If so, explain what it does; If not,
> make it legal and then explain it.


```cpp
int & get(int *arry, int index)
{ 
	return arry[index];
}

int main()
{
	int ia[10];
	
	for (int i = 0; i != 10; ++i)
	{
		get(ia, i) = 0;
	}
}

```

- Legal
-  it assigns a zero value to all the elements of an in array

## [Exercise 7.20](exercises_chap7/ex_sec7_3_3.cpp)

> Rewrite *factorial* as an iterative function.


## [Exercises 7.21]
> What would happen if the stopping condition in **factorial** were:

```cpp
if (val != 0)
```

- stop condition will only change behaviour if trying to calculate factor of negative integers.

## [Exercise 7.22](chap7/exercises_chap7/exercises_chap7/ex_sec7_3)

> Write the prototypes for each of the following functions:
> 
> (a) A function named **compare** with two parameters that are references to a class named **matrix** with a return value of type **bool**.
> (b) A function named **change_val** that returns a **vector<int>** iterator and takes two parameters: one is an **int** and the other is an iterator for a **vector<int>**.




## [Exercise 7.24](chap7/exercises_chap7/exercises_chap7/ex_sec7_4_1)

> Which, if any, of the following declarations are errors?
> Why?



































