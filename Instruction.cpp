#include "Instruction.h"

Instruction::Instruction()
	:instruction("")
{
}

Instruction::Instruction(string i)
	:instruction(i)
{
}

Instruction::~Instruction()
{
}

string Instruction::getInstruction() const
{
	return instruction;
}

void Instruction::setInstruction(const string inst)
{
	instruction = inst;
}

