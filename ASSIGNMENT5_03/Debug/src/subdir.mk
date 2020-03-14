################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ASSIGNMENT5_03.cpp \
../src/Employee.cpp \
../src/Manager.cpp \
../src/Salesman.cpp \
../src/Salesmanager.cpp 

OBJS += \
./src/ASSIGNMENT5_03.o \
./src/Employee.o \
./src/Manager.o \
./src/Salesman.o \
./src/Salesmanager.o 

CPP_DEPS += \
./src/ASSIGNMENT5_03.d \
./src/Employee.d \
./src/Manager.d \
./src/Salesman.d \
./src/Salesmanager.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


