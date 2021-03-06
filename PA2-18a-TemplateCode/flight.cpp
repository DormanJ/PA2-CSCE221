/*
  name
  section
  assignment
  file
*/

#include "flight.h"

Flight::Flight()
{
	flightNum = "";
	destination = "";
	departureTime = "";
	gateNum = "";
}

Flight::Flight(std::string fn, std::string dest, std::string dt, std::string gn)
{
	flightNum = fn;
	destination = dest;
	departureTime = dt;
	gateNum = gn;
}

Flight::~Flight()
{

}

bool compareToDestination(Flight f1, Flight f2)
{
	if (f1.destination >= f2.destination) {
		return true;
	}
	else {
		return false;
	}
}

bool compareToDepartureTime(Flight f1, Flight f2)
{
	if (f1.departureTime >= f2.departureTime) {
		return true;
	}
	else {
		return false;
	}
}
