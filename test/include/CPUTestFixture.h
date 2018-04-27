#ifndef CPU_TestFixture_H
#define CPU_TestFixture_H

#include "gtest/gtest.h"
#include "../../main/include/CPU.h"

namespace rockNES {

	class CPUTestFixture : public ::testing::Test { 
		public:
			CPU cpu;
		protected:
			CPUTestFixture();
	 
		   	virtual void SetUp();
		 
		   	virtual void TearDown();
		 
		   	~CPUTestFixture();
	};

}

#endif