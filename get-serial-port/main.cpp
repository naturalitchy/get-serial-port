#define no_init_all

#include "get-serial-port.h"
#include <string>

std::string StaticVariable::autoComPortName = "";

int main() {
	
	GetSerialPort getSerialPort;
	int num = getSerialPort.getCOMPort();

	std::cout << "static (main) = " << StaticVariable::autoComPortName << std::endl;
	std::cout << "result (main) = " << num << std::endl;

	return 0;
}



