#include <iostream>
#include <map>
#include "lib/Bus.h"
#include "lib/Util.h"

using namespace std;

map<int, Bus*> buses;
Util util;

int prompt() {
  int choice;
  cout << "1. Install" << endl;
  cout << "2. Reservation" << endl;
  cout << "3. Show" << endl;
  cout << "4. Buses Available" << endl;
  cout << "5. Exit" << endl;
  cout << "Enter your choice -> ";
  cin >> choice;
  return choice;
}

int main() {
  // int choice;
  // do {
  //   choice = prompt();
  //   switch(choice) {
  //     case 1:
  //       break;
  //     case 2:
  //       break;
  //     case 3:
  //       break;
  //     case 4:
  //       break;
  //     case 5:
  //       cout << "Thank You" << endl;
  //       return(0);
  //     default:
  //       cout << "Invalid Choice. Try Again ->";
  //   }
  // } while(1);
  util.Install(1, "John", "Lucknow", "Delhi", "20:00", "05:00", buses);
  util.Reservation(1, 4, "Alice", buses);
  util.Reservation(1, 5, "Bob", buses);
  util.Reservation(1, 6, "Cedric", buses);
  (*buses[1]).GetSeatStatus();
  return 0;
}