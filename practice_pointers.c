#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int main()
{
    int a = 1;
    int b = 2;
    
    int* x;
    int* y;
    
    x = &a;
    y = &b;
    
    *x = *y;
    
    
    printf("%d\n", a);
}
