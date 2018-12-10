#include "main.h"

int main(void)
{
	mini_config();
	
	printf("This is STM32 MINI skeleton program\n");
	
	while (1)
	{
		
	}
}


/**
  * @brief  This function contains all user configuration.
  * @param  None
  * @retval None
  */
void mini_config(void)
{
	mini_led_config();
	mini_uart_config();
	mini_tim_config();
}
