#ifndef ADAPTER_PATTERN_INCLUDE_AIRPORT_H
#define ADAPTER_PATTERN_INCLUDE_AIRPORT_H

#include "abstract_air_transport.h"
#include <iostream>

using namespace std;

// Client-class
// Airport can only receive or launch air transport
class Airport {
  public:
    Airport() {
      cout << "Airport was created.\n";
    }

    void LaunchAirTransport(const AbstractAirTransport& aircraft) {
      aircraft.BlastOff();
    }

    void ReceiveAirTransport(const AbstractAirTransport& aircraft) {
      aircraft.Landing();
    }
};
#endif
