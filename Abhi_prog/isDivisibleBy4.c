/*
test wheather a is divisible by 4. (do not use mathematical operator)
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
        temp = a[i] >> 2;
        if(a[i] == (temp<<2))
            printf("%d is divisible by 4. (%04X)\n", a[i], a[i]);
        else
            printf("%d is not divisible by 4. (%04X)\n", a[i], a[i]);
    }
    printf("=================\n");
    return 0;
}

/*

*/
