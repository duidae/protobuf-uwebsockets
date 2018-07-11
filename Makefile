all: server-uws.cpp client-uws.cpp
	pkg-config --cflags protobuf  # fails if protobuf is not installed
	$(CXX) -std=c++11 -O3 server-uws.cpp -Isrc -o server-uws -lpthread -L. -luWS -lssl -lcrypto -lz -luv
	$(CXX) -std=c++11 -O3 Instruction.cpp PBTranslator.cpp protobuf/InstructionMsgBook.pb.cc client-uws.cpp -Isrc -o client-uws -lpthread -L. -luWS -lssl -lcrypto -lz -luv `pkg-config --cflags --libs protobuf`
.PHONY: clean
clean:
	rm -f server-uws
	rm -f client-uws
