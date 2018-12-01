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
  Bus* b1 = new Bus(1, name, src, dest, dep, arr);
  buses[busNo] = b1;
};

void Util::Show(std::map<int, Bus*> &buses) {

};

void Util::Reservation(
  int busNo, int seatNo, std::string name, std::map<int, Bus*> &buses
  ) {
  (*buses[busNo]).ReserveSeat(seatNo, name);
  // (*buses[busNo]).GetSeatStatus();
};

// void Util::BusesAvailable(std::map<int, Bus> &buses) {

// };
