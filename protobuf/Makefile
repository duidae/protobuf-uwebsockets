# See README.txt.

all:
	protoc $$PROTO_PATH --cpp_out=. InstructionMsgBook.proto
	@touch protoc_middleman

.PHONY: all cpp clean
clean:
	rm -f protoc_middleman InstructionMsgBook.pb.h InstructionMsgBook.pb.cc

