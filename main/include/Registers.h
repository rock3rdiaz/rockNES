#ifndef REGISTERS_H
#define REGISTERS_H

#include <cstdint>

typedef uint8_t byte;
typedef uint16_t word;

namespace rockNES {

	struct Registers {
		byte A, X, Y, S, P;
		word PC;
	};

}

#endif