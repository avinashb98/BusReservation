#include <iostream>
#include <map>
#include "lib/Bus.h"
#include "lib/Util.h"

using namespace std;

map<int, Bus*> buses;
Bus* b1 = new Bus(1, "Hari", "Lucknow", "Delhi", "20:00", "05:00");
Bus* b2 = new Bus(2, "Raman", "Delhi", "Lucknow", "22:00", "08:00");
Util util;

int prompt() {
  int choice;
  cout << "1. Install Bus" << endl;
  cout << "2. Reservation" << endl;
  cout << "3. Show Bus Status" << endl;
  cout << "4. Buses Available" << endl;
  cout << "5. Exit" << endl;
  cout << "Enter your choice -> ";
  cin >> choice;
  return choice;
}

int main() {
  buses[1] = b1;
  buses[2] = b2;
  int choice;
  do {
    choice = prompt();
    switch(choice) {
      case 1: {
        int n;
        std::string name, src, dest, dep, arr;
        cout << "Bus No: ";
        cin >> n;
        cout << "Driver's Name: ";
        cin >> name;
        cout << "Source: ";
        cin >> src;
        cout << "Destination: ";
        cin >> dest;
        cout << "Departure Time: ";
        cin >> dep;
        cout << "Arrival Time: ";
        cin >> arr;
        util.Install(n, name, src, dest, dep, arr, buses);
        cout << "Bus successfully installed" << endl;
        break;
      }
      case 2: {
        int n, seat;
        std::string name;
        cout << "Bus No: ";
        cin >> n;
        cout << "Seat No: ";
        cin >> seat;
        cout << "Passenger Name: ";
        cin >> name;
        util.Reservation(n, seat, name, buses);
        cout << "Seat successfully reserved" << endl;
        break;
      }
      case 3: {
        int n;
        cout << "Bus Number: ";
        cin >> n;
        (*buses[n]).GetSeatStatus();
        break;
      }
      case 4: {
        util.BusesAvailable(buses);
        break;
      }
      case 5:
        cout << "Thank You" << endl;
        return(0);
      default:
        cout << "Invalid Choice. Try Again ->";
    }
  } while(1);
  return 0;
}