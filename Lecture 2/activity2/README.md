# Activities

## Task 1

Refer to the first [link](#links).

- Why is Algorithm Analysis Important?
  - Algorithm analysis is the theoretical estimation for the required resources of an algorithm to solve a specific computational problem. Analysis of algorithms is the determination of the amount of time and space resources required to execute it.
  
- Explain the Big $O$ notation
  - Calculatin time itself is not sufficient to know the efficiency of an algorithm as it can vary based on the input and machine the program is run on. We use Big O notation to calculate the efficiency of the algorithm. it denotes the worst case scenarios. for instance, an optimized algorithm might perform poorly when input is small but as the input increases it becomes more efficient. Therefore, by using Big O notation we denote how the algorithm will perform with large input.
- Compare `Linear`, `Logarithmic`, `Quadratic` and `Constant` complexities.
  - Constant: when the algorithm takes same amount of steps irrespective of the size of input.O(1)
  - Linear: the steps required to complete the execution of an algorithm increase or decrease linearly with the number of inputs. Linear complexity is denoted by O(n). so for N amount of input it will take N amount of time. 
  - Logarithmic: when we are reducing the steps it takes to arrive at the goal at each iteration. example is binary search.
  - Quadratic: when the steps required to execute an algorithm are a quadratic function of the number of items in the input. Quadratic complexity is denoted as O(n²). example: inner loops. 

## Task2

Refer to the first [link](#links).

- Write a simple algorithm in C++ that finds the square of the first item in a list and then prints it on the screen.
  
  <code>
 
  #include iostream>
    #include string>
    using namespace std;
int main()
{
    int myarray[10] = {21, 43, 23, 54, 75, 13, 5, 8, 25, 10};
    cout << myarray[0] * myarray[0];
}
  </code>
- What is the complexity of the algorithm?
  - O(C). Contant complexity

## Task 3

Refer to the first [link](#links).

- Write a simple program that displays all items in a list to the console.
- What is the complexity of the algorithm?

## Task 4: : Individual, at home

Refer to this [pdf](./big_o.pdf):

- What is the difference between complexity and performance:
- Does complexity affects performance bor is it the other way around?
- Restate the formal definition of big $O$ in plain English

## Links

- [Big O Notation and Algorithm Analysis ](https://stackabuse.com/big-o-notation-and-algorithm-analysis-with-python-examples/)
- [Visualization](https://www.cs.usfca.edu/~galles/visualization/Search.html)
- [Big-O notation explained by a self-taught programmer](https://justin.abrah.ms/computer-science/big-o-notation-explained.html)
- [Big-O is easy to calculate, if you know how](https://justin.abrah.ms/computer-science/how-to-calculate-big-o.html)
- https://cpp.sh/
