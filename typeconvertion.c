#include<stdio.h>
int main(){
    int a=10;
    float b=a;
    // implicit conversion
    printf("%f\n",b);
    float c=10.9;
    // explicit conversion
    int d=(int)c;
    printf("%d",d);
    return 0;
}