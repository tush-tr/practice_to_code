#include<stdio.h>
int main(){
	char a;
	printf("Enter the letter for grade: ");
	scanf("%c",&a);
	switch(a){
		case 's': printf("Super");break;
		case 'a': printf("Very Good");break;
		case 'b': printf("Fair");break;
		case 'y': printf("Absent");break;
		case 'f': printf("fail");break;
		default: 
		printf("Please enter a valid grade");
	}
	printf("\n\n");
	return 0;
}
