#include <iostream>

using namespace std;

int main () {
  string firstName, lastName;

  cout << "Enter the first Name: ";
  cin >> firstName;
  cout << "Enter The Last Name: ";
  cin >> lastName;

  cout << "The Reverse Name is: " << lastName << " " << firstName <<endl;

  return 0;
}