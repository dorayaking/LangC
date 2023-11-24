#include <stdio.h>

int main(void){
    int x, y, z;
    int price;
    printf("Welcome to C Programming!\n");
    x = 10;
    y = 2 * x;
    z = x + y;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    price = 500;
    printf("%.2f\n", price*1.1);
    return 0;
}