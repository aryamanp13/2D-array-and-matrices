# Aim: To study and implement string and array


## Theory:

Arrays in C++
An array is a data structure of elements with same data type stored at contiguous memory locations.Arrays are used to store multiple values in a single variable, making it easier to manage large sets of data.

Strings in C++
Strings are sequences of characters used to store text. In C++, the string class is defined in the <string> header file. There are two types of strings in C++ :
std : : string

Features:

Iteration: Strings support iterations for traversing thier contents.
Concatenation: Strings can be concatenated using the + operator.
Indexing: Strings support indexing, allowing access to individual characters using the [] operator.
Comparison: Strings can be compared using operators (==, !=, <, >, etc.).
Modification: Characters in a string can be modified through direct indexing.

Features :

Fixed size: The size of an array after being defined cannot be changed later.
Contiguous memory allocation: All elements are stored in continuous memory blocks.
Index-based: Array elements can be accessed using thier indices.
## Algorithm : Palindrome

1.Checking Palindrome
Input the String:
Ask the user to enter a string.

2.Initialize Variables:
Store the input string in a variable, a.

Initialize an empty string, revstr.

3.Determine the Length:
Calculate the length of a and store it in length.

4.Reverse the String:

Loop from the end of the string to the beginning:
Append each character to revstr.

5.Compare the Strings:

Compare the original string a with the reversed revstr.
If a == revstr, the string is a palindrome.
Else not a palindrome.

6.Output the Result:

Print whether the string is a palindrome or not based on the comparison.
