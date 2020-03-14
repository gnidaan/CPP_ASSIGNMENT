################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ASSIGNMENT4_01.cpp \
../src/account.cpp \
../src/insufficientfunds.cpp 

OBJS += \
./src/ASSIGNMENT4_01.o \
./src/account.o \
./src/insufficientfunds.o 

CPP_DEPS += \
./src/ASSIGNMENT4_01.d \
./src/account.d \
./src/insufficientfunds.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


