#include "CPU.h"
#include "Instructions.h"

void WDC65816::Execute(const Instruction& InInstruction)
{
	ExecutionMap[InInstruction.OpCode](*this, InInstruction.Operand);  // #TODO: Static search
}