//this program is for put high all the pins in the port D with a single loop with delay 
#include<pic.h>
__CONFIG(0x3f3a);//use this line before converting this code to hex code.
void delay(unsigned int y)
{
	while(y--);
}
char e[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};//hex code for each pin 
void main()
{
int i;
TRISD=0x00;//inilizing port D
PORTD=0x00;//set all the pins to low 
while(1)
{
for(int i=0;i<=7;i++)//single loop for all the pins
{
PORTD=0x00;
PORTD=e[i];//call the hex value according to the value in the ariable i
delay(32500);
}
}
}
