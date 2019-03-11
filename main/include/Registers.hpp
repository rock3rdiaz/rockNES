#ifndef REGISTERS_H
#define REGISTERS_H

#include <cstdint>

/**
 * Register:
 *      Bits     Name    Description
 *      8        A       Accumulator
 *      8        X       Index register X
 *      8        Y       Index register Y
 *      16       PC      Program counter
 *      8        S       Stack pointer
 *      8        P       Processor status register
 *
 * Processor status register (flags):
 *      Bit     Name    Description
 *      0       C       Carry (0=no carry, 1=carry)
 *      1       Z       Zero (0=nonzero, 1=zero)
 *      2       I       IRQ disable (0=IRQ enable, 1=IRQ disable)
 *      3       D       Decimal mode (0=normal, 1=BCD mode for ADC/SBC opcodes)
 *      4       B       Break flag (0=IRQ/NMI, 1=Reset or BRK/PHP opcodes)
 *      5       -       Not used (always 1)
 *      6       V       Overflow (0=no overflow, 1=overflow)
 *      7       N       Negative/sign (0=positive, 1=negative)
 *
 * */


typedef uint8_t byte;
typedef uint16_t word;

namespace rockNES {

	struct Registers {
		byte A, X, Y, S, P;
		word PC;
	};

}

#endif
