#include "../include/CPUTestFixture.h"

namespace rockNES {

	CPUTestFixture::CPUTestFixture() {

	}

	void CPUTestFixture::SetUp() {
		cpu = CPU();
	}

	void CPUTestFixture::TearDown() {

	}

	CPUTestFixture::~CPUTestFixture() {

	}

}