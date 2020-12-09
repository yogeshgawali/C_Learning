#include<stdio.h>

main()
{
    char p[] = "India";
    char *q  = "Srilanka";
    printf("line 1.0: %s\n", p);
    p[0] = 'A';
    p[1] = 'b';
    printf("line 1.1: %s\n", p);
    printf("line 2.0: %s\n", q);
    q[0] = 'A';
    q[1] = 'b';
    printf("line 2.1: %s\n", q);
}
