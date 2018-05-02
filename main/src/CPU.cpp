#include "../include/CPU.h"

namespace rockNES {

	CPU::CPU() {
		regs = Registers();
	}

	CPU::~CPU() {

	}

	void CPU::start() {
		while(true) {
			unsigned int opcode = fetch(); // 1 byte
			switch(opcode) {				
				case 0xA9: // LDA inmediate
					LDA_Inmediate(fetch());
					break;
				default:
					break;
			}
		}
	}

	unsigned int CPU::fetch() {
		return mem[regs.PC++];
	}

	void CPU::loadRom(int rom[]) {
		
	}

	unsigned int CPU::decode() {
		return 0;
	}	

	void CPU::LDA_Inmediate(unsigned int operand) {
		if(operand == 0x00) 
			regs.P |= (1u << 1); // Z flag to 1		
		if(operand <= 0x7F)
			regs.P &= ~(1u << 7); // N flag to 0
		regs.A = operand;
		cycles = 2;
	}
}