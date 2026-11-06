################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Mcal/USART/subdir.mk
-include Mcal/Timer2/subdir.mk
-include Mcal/Timer1/subdir.mk
-include Mcal/Timer0/subdir.mk
-include Mcal/GIE/subdir.mk
-include Mcal/EXTI/subdir.mk
-include Mcal/DIO/subdir.mk
-include Mcal/ADC/subdir.mk
-include Hal/Sev_Segment/subdir.mk
-include Hal/LED/subdir.mk
-include Hal/LCD/subdir.mk
-include Hal/KPD/subdir.mk
-include Hal/DC_Motor/subdir.mk
-include App/subdir.mk
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

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Atmega_32_Drives.lss \

FLASH_IMAGE += \
Atmega_32_Drives.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Atmega_32_Drives.elf secondary-outputs

# Tool invocations
Atmega_32_Drives.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Atmega_32_Drives.map -mmcu=atmega32 -o "Atmega_32_Drives.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Atmega_32_Drives.lss: Atmega_32_Drives.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Atmega_32_Drives.elf  >"Atmega_32_Drives.lss"
	@echo 'Finished building: $@'
	@echo ' '

Atmega_32_Drives.hex: Atmega_32_Drives.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Atmega_32_Drives.elf  "Atmega_32_Drives.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Atmega_32_Drives.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Atmega_32_Drives.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Atmega_32_Drives.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
