// My first program in C++

#include <iostream>

int main() {

	std::cout << "Hello, World!!!" << std::endl;

	return 0;
}
/*	Line 1: // my first program in C++
 *	Two slash signs indicate that the rest of the line is a comment inserted by the programmer
 *	but which has no effect on the behavior of the program. Programmers use them to include short
 *	explanations or observations concerning the code or program. In this case, it is a brief introductory description of the program.
 *
 *	Line 2: #include <iostream>
 *	Lines beginning with a hash sign (#) are directives read and interpreted by what is known as 
 *	the preprocessor. They are special lines interpreted before the compilation of the program itself begins. 
 *	In this case, the directive #include <iostream>, instructs the preprocessor to include a section of 
 *	standard C++ code, known as header iostream, that allows to perform standard input and output operations, such as 
 *	writing the output of this program (Hello World) to the screen.
 *
 *	Line 3: A blank line.
 *	Blank lines have no effect on a program. They simply improve readability of the code.
 *
 *	Line 4: int main ()
 *	This line initiates the declaration of a function. Essentially, a function is a group of code
 *	statements which are given a name: in this case, this gives the name "main" to the group of code 
 *	statements that follow. Functions will be discussed in detail in a later chapter, but essentially, their 
 *	definition is introduced with a succession of a type (int), a name (main) and a pair of parentheses (()), optionally including parameters.
 *
 *	The function named main is a special function in all C++ programs; it is the function called when 
 *	the program is run. The execution of all C++ programs begins with the main function, regardless of 
 *	where the function is actually located within the code.
 *
 *	Lines 5 and 7: { and }
 *	The open brace ({) at line 5 indicates the beginning of main's function definition, and the closing 
 *	brace (}) at line 7, indicates its end. Everything between these braces is the function's body that 
 *	defines what happens when main is called. All functions use braces to indicate the beginning and end of their definitions.
 *
 *	Line 6: std::cout << "Hello World!";
 *	This line is a C++ statement. A statement is an expression that can actually produce some effect. 
 *	It is the meat of a program, specifying its actual behavior. Statements are executed in the same order 
 *	that they appear within a function's body.
 *
 *	This statement has three parts: First, std::cout, which identifies the standard character output device 
 *	(usually, this is the computer screen). Second, the insertion operator (<<), which indicates that what 
 *	follows is inserted into std::cout. Finally, a sentence within quotes ("Hello world!"), is the content inserted into the standard output.
 *
 *	Notice that the statement ends with a semicolon (;). This character marks the end of the statement, just 
 *	as the period ends a sentence in English. All C++ statements must end with a semicolon character. One of 
 *	the most common syntax errors in C++ is forgetting to end a statement with a semicolon.
 */
