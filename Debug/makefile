################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 01-Source/04-Application/subdir.mk
-include 01-Source/02-HAL/SSD/Src/subdir.mk
-include 01-Source/02-HAL/LED/Src/subdir.mk
-include 01-Source/02-HAL/LCD/Src/subdir.mk
-include 01-Source/02-HAL/BUZZER/Src/subdir.mk
-include 01-Source/02-HAL/BUTTON/Src/subdir.mk
-include 01-Source/01-MCAL/GLBL_INT/Src/subdir.mk
-include 01-Source/01-MCAL/EXT_INT/Src/subdir.mk
-include 01-Source/01-MCAL/DIO/Src/subdir.mk
-include 01-Source/01-MCAL/ADC/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Amit_D24_Interfacing
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Amit_D24_Interfacing.lss \

FLASH_IMAGE += \
Amit_D24_Interfacing.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Amit_D24_Interfacing.elf secondary-outputs

# Tool invocations
Amit_D24_Interfacing.elf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Amit_D24_Interfacing.map -mmcu=atmega32 -o "Amit_D24_Interfacing.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Amit_D24_Interfacing.lss: Amit_D24_Interfacing.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Amit_D24_Interfacing.elf  >"Amit_D24_Interfacing.lss"
	@echo 'Finished building: $@'
	@echo ' '

Amit_D24_Interfacing.hex: Amit_D24_Interfacing.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Amit_D24_Interfacing.elf  "Amit_D24_Interfacing.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Amit_D24_Interfacing.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Amit_D24_Interfacing.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Amit_D24_Interfacing.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
