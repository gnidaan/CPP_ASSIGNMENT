################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ASSIGNMENT6_02.cpp \
../src/Circle.cpp \
../src/Rectangle.cpp \
../src/Square.cpp \
../src/shape.cpp 

OBJS += \
./src/ASSIGNMENT6_02.o \
./src/Circle.o \
./src/Rectangle.o \
./src/Square.o \
./src/shape.o 

CPP_DEPS += \
./src/ASSIGNMENT6_02.d \
./src/Circle.d \
./src/Rectangle.d \
./src/Square.d \
./src/shape.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


