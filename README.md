Word Counter Program in C

This is a simple C program that counts the number of words in a given input string. The program reads input from the user and calculates the total number of words present in the input string.

How to Compile and Run

To compile the program, use the following command:

bash
Copy code
gcc -o word_counter word_counter.c
To run the compiled program, use:

bash
Copy code
./word_counter
Program Functionality

The program prompts the user to enter a string and then calculates the number of words in that string. It considers words as contiguous sequences of characters separated by whitespace characters such as spaces, tabs, and newline characters.

For example, the input string "Hello world, how are you?" contains 5 words: "Hello", "world,", "how", "are", and "you?".

Input Format

The program accepts input strings from the user using fgets. It reads a maximum of 1000 characters, ensuring that longer input strings are also handled correctly.

Sample Usage

csharp
Copy code
Enter a string: This is a sample sentence for testing the word counter.
Number of words: 9
Implementation Details

The program defines a countWords function that iterates through the input string character by character and counts the number of words based on whitespace characters.
The main function reads input from the user, calls the countWords function, and displays the result.
Feel free to modify and customize this program as needed for your specific requirements or integrate it into a larger project. Happy coding!
