################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../servidor/servidor_sindicato.c 

OBJS += \
./servidor/servidor_sindicato.o 

C_DEPS += \
./servidor/servidor_sindicato.d 


# Each subdirectory must supply rules for building sources it contributes
servidor/%.o: ../servidor/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


