#define no_init_all

#include "get-serial-port.h"
#include <string>

const char* StaticVariable::autoComPortName = "";

int main() {
	
	GetSerialPort getSerialPort;
	//getSerialPort.getCOMPort();
	std::string ss = getSerialPort.getCOMPort();

	std::cout << "string (main) = " << ss << std::endl;
	std::cout << "static (main) = " << StaticVariable::autoComPortName << std::endl;

	return 0;
}



