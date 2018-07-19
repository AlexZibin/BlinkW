#include "BlinkW.h"

BlinkW::BlinkW (Fifo *f1, int pin, unsigned long speed, bool inverse) {
  pinMode(pin, OUTPUT);
  _pin = pin;
  _inverse = inverse;
  _timer = new Timer (speed, 0, 0, 0);
  _f1 = f1;
}

void BlinkW::process(){
  if (_timer->needToTrigger()) {
	  if (_inverse) {
		digitalWrite(_pin, _f1->read()?LOW:HIGH);
	  } else {
		digitalWrite(_pin, _f1->read()?HIGH:LOW);
	  }
  }
}
