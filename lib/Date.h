#pragma once
#include <iostream>
#include <string>

class Date {
public:
  int hour;
  int minute;
  
  Date(std::string time) {
    std::string hr = time.substr(0, 2);
    std::string min = time.substr(3, 2);
    hour = hr[0] == '0' ? std::stoi(hr.substr(1, 1)) : std::stoi(hr);
    minute = min[0] == '0' ? std::stoi(min.substr(1, 1)) : std::stoi(min);
  }
  
  std::string GetTime() const {
    std::string date = "";
    date += hour < 10 ? "0" + std::to_string(hour) : std::to_string(hour);
    date += ":";
    date += minute < 10 ? "0" + std::to_string(minute) : std::to_string(minute);
    return date;
  }
  
};
