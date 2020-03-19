# ETHCodeExpert_Solver

(c) Philipp Schilk, 2020

https://github.com/TheSchilk/ETHCodeExpert_Solver/

***"Because the most important thing is a good come-back"***


# Overview

Parses the test report from the ETH CodeExpert Grader and generates a custom
C++ program that will defeat that specific auto-grader. 

This is done by hard-coding the required responses. 

For an example program generated for "Bonus Exercise 1: Dots and Boxes" see [example.cpp](https://github.com/TheSchilk/ETHCodeExpert_Solver/blob/master/example.cpp)

# Disclaimer

I really hope the following is unnecessary, but on the off-chance it is not obvious:

I don't encourage cheating, and this is not meant to actually complete your homework.
This is a tongue-in-cheek programming project, and while it's results will most likely
pass the auto-grader, they will not be accepted upon actual review. 

# Requirements and Installation

Only Requirement is Python 3

Simply download the repository to install. 

The CPPTemplate.cpp file must be in the same directory as the script.

# Usage

### 1: Get the auto-grader Report
- Implement an empty main method to get the auto-grader to run:
```c++
int main(){
   return 0;
}
```
- Run the auto-grader

- Copy and Paste the auto-grader report into a text file,
and save the text file into the same directory as this script.
(for example as grader.txt)

### 2: Run ETHCodeExpert_Solver

```console
~$ python ETHCodeExpert_Solver grader.txt
```

where grader.txt is whatever you called the text file.
### 3: ...?

### 4: *Profit!*
A file called CheatyCode.cpp will be generated.

# Known Issues:
Currently does not work if the test input provided by the auto-grader is longer 
than one line.