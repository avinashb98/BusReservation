#include <map>
#include "Bus.h"
#include "Util.h"

void Util::Install(std::map<int, Bus> &buses) {
  int busNo;
  std::string name, src, dest, dep, arr;
  
  std::cout << "Enter Bus No. -> ";
  std::cin >> busNo;
  std::cout << "Enter Driver's Name -> ";
  std::cin >> name;
  
  std::cout << "Enter Source -> ";
  std::cin >> src;
  std::cout << "Enter Departure Time -> ";
  std::cin >> dep;
  
  std::cout << "Enter Destination -> ";
  std::cin >> dest;
  std::cout << "Enter Arrival Time -> ";
  std::cin >> arr;

  Bus* b1 = new Bus(1, name, src, dest, dep, arr);
};

void Util::Show(std::map<int, Bus> &buses) {

};

void Util::Reservation(std::map<int, Bus> &buses) {

};

void Util::BusesAvailable(std::map<int, Bus> &buses) {

};
