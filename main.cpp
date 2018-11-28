#include <iostream>
#include "lib/Bus.h"

using namespace std;

int main() {
  Bus b(1, "Ram", "Lucknow", "Ballia", "20:00", "05:00");
  b.GetSeatStatus();
  b.ReserveSeat(1, "Avinash");
  b.GetSeatStatus();
  return 0;
}