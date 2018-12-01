#include <map>
#include "Bus.h"
#include "Util.h"

void Util::Install(
  int busNo,
  std::string name,
  std::string src,
  std::string dest,
  std::string dep,
  std::string arr,
  std::map<int, Bus*> &buses
  ) {
  Bus* b1 = new Bus(busNo, name, src, dest, dep, arr);
  buses[busNo] = b1;
};

void Util::Show(std::map<int, Bus*> &buses) {

};

void Util::Reservation(
  int busNo, int seatNo, std::string name, std::map<int, Bus*> &buses
  ) {
  (*buses[busNo]).ReserveSeat(seatNo, name);
};

void Util::BusesAvailable(std::map<int, Bus*> &buses) {
  std::cout << "***************************************************************" << std::endl;
  std::cout << 
  "No" << "\t" <<
  "Driver" << "\t" <<
  "Source" << "\t" <<
  "Destination" << "\t" <<
  "Departure" << "\t" <<
  "Arrival" << "\t" <<
  std::endl;
  std::cout << "***************************************************************" << std::endl;
  for(auto busPtr = buses.begin(); busPtr != buses.end(); ++busPtr) {
    Bus bus = (*(*busPtr).second);
    std::cout << 
      bus.busNo << "\t" << 
      bus.driverName << "\t" <<
      bus.source << "\t" <<
      bus.destination << "\t\t" <<
      bus.departure->GetTime() << "\t\t" <<
      bus.arrival->GetTime() <<
      std::endl;
  }
  std::cout << "***************************************************************" << std::endl;
};
