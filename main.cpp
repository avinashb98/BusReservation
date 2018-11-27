#include <iostream>
#include "Bus.h"

using namespace std;

int main() {
  Bus b(1, "Ram", "Lucknow", "Ballia", "20:00", "05:00");
  cout << b.GetDepartureTime() << endl;
  b.GetSeatStatus();
  return 0;
}