//P54.cpp - This program reads one character from the keyboard and will
//convert it to uppercase, if it is lowercase
//convert it to lowercase, if it is uppercase
//display a message, if it is a digit

#include <iostream>
#include <cctype>

using namespace std;

int main(){

  char c;

  cout << "Enter a character: \n";
  cin >> c;

  // if (isspace(c)){
  //   c = '\n';
  //   cout << "The character you've entered is a blank space, new line, tab.";
  // }

  if(isalpha(c)){ //Check to see if it is a letter of alphabet

    if(isupper(c)){ //check to see if it is uppercase

      c = tolower(c);
      cout << "Your character " << c << " is in uppercase.";
      cout << " Its lowercase case is " << c << endl;

      }else {

      c = toupper(c);
      cout << "Your character " << c << " is in lowercase.";
      cout << " Its uppercase is " << c << endl;
      }

    }else if(isspace(c)){ //Check if a space is entered
      c = '\n';
      cout << "The character you entered was a space.";

    }else {
      cout << "Your character " << c << " is a digit. \n";
    }

  return 0;
}
