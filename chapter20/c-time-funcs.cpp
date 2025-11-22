#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  time_t now = time(0);

  char* dt = ctime(&now);

  cout << "The local date time is: " << dt << endl;

  tm *gmtm = gmtime(&now);
  dt = asctime(gmtm);
  cout << "The UTC date and time is: " << dt << endl;

  cout << "---------------------" << endl;
  
  cout << "Number of sec since Januaray 1, 1970: " << now << endl;

  tm *ltm = localtime(&now);

  return 0;
}
