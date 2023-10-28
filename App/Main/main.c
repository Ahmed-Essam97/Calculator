/*
 * COTS.c
 *
 * Created: 8/12/2023 3:34:43 PM
 * Author : Ahmed Essam
 */ 


#include "PORT_Core.h"
#include "Calculator_Core.h"

#define  F_CPU  16000000U
#include <util/delay.h>


int main(void)
{
	
	PORT_Init();
	while (1)
	{
		Calculator();
	}
}

