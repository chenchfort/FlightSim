#ifndef CITY_H
  #define CITY_H

#include <fstream>

using namespace std;

class City
{
  double longitude;
  double latitude;
  char* name;
  char* state;
  char airport[4];
  double population;
public:
  City();
  ~City();
  int readCity(ifstream & file); //returns 0 if end of file
  void readAirport(char *str, char *s); //s = STATE 
  bool isEqual(const City *city) const;
  void copyLocation(const City *city);
  bool hasAirport();
  void setAirport(const char *a); //a = AIRPORT
  void calcDistance(const City *city) const;
  int getPassengers(const City *city) const;
  City& operator=(const City& rhs);
}; //class City
#endif
