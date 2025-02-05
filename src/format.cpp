#include <string>

#include "format.h"

using std::string;

// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
  int hours, minutes;
  //calculate hours, minutes and seconds
  hours = seconds / 3600;
  seconds = seconds % 3600;
  minutes = seconds / 60;
  seconds = seconds % 60;
  return std::to_string(hours) + ":" + std::to_string(minutes) + ":" +
         std::to_string(seconds);
}