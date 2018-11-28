#pragma once
#include <string>
#include <vector>
#include "Date.h"
#include "Seat.h"

class Bus {
private:
  int reservedSeatCount;
public:
  int busNo;
  std::string driverName;
  std:: string source;
  std:: string destination;
  Date const * departure;
  Date const * arrival;
  std::vector<Seat*> seats;
  Bus(
    int busN,
    std::string drName,
    std::string src,
    std::string dest,
    std::string dep,
    std::string arr
  );

  std::string GetDepartureTime() const;
  std::string GetArrivalTime() const;

  void GetSeatStatus() const;

  void ReserveSeat(int seatNum, std::string name);
};
