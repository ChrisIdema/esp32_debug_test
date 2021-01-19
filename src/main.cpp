#include <stdio.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/event_groups.h"

volatile int counter = 0;

extern "C" void app_main(){ 
	while(1){
		vTaskDelay(100);
		++counter;
	}
} 