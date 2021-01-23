// Prime Number 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    int i=2;
    while(i<=n-1){
        if(n%i==0){
            printf("Not a prime number");
            break;
        }
        i++;
    }
    if(i==n){
        printf("Prime Number");
    }
  return 0;
}