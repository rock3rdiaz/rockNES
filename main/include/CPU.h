#ifndef CPU_H
#define CPU_H

#include "Registers.h"

namespace rockNES {

	class CPU {
		public:
			CPU();
			~CPU();

			inline const Registers& getRegisters() { return regs; }
			inline const int* getMemory() { return mem; }
			inline const unsigned short& getCycles() { return cycles; }

			void start();
			void loadRom(int rom[]);
			unsigned int fetch();
			unsigned int decode();

			void LDA_Inmediate(unsigned int operand);
		private:
			const static unsigned int MEM_SIZE = 65536; // memory size

			Registers regs;
			int mem[MEM_SIZE];
			unsigned short cycles;
	};

}

#endif