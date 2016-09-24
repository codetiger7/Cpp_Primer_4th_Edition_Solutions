# Chapter 3



## [Exercise 3.1](ex3_1/ex3_1/main.cpp)

> Rewrite the program from Section 2.3 (p. 43) that calculated the result of raising a given number to a given power.. to use appropriate *using* declarations rather than accessing library names through a *std::* prefix.

## [Exercise 3.2]
> What is a default constructor?

- the function used to initialize a type when no arguments are given on definition;


## [Exercise 3.3[
> Name the three ways to initialize a string.


- default constructor initialization
- direct constructor initialization
- copy constructor initialization
- multiple character constructor


## [Exercise 3.4]

> What are the values of *s* and *s2* ?

```cpp
string s;

int main()
{
	string s2;
}
```

- values of *s* and *s2* are both empty strings



## [Exercise 3.5a](ex3_5a/ex3_5a/main.cpp)

> Write a program to read the standard input a line at a time.



## [Exercise 3.5](ex3_5b/ex3_5b/main.cpp)

> Modify your program to read a word at a time.


## [Exercise 3.6]

> Explain how whitespace characters are handled in the *string* input operator and in the *getline* function.

- the string input operator reads and discards any leadiing whitespaces, it then reads the character and stops once it encounters another whitespace character
- the getline reads an stores all whitespace characters, it reads and discards the newline character. It stops on encountering this character, whether it is leading or not.

r.
## [Exerice 3.7](ex3_7/ex3_7/main.cpp)

> Write a program to read two strings and report on whether the strings are equal. If not report which of the two are larger.

## [Exercise 3.7b](ex3_7b/ex3_7b/main.cpp)

> Write a program to read two strings and report is the length is equal, if not reporth which is longe






## [Exercise 3.9]

> The program creates an empty string.
> It then tries to print the first character of that string
> The program is not valid, because the string has no characters to be printed. A null char is printed



## [Exercise 3.10](ex3_10/ex3_10/main.cpp)

> write a program to strip punctuation from a string.
> Let the input be a string of characters including punctuation
> Output shall be a string where punctuation is removed

 
## [Exercise 3.11]

> Which, if any, of the following vector definitions are in error?


a) vector< vector<int> > ivec;

b) vector< string > svec = ivec; // in error! string type not int!

c) vector<string> svec(10, "null");


## [Exercise 3.12]

> How many elements are therein each of the following vectors? 
> What are the values of the elements?

a) vector<int> ivec1;	// no elem
b) vector<int> ivec2(10);	// 10 elem, value 0
c) vector<int> ivec3(10, 42);	// 10 elem, value 42
d) vector<string> svec1;	// no elem
e) vector<string> svec2(10);	// 10 elem, ""
f) vector<string> svec3(10, "hello"); // 10 elem, value hello




























