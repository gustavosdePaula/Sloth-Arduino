#include "Motor.h"

Motor::Motor(uint8_t pinPwm, uint8_t in1, uint8_t in2)
{
	_in1 = in1;
	_in2 = in2;
	_pinPwm = pinPwm;

	pinMode(pinPwm, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);

}

void Motor::speed(float speed) {
	analogWrite(_pinPwm, speed > 0 ? speed : -speed);
    digitalWrite(_in1, speed >=  0 ? 1 : 0);
    digitalWrite(_in2, speed >   0 ? 0 : 1);
}

void Motor::coast() {
	digitalWrite(_in1, 0);
	digitalWrite(_in2, 0);
}

void Motor::brake() {
	digitalWrite(_in1, 1);
	digitalWrite(_in2, 1);
}
