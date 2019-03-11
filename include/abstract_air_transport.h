#ifndef ADAPTER_PATTERN_INCLUDE_ABSTRACT_AIR_TRANSPORT_H
#define ADAPTER_PATTERN_INCLUDE_ABSTRACT_AIR_TRANSPORT_H

class AbstractAirTransport {
  public:
    virtual void Landing()const =0;
    virtual void BlastOff()const =0;
};

#endif

