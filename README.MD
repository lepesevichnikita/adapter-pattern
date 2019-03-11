# Example of OOP pattern "Adapter" on c++

- include/*Truck* - is an implementation of AbstractGroundTransport
- include/*TransportPlane* - is an adapter from ground to air transport. It implements AbstractAirTransport
- include/*Airport* - is a client of AbstractAirTransport
