#include "connect-serial.h"

void ConnectSerial::comPortInput() {
	GetSerialPort getSerial;
	int num = getSerial.getCOMPort();
	
	std::cout << "ConnectSerial::comPortInput num = " << num << std::endl;
}