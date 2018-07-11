#include <string>
using std::string;

#ifndef INSTRUCTION_H
#define INSTRUCTION_H

class Instruction
{
	public:
		Instruction();
		Instruction(string);
		~Instruction();
		string getInstruction() const;
		void setInstruction(const string);
		//[TODO] getfields

	private:
		string instruction;
		//[TODO] fields
};

#endif
