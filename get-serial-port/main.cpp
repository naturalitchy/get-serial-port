#define no_init_all

#include "get-serial-port.h"
#include <iostream>



int main() {
	
	GetSerialPort getSerialPort;
	std::string portCh = "";
	printf("portCh(main) = %s \n", portCh);
	getSerialPort.getCOMPort(portCh);
	std::cout << "Main Start @@@@@@@@@@@@@@@@@@@@@@@@@ \n";
	std::cout << "StaticVariable::autoComPortName(main) = " << StaticVariable::autoComPortName << std::endl;
	printf("portCh(main) = %s \n", portCh);

	return 0;
}



