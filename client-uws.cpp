#include <iostream>
#include <uWS/uWS.h>
#include <string>

#include "PBTranslator.h"

int main(int argc, char *argv[])
{
	uWS::Hub h;
	tutorial::InstructionMsgBook instMsgBook;
	PBTranslator pbtranslator;
	Instruction inst1("REMOVE_REGION");

	{
		// add instruction to instruction message book
		pbtranslator.encode(inst1, instMsgBook.add_inst());
	}

	// bind function to hub
	h.onConnection([&h, &instMsgBook](uWS::WebSocket<uWS::CLIENT> *ws, uWS::HttpRequest req)
		{
			std::string message;
			if (!instMsgBook.SerializeToString(&message)) {
				std::cerr<<"Failed to serial instruction!\n";
			    return -1;
			}
			std::cout << "Client send: " << message << std::endl;
			ws->send(message.c_str());
			h.getDefaultGroup<uWS::CLIENT>().close();
		}
	);

	std::cout << "Connection started." << std::endl;

	h.connect("ws://localhost:8080", nullptr);
	h.run();

	std::cout << "Connection terminated." << std::endl;

	return 0;
}
