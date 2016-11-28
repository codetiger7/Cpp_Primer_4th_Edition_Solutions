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



