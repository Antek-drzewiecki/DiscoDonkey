#include "AudioPlayer.h"

AudioPlayer::AudioPlayer(){

}

byte AudioPlayer::init(){
	pinMode(MP3_DREQ, INPUT);
	pinMode(MP3_XCS, OUTPUT);
	pinMode(MP3_XDCS, OUTPUT);
	pinMode(MP3_RESET, OUTPUT);

	//init vs
	digitalWrite(MP3_XCS, HIGH);
	digitalWrite(MP3_XDCS, HIGH);
	digitalWrite(MP3_RESET, LOW);
	delay(50);


	return 0;
}


void AudioPlayer::enableDataRequest(){
	attachInterrupt(MP3_DERQ_ISR_NUM,vsRequestForData, RISING );
}
void AudioPlayer::disableDataRequest(){
	detachInterrupt(MP3_DERQ_ISR_NUM);

}
void AudioPlayer::vsRequestForData(){
	
}