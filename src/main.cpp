#include "airport.h"
#include "transport_plane.h"
#include "truck.h"

int main() {
  Truck truck;
  //We're "loading" truck into tranport plane.
  TransportPlane plane(truck);

  Airport airport;

  //Now airport, as client of air transport, can receive truck in plane
  airport.LaunchAirTransport(plane);
  airport.ReceiveAirTransport(plane);
  return 0;
}
