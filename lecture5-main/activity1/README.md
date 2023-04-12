# Activities

## Task 1

- Refer to the following link. Discuss how the
  Recursive Factorial works:
  https://www.cs.usfca.edu/~galles/visualization/RecFact.html
- Refer to the following link. Discuss how the Recursive Fibonacci works:
  https://www.cs.usfca.edu/~galles/visualization/DPFib.html

## Task 2

There are `n` stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. There is a simple implementations in `./src/` folder. Discuss how the code works.

## Task 3

- There are `n` stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs or **3 stairs** at a time. Write a program that counts the number of ways, the person can reach the top. You can use the following program as a starter `./src/staircase1.cpp`. Also the link below might useful:
  https://www.includehelp.com/cpp-programs/stair-case-program-to-solve-the-staircase-problem.aspx

## Task 4: Individual (at home)

- What are the pros/cons of recursive over iterative Programming?

    - Iteration is suited where there are fixed number of partials results for instance sum of elements of an array. iteration can be implemented using loop.

    - Recusrsion is suite dhwen we don't know how many partial results there will be. Recurssion has a base case when it meets that case, execution stops. Recurssion is also more memory intensive as function calls are stacked. Arguably, recurssive code is easier to read.
   
- Difference between recursion and induction.

  - Recurssion:
    1. Recursion is the process in which a function is called again and again until some base condition is met
    2. It is the way of defining in a repetitive manner.
    3. It has two components:

        - Base condition
        - Recursive step.
    4. We backtrack at each step to replace the previous values with the answers using the function.
    5. It can lead to infinity if no base condition is given. 
  
  - Induction:
    1. Induction is the way of proving a mathematical statement. 
    2. It is the way of proving.
    3. It has two steps:

        - Base step
        - Inductive step
    4. We just prove that the statement is true for n=1. Then we assume that n = k is true. Then we prove for n=k+1.
    5. There is no concept of infinity. 

> Refer to the [links](#links) section below.

## Links

- https://cpp.sh/
- [Difference Between Recursion and Induction](https://www.geeksforgeeks.org/difference-between-recursion-and-induction/)
- [Recursion vs Iterative Programming](https://www.softwaretestinghelp.com/recursion-in-cpp/)
