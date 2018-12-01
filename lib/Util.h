#include <map>
#include "Bus.h"

class Util {
public:
  void Install(int busNo,
  std::string name,
  std::string src,
  std::string dest,
  std::string dep,
  std::string arr,
  std::map<int, Bus*> &buses);
  void Reservation(int busNo, int seatNo, std::string name, std::map<int, Bus*> &buses);
  void Show(std::map<int, Bus*> &buses);
  void BusesAvailable(std::map<int, Bus*> &buses);
};
