#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>


typedef struct jacket
{
    int price;
    int size;
    char style[20];
    char brand[20];
}jacket;


int main()
{
    jacket New;
    
    jacket*pNew = malloc(sizeof(jacket));
    
    //new.price = 400;
    //new.size = 4;
    //strcpy(new.style, "Biker");
    //strcpy(new.brand, "All Saints");
    
    pNew->price = 400;
    pNew->size = 4;
    strcpy(pNew->style, "Biker");
    strcpy(pNew->brand, "All Saints");
    
    printf("Wishlist:%d USD, %d, %s, %s\n", pNew->price, pNew->size, pNew->style, pNew->brand);
}

