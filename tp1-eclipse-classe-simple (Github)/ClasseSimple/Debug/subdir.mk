################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../B3408_tests.cpp \
../Cartography.cpp \
../DMP.cpp \
../ListeDMP.cpp \
../test.cpp 

OBJS += \
./B3408_tests.o \
./Cartography.o \
./DMP.o \
./ListeDMP.o \
./test.o 

CPP_DEPS += \
./B3408_tests.d \
./Cartography.d \
./DMP.d \
./ListeDMP.d \
./test.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -Wno-write-strings -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


