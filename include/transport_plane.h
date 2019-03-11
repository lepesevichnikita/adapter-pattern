#ifndef ADAPTER_PATTERN_INCLUDE_TRANSPORT_PLANE_H
#define ADAPTER_PATTERN_INCLUDE_TRANSPORT_PLANE_H

#include "abstract_air_transport.h"
#include "abstract_ground_transport.h"
#include <iostream>

using namespace std;

// Object adapter from ground to air transport
class TransportPlane: public AbstractAirTransport {
  public:
    TransportPlane(const AbstractGroundTransport& ground_transport):
      ground_transport_(ground_transport)
  {
    cout << "Ground transport was loaded!\n";
  }

    void Landing() const {
      cout << "Landing of transport plane...\n";
    }

    void BlastOff() const {
      cout << "Blast-off of transport plane..\n";
    }

  private:
    const AbstractGroundTransport & ground_transport_;
};

#endif
