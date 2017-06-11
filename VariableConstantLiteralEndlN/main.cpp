/*
Andrew Ring
CS-2250-XTIA 17/T5
Created June 10, 2017

This program is a basic example of:

variables, constants, literals, stream manipulators, and escape sequence.

Created for a Discussion Board post on Chapter 2 in Computer Science 1
*/

#include <iostream>

using namespace std;

 const string WELCOME_TEXT = "Welcome.";

 const string GOODBYE_TEXT = "Goodbye.";

     int main()

     {

     int birthYear;

     birthYear = 1979;

     cout << WELCOME_TEXT; // The output of this constant will be a literal.

     cout << "\n"; // Used to create a new line.

     cout << "\n"; // Used to add blank space for visual appeal.

     cout << "You were born in " << birthYear << "."; // The output of this variable will be a literal.

     cout << "\n";

     cout << "\n";

     cout << GOODBYE_TEXT; // The output of this constant will be a literal.

     cout << "\n";

     cout << "\n";

     return 0;

}
