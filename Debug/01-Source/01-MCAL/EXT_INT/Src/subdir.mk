################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../01-Source/01-MCAL/EXT_INT/Src/Ext_INT.c 

OBJS += \
./01-Source/01-MCAL/EXT_INT/Src/Ext_INT.o 

C_DEPS += \
./01-Source/01-MCAL/EXT_INT/Src/Ext_INT.d 


# Each subdirectory must supply rules for building sources it contributes
01-Source/01-MCAL/EXT_INT/Src/%.o: ../01-Source/01-MCAL/EXT_INT/Src/%.c 01-Source/01-MCAL/EXT_INT/Src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\05-OS\Cfg" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\02-HAL\KEYPAD\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\05-OS\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\DIO\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\EEPROM\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\02-HAL\EEPROM24C16\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\I2C\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\SPI\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\UART\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\WDG\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\TIMER0\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\ADC\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\EXT_INT\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\01-MCAL\GLBL_INT\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\00-Lib" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\02-HAL\BUTTON\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\02-HAL\BUZZER\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\02-HAL\LCD\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\02-HAL\LED\Inc" -I"D:\Amit_Interfacing\Amit_D24_Interfacing\01-Source\02-HAL\SSD\Inc" -Wall -g2 -gstabs -O2 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


