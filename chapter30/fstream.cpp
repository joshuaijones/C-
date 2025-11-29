#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  // standard syntax for open() // void open(const char *filename, ios::openmode mode);
 char data[100];

 ofstream outfile;
 outfile.open("data.txt");
 
 cout << "Writing to the file..." << endl;
 cout << "Enter your name: ";
 cin.getline(data, 100);
   
 outfile << data << endl;

 cout << "Enter your age: ";
 cin >> data;
 cin.ignore();
 
 outfile << data << endl;
 outfile.close();

 ifstream infile;
 infile.open("data.txt");

 cout << "Reading from the file..." << endl;
 string line; 
 while(getline(infile, line))
     cout << line << endl;

 infile.close();

 return 0;
}
