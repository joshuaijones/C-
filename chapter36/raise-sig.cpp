#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler( int signum ) {
  cout << "Interrupt signal (" << signum << ") recieved.\n";

  exit(signum);
}

int main() {
  // this is declaring a signal which will trigger for SIGINT and will run the handler
  signal(SIGINT, signalHandler);

  int i = 0;

  while(++i) {
    cout << "Going to sleep..." << endl;
    if ( i == 3 ) {
      // This will call the SIGINT
      raise(SIGINT); 
    }
    sleep(1);
  }

  return 0;
}
