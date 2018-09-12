#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>

using namespace std;

void instructions();
void get_test_files(ifstream& in_s, ofstream& out_s);
void write_header(ofstream& out_s);
void write_footer(ofstream& out_s);
void copy_test(ifstream& in_s, ofstream& out_s);

int main(){

  ifstream in_s;
  ofstream out_s;

  write_header(out_s);

  get_test_files(in_s, out_s);

  copy_test(in_s, out_s);

  write_footer(out_s);

  in_s.close();

  return 0;
}

void instructions(){
/**Compile and execute file
This program requires a pre-existing text file. When running the
compiled file, you will be prompted to enter your desired text file name, with
file extension. A text file will be included with this lab,
but you may use your own as well.

To use the included file with this lab, enter "html_input.txt"
when prompted for a file name.

This program will append outputs to "html_output.html", so make sure that upon
executing this program multiple times, you should rather manually change
the file name in the source-code, or you should delete the created file.
**/
}

void get_test_files(ifstream& in_s, ofstream& out_s){

  char input_file[15];
  cout << "Please input the input file name \n";
  cin >> input_file;

  in_s.open(input_file);
  if(in_s.fail()){
    cout << "Input file opening failed. \n";
    exit(1);
  }

  if(out_s.fail()){
    cout << "Output file opening failed. \n";
    exit(1);
  }
}

void write_header(ofstream& out_s){

  out_s.open("html_output.html", ios::app);

  out_s << "<Html>\n";
  out_s << "<Title>\n";
  out_s << "This is my C++ HTML converter!\n";
  out_s << "</Title>\n";
  out_s << "<Body>\n\n";
}

void write_footer(ofstream& out_s){

  out_s << "\n\n</Body>\n";
  out_s << "</Html>\n";
}

void copy_test(ifstream& in_s, ofstream& out_s){

  char next_char;

  cout << "Reading entire contents of file... \n\n";

  while (! in_s.eof()){ //Read all numbers one-by-one to the end of the file

    if(next_char == '\n'){
      out_s << " <br>";
    }
    out_s.put(next_char);
    in_s.get(next_char);
  }

}
