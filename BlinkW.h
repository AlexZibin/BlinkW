#ifndef BlinkW_h
#define BlinkW_h

#include "Timer.h"
#include "Fifo.h"

#include "Arduino.h"

#define INVERSE 1
#define NOT_INVERSE 0

class BlinkW {
  public: 
    BlinkW (Fifo *f1, int pin = LED_BUILTIN, unsigned long speed = 500ul, bool inverse = 0);
    void process();
  private:
    int _pin;
	bool _inverse;
	Timer *_timer;
	Fifo *_f1;
};

#endif

/*

enum Groups
{  
  GROUP_0 = 0,
	GROUP_1 = 1,
	};
	
enum Group0
{
  G0_ARDUINO = 0,	
};
	
enum Group1
{
  G1_LED_AN = 0,
	G1_LED_AUS = 1,
};

*/