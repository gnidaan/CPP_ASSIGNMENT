################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ASSIGNMENT2_\ 01.cpp \
../src/test_imp.cpp 

OBJS += \
./src/ASSIGNMENT2_\ 01.o \
./src/test_imp.o 

CPP_DEPS += \
./src/ASSIGNMENT2_\ 01.d \
./src/test_imp.d 


# Each subdirectory must supply rules for building sources it contributes
src/ASSIGNMENT2_\ 01.o: ../src/ASSIGNMENT2_\ 01.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ASSIGNMENT2_ 01.d" -MT"src/ASSIGNMENT2_\ 01.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


