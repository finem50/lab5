//P54.cpp - This program reads the entire contents of an input file and will
//display it with the same format.
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void get_input_stream(ifstream& in_s);

int main(){

  char c;
  ifstream in_s; //Declaration of the stream of type input

  get_input_stream(in_s);

  cout << "Here are the entire contents of the input file \n\n";

  while (in_s.get(c)){ //Read all numbers one-by-one to the end of the file
    cout.put(c);
  }

  cout << "\nI am done with writing the contents of the file \n\n";

  in_s.close(); //Close the connection (file)

  return 0;
}

void get_input_stream(ifstream& in_s){

  char input_file[15];
  cout << "Please input the input file name \n"; //Get the file name
  cin >> input_file;

  in_s.open(input_file); //Connect to the input file and test
  if(in_s.fail()){
    cout << "Input file opening failed. \n";
    exit(1); //If we couldn't open the file to read from we exit
  }
}
