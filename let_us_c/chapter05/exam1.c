#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Which operation you want to make: +,-,/,*: ");
    scanf(" %c",&operator);
    switch (operator)
    {
    case ('+'):
        printf("%d",a+b);
        break;
    case ('-'):printf("%d",a-b);
    break;
    case('*'):printf("%d",a*b);break;
    case('/'):printf("%d",a/b);break;
    default:
        break;
    }


    return 0;
}