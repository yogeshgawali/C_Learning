/*
input
var1:	xxxx xx00 0000 0000	(FC00)
var2:	0000 00xx xxxx xxxx (03FF)


*/

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 2 numbers number:\n");
    scanf("%d %d", &a, &b);
    //a = 0x2222;
    //b = 0x3333;
    printf("===================\n");
    printf("Input Numbers:\n");
    printf("%d:\t%04X\n", a, a);
    printf("%d:\t%04X\n", b, b);
    printf("===================\n");
    printf("%d:\t%04X\n", a, (a & 0xFC00));
    printf("%d:\t%04X\n", b, (b & 0x3FF));
    printf("===================\n");
    c = ((a & 0xFC00) | (b & 0x3FF));
    printf("Output:\n");
    printf("%d:\t%04X\n", c, c);
    printf("===================\n");
    return 0;
}

/*
Enter 2 numbers number:
3525636
3527352
===================
Input Numbers:
3525636:        35CC04
3527352:        35D2B8
===================
3525636:        CC00
3527352:        02B8
===================
Output:
52920:  CEB8
===================
*/
