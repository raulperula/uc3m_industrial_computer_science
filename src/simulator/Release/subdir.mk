################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../charkeyboard.cpp \
../device.cpp \
../display.cpp \
../input.cpp \
../keyboard.cpp \
../linekeyboard.cpp \
../main.cpp \
../output.cpp \
../printer.cpp \
../processor.cpp \
../reverse.cpp \
../uppercase.cpp 

OBJS += \
./charkeyboard.o \
./device.o \
./display.o \
./input.o \
./keyboard.o \
./linekeyboard.o \
./main.o \
./output.o \
./printer.o \
./processor.o \
./reverse.o \
./uppercase.o 

CPP_DEPS += \
./charkeyboard.d \
./device.d \
./display.d \
./input.d \
./keyboard.d \
./linekeyboard.d \
./main.d \
./output.d \
./printer.d \
./processor.d \
./reverse.d \
./uppercase.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


