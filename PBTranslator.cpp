#include "PBTranslator.h"

PBTranslator::PBTranslator()
{
}

PBTranslator::~PBTranslator()
{
}

void PBTranslator::encode(const Instruction& instruction, tutorial::InstructionMsg* instMsg) const
{
	string instStr = instruction.getInstruction();

	if (!instStr.empty()) {
		instMsg->set_inst_name(instStr);
	}
}

void PBTranslator::decode(Instruction& instruction, const tutorial::InstructionMsg& instMsg) const
{
	instruction.setInstruction(instMsg.inst_name());
}
