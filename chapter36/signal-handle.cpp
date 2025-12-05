#include <csignal>
#include <iostream>
#include <unistd.h>

using namespace std;

void signalHandler( int signum ) {
  cout << "Interrupt signal (" << signum << ") recieved.\n";

  exit(signum);
}

int main() {
  // register signal SIGINT and signal handler
  signal(SIGINT, signalHandler);

  while(1) {
    cout << "Going to sleep..." << endl;
    sleep(1);
  }

  return 0;
}

