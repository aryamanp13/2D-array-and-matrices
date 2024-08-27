# Aim: To study and implement C++ 2D Array - Matrices


## Theory:
2D array: In C++, a 2D array is essentially a collection of elements arranged in rows and columns. It's a data structure that can be visualized as a table or matrix.They are stored in contiguous memory locations. The elements are stored in row-major order, meaning the elements of the first row are stored followed by the elements of the second row, and so on.

Matrix: A 2D array is a collection of elements arranged in rows and columns, similar to a spreadsheet or table. Each element in the array is identified by its row and column indices. C++ doesn't have built-in functions for matrix operations like addition, subtraction, multiplication, or inversion. However, you can implement these operations using loops and nested loops


## Algorithm(for 8d):
1. Start
   
2.Include necessary header:
Include the iostream header to perform input/output operations.
Declare variables:

3.Declare integer variables rows and cols to store the dimensions of the 2D array.
Get dimensions from user:
Prompt the user to enter the number of rows and columns.
Read the user's input and store it in rows and cols.

4.Allocate memory dynamically:
Create a double pointer array to store the 2D array.
Allocate memory for the rows of the array using new int*[rows].
Allocate memory for each column within each row using new int[cols].

5.Get elements from user:
Prompt the user to enter the elements of the array.
Use nested loops to iterate over each row and column.
Read the user's input and store it in the corresponding element of the array.

6.Print the 2D array:
Use nested loops to iterate over each row and column.
Print the elements of the array in a tabular format.

7. Stop
