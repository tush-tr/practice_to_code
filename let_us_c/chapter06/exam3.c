#include<stdio.h>
int main(){
    int i=8;
    int *j; // j will now store the address of i
    j = &i;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of j is %p\n",&j);
    printf("The value of j is %p", *(&j));
    
    return 0;
}