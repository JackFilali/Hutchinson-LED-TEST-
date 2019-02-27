# include <stdio.h>
# define NUM_LEDS 135
# define DATA_PIN 11
CRGB leds[NUM_LEDS];
void setup(){
    FastLED.addLeds<WS28128,DATA_PIN>[leds,NUM_LEDS];
}
void loop(){
    for(int i=0; i<NUM_LEDS; i++){
        leds[i] = CRGB :: Blue;
        leds[(NUM_LEDS - i)] = CRGB :: yellow;
        FastLED.show();
        delay(30);
        leds[i] = CRGB :: Black;
        leds[(Num_LEDS - i)] = CRGB :: Black
        
      leds[67] = CRGB::Green; 
      FastLED.show();
      delay(1000);
        
    }
}
