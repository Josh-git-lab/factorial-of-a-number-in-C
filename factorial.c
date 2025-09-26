#include <stdio.h>

int main(){
	int num,fact=1,i;	
	printf("Enter the number to find Factorial: ");
	scanf("%d",&num);
	if (num==0){
		printf("Factorial is zero\n");
		}else{
			for(i = 1; i <= num; i++){
			fact*=i;
			}
		}printf("The factorial of %d: %d",num,fact);
	return 0;
}
