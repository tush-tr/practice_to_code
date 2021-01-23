#include<stdio.h>
int swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("value of a= %d,b= %d\n\n",a,b);
  return 0;
}