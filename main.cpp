#include <iostream>
#include <string>

// Homework 6 — Jaylen
// CIS 5 Week 06 · Menu

using std::string;
using std::cout;
using std::cin;
using std::endl;
int choice;
int number;
string name;
int main(){
  do {
    cout << "Choose one of these choices" << endl;
    cout << "1. Print Hello {user}" << endl;
    cout << "2. Countdown" << endl;
    cout << "3. Close menu." << endl;
    cin >> choice;
  if (choice == 1)
  {
   cout << "What is your name?" << endl;
   cin >> name;
   cout << "Hello " << name << endl;
  }
  else if (choice == 2){
    cout << "Type in any number";
    cin >> number;
   while (number >= 1)
  {
     number = number - 1;
    cout << number << endl; }
  }
  else if (choice == 3)
  {
    cout << "Exiting menu.." << endl;
  }
  else 
  {
    cout << "Invalid" << endl; }
  }
    while (choice != 3);
    cout << "The menu is closed";
  return 0;
  }