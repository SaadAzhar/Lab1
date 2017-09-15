# Lab1
> Introduction:
      I have designed a program in C++ to multiply two 2x2 matrice. 
      The user inputs the elements of the both matrices and the user will also be able to use the method (whether iterative or Strassen's algorithm) to use in the multiplication.
      
> Approach:
      I've used for loops to take the input ffor the elements in the main function. 
      I have used the loops in iterative method whereas I have implemented the Strassen's algorithm by hard coding its formula.
      
> How to Run:
     First open the exe file.
     Secondly input the matrix elements for both matices.
     Finally, select the method that you want to use for multiplication and get your result.
      
> Analysis:
      Strassen's Algorithm is better than the iterative method as it only uses 7 multiplications instead of the usual 8. Therefore, while working with very large matrices it can be pretty efficient.
      Iterative method complexity: O(N^3)
      Strassen's Algorithm complexity: O(N^log7) 
