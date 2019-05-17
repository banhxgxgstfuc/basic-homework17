#include <stdio.h>
#include<stdlib.h>
#define size 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int number[size];
int i;


int main() {
	int min=9999;
	
	for(i=0;i<size;i++)
		{
			printf("輸入第%d個數字:",i+1);
			scanf("%d",&number[i]);
		}

	for(i=0;i<size;i++)
		{
	
			if(number[i]<min)
			min=number[i];
		}
			
	printf("%d",min);
    
	
	return 0;
}
