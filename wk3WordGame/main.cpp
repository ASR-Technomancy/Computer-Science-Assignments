/*
Andrew Ring
CS-2250-XTIA 17/T5
Due June 18, 2017
Chapter 3, Problem 24
Word Game

This program asks the user a series of questions to assign the user input to string variables
and then use them to fill in the blanks of a story, which displays after all user input is recorded.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    //////////////////////////
    //Declaration of Variables
    //////////////////////////

    string userName;
    string userCity;
    string userAge;
    string collegeName;
    string userProfession;
    string animalType;
    string petName;

    ///////////////////////////////////////
    //Introduction of the game to the user
    //////////////////////////////////////

    cout <<"***************A Simple Word Game***************";

    cout << "\n";
    cout << "\n";

    cout << "Answer some questions and I'll tell you a story." << endl;

    cout << "\n";

    cout << "------------------------------------------------" << endl;

    cout << "\n";

    /////////////////////////////////////////////////////////
    //Asking questions to fill the variables with user input
    ////////////////////////////////////////////////////////

    cout << "What is your name?" << endl;
    getline(cin, userName);  // Used getline() instead of cin >> in case the user enters more than one word.
    cout << "\n";
    cout << "Nice to meet you, " << userName << "." << endl;

    cout << "\n";

    cout << "And your age?" << endl;
    getline(cin, userAge);  // Used getline() incase the user enters words instead of numerals.
    cout << "\n";
    cout << "Ah, just a spring chicken." << endl;

    cout << "\n";

    cout << "How about the name of a city?" << endl;
    getline(cin, userCity);
    cout << "\n";
    cout << "I've heard some interesting things about " << userCity << "." << endl;

    cout << "\n";

    cout << "How about a good College?" << endl;
    getline(cin, collegeName);
    cout << "\n";
    cout << collegeName <<" is one of the best." << endl;

    cout << "\n";

    cout << "The name of a profession." << endl;
    getline(cin, userProfession);
    cout << "\n";
    cout << "Ok. Almost done." << endl;

    cout << "\n";

    cout << "Now I need a type of animal." << endl;
    getline(cin, animalType);
    cout << "\n";
    cout << animalType << ", huh? Good choice." << endl;

    cout << "\n";

    cout << "Finally I just need a pet's name." << endl;
    getline(cin, petName);
    cout << "\n";
    cout << petName << ", huh? Good choice." << endl;

    cout << "\n";

    //////////////////////////////////////////////
    //Outputting the finished story to the screen
    /////////////////////////////////////////////

    cout << "There once was a person named " << userName <<" who lived in " << userCity << "."
    << " At the age of " << userAge << ", " << userName << " went to college at " << collegeName
    << ". " << userName << " graduated and went to work as a " << userProfession << "." << " Then, "
    << userName << " adopted a(n) " << animalType << " named " << petName << ". "
    "they both lived happily ever after!" << endl;

    cout << "\n";
    cout << "\n";

    /////////////////////
    //End of the program
    ////////////////////

    return 0;
}
