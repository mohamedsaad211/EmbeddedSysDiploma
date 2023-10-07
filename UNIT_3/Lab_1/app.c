#include <uart.h>
unsigned char string_buffer[100]="learn-in-depth:Saad";
unsigned char const cstring_buffer[100]="learn-in-depth:Saad";

void main(void)
{
	 uart_send_string(string_buffer);

}
