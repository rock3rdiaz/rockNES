#include "gtest/gtest.h"
#include "../include/CPUTestFixture.h"

using namespace rockNES;

TEST_F(CPUTestFixture, LDA_Inmediate) {	
	cpu.LDA_Inmediate(12);
	ASSERT_EQ(12, cpu.getRegisters().A);
};

TEST_F(CPUTestFixture, LDA_Inmediate_SetFlagZ) {	
	cpu.LDA_Inmediate(12);
	ASSERT_EQ(12, cpu.getRegisters().A);
}