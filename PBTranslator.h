#include "Instruction.h"
#include "protobuf/InstructionMsgBook.pb.h"

#ifndef PBTRANSLATOR_H
#define PBTRANSLATOR_H

class PBTranslator
{
	public:
		PBTranslator();
		~PBTranslator();
		void encode(const Instruction& instruction, tutorial::InstructionMsg* instMsg) const;
		void decode(Instruction& instruction, const tutorial::InstructionMsg& instMsg) const;
};

#endif
