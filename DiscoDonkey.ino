
#include <SPI.h>
#include <SdFat.h>
#include <AudioPlayer.h>
AudioPlayer player;


void setup(){
  Serial.begin(115200);
  player = AudioPlayer();
  player.init(); 
}




void loop(){
}
