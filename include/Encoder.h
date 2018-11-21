#include <arduino.h>
#ifndef Encoder_h
#define Encoder_h

    uint8_t _pinA;
    uint8_t _pinB;
    int _pulses=0;

class Encoder {
    public:
        Encoder(uint8_t pinA, uint8_t pinB, int pulserPerRev, float wheelRadius);
        float getDistance(); //return distance in meters
        int getPulses();
        float getRevolutions();   
        // void encoderChannelA();  
        // void encoderChannelB();  
    protected:
        int _pulsesPerRev;
        float _revolutions;
        float _distance;
        float _wheelRadius;
};

#endif
