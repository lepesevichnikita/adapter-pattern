#ifndef ADAPTER_PATTERN_INCLUDE_TRUCK_H
#define ADAPTER_PATTERN_INCLUDE_TRUCK_H

#include "abstract_ground_transport.h"

#include <iostream>

using namespace std;

class Truck: public AbstractGroundTransport {
  public:
    Truck() {
      cout << "Hello! I'm Truck and i'm ground transport!\n";
    }

    void Drive() {
      cout << "Moving to garage...\n";
    }
};

#endif
