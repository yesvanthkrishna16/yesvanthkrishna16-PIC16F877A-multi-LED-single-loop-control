#include<pic.h>
void delay(unsigned int y)
{
	while(y--);
}
char e[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
void main()
{
int i;
TRISD=0x00;
PORTD=0x00;
while(1)
{
for(int i=0;i<=7;i++)
{
PORTD=0x00;
PORTD=e[i];
delay(32500);
}
}
}