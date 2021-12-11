################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../01-Source/02-HAL/LED/Src/Led.c 

OBJS += \
./01-Source/02-HAL/LED/Src/Led.o 

C_DEPS += \
./01-Source/02-HAL/LED/Src/Led.d 


# Each subdirectory must supply rules for building sources it contributes
01-Source/02-HAL/LED/Src/%.o: ../01-Source/02-HAL/LED/Src/%.c 01-Source/02-HAL/LED/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


