#include<stdio.h>
int main(){
    int sum;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum = i+j;
            printf("i = %d, j = %d, sum = %d\n",i,j,sum);
            /* code */
        }
        
    }
    
  return 0;
}