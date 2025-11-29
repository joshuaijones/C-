#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  fstream datafile;
  datafile.open("data.txt");
  
  // move read cursor to the 4th byte
  datafile.seekg( 4 );
  string data;
  datafile >> data;
  cout << data << endl;

  // position 6 bytes ahead of cursor
  datafile.seekg( 7, ios::cur );
  datafile >> data;
  cout << data << endl;

  datafile.seekg( 6, ios::cur );
  datafile >> data;
  cout << data << endl;

  datafile.seekg( -10, ios::cur );
  datafile >> data;
  cout << data << endl;
  
  datafile.seekg( 0, ios::end );
  datafile.seekg( -5,  ios::cur );
  datafile >> data;
  cout << data << endl;

  return 0;
}
