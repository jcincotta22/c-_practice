#include <iostream>

using namespace std;

int main()
{
  int thisisanumber;

  cout<<"Please enter a number: ";
  cin>> thisisanumber;
  cin.ignore();
  cout<<"You entered: "<< thisisanumber <<"\n";
  cin.get();
}

// command line:  g++ test.cpp - compiles program
// ./a.out - runs program
