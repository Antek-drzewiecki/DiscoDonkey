#include "AudioPinConfiguration.h"
#include "SPI.h"


class AudioPlayer{
	public:
		AudioPlayer();
		byte init();
	private:
		void enableDataRequest();
		void disableDataRequest();
		void vsRequestForData();

		
};