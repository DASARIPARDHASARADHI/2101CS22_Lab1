#include<stdio.h>
int main()
{
    float x,y;int a;
    printf("Enter a two numbers:");
    scanf("%f%f",&x,&y);
    printf("Enter  1 for +,2 for -,3 for *,4 for /:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Addition of taken two numbers:%f",x+y);
        break;
        case 2:
        printf("Subtraction of taken two numbers:%f",x-y);
        break;
        case 3:
        printf("Multiplication of taken two numbers:%f",x*y);
        break;
        case 4:
        printf("Division of taken two numbers:%f",x/y);
        break;
        default:
        printf("Wrong input");
    }
    return 0;
}