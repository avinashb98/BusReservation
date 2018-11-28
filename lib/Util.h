#include <map>
#include "Bus.h"

class Util {
public:
  void Install(std::map<int, Bus*> &buses);
  void Reservation(std::map<int, Bus*> &buses);
  void Show(std::map<int, Bus*> &buses);
  void BusesAvailable(std::map<int, Bus*> &buses);
};
