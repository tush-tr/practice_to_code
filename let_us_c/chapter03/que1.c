#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the cost price of the item: ");
    scanf("%d",&cp);
    printf("Enter the selling price of the item: ");
    scanf("%d",&sp);
    if(cp >sp)
    {
        printf("The seller has incurred loss of %d\n",cp-sp);
    }
    else if(sp>cp)
    {
        printf("The seller has made profit of %d\n",sp-cp);
    }
    else
    {
        printf("No profit No loss\n");
    }
    return 0;
}