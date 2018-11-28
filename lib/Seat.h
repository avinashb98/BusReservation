#pragma once
#include <string>

class Seat {
public:
  int number;
  bool reserved;
  std::string occupant;
  Seat(int num) : number(num), reserved(false), occupant("") {};
  void Reserve(std::string name) {
    reserved = true;
    occupant = name;
  }
  void Cancel() {
    reserved = false;
    occupant = "";
  }
};
