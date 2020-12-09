#include<stdio.h>

union group
{
    int size;
    char name;
    float val;
};
int main()
{
    union group u;
    printf("%d\n", sizeof(u));
    u.size = 10;
    u.val = 20.56f;
    printf("%d\n", u.size);
    u.size = 55;
    printf("%f\n", u.val);
    return 0;
}
