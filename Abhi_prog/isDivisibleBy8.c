/*
test wheather a is divisible by 8. (do not use mathematical operator)
*/

#include<stdio.h>

int main()
{
	int temp, *a, n, i;

	printf("=================\n");
	printf("N - number of test cases\nnum1\nnum2\n.\n.\n.\nnumN\n");
	printf("=================\n");
	scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf(" %d", a+i);
    }
    printf("=================\n");
	for(i=0; i<n; i++)
    {
        temp = a[i] >> 3;
        if(a[i] == (temp<<3))
            printf("%d is divisible by 8. (%08X)\n", a[i], a[i]);
        else
            printf("%d is not divisible by 8. (%08X)\n", a[i], a[i]);
    }
    printf("=================\n");
    return 0;
}

/*
Enter a number:
45
45 is not divisible by 8.


=================
N - number of test cases
num1
num2
.
.
.
numN
=================
4
3534
5427
1827
3652
=================
3534 is not divisible by 8. (00000DCE)
5427 is not divisible by 8. (00001533)
1827 is not divisible by 8. (00000723)
3652 is not divisible by 8. (00000E44)
=================

*/
