#include<stdio.h>
int main(){
    char ch;
    
    
    do
    {
      int a,b;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Your sum is: %d\n",a+b);
        // fflush(stdin);
        
        printf("Do you want to calcualte again: y/n: ");
        scanf("%c",&ch);
    } while (ch == 'y');
  return 0;
}