     //use of strings
#include <iostream>    //Declaration of cin and cout
#include <string>      //Declaration of class string

using namespace std;

int main(){

    // defines four strings:
      string prompt("What is your name:  "),
          name,     // an empty
          line( 40 , '-'),  //string with 40 '-'
          total = "Hello ";

cout  << prompt;      //request for input 
getline(cin, name);    // inputs a name in one line

 total = total + name;   // concatenates and assigns strings

 cout << line << endl   //outputs line and name
      << total << endl;

cout << " Your name is "    //outputs length of the name
     << name.length() << "character long!" << endl;

cout << line << endl;

return 0;
}

