#define no_init_all

#include "get-serial-port.h"
#include <string>

#include "connect-serial.h"

std::string StaticVariable::autoComPortName = "";

int main() {
	/*
	GetSerialPort getSerialPort;
	int num = getSerialPort.getCOMPort();

	std::cout << "static (main) = " << StaticVariable::autoComPortName << std::endl;
	std::cout << "number (main) = " << num << std::endl;
	*/
	
	ConnectSerial connectSerial;
	connectSerial.comPortInput();
	
	return 0;
}



