#define MOZZI_CONTROL_RATE 64
#include <Mozzi.h>
#include <Oscil.h>
#include <Tables/sin2048_int8.h>



void setup() {
  startMozzi();
  aSin.setFreq(440);

  // put your setup code here, to run once:

}

void updateControl(){



}


AudioOutput updateAudio(){
  return MonoOutput::from8Bit (aSin.next());
}





void loop() {
  
  // put your main code here, to run repeatedly:

}
