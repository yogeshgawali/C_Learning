#include<stdio.h>


int main()
{
    unsigned short int temp=0, First6bit, Last10bit;
    First6bit = 0xaaaa;
    Last10bit = 0xfaa;
	temp = (First6bit & 0xFC00) | (Last10bit & 0x03FF);

	printf("%04X", temp);
}
