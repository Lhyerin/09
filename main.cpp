#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int grade[5];
	grade[0]=90;
	grade[1]=80;
	grade[2]=70;
	grade[3]=60;
	grade[4]=50;
	
	for(int i=0;i<5;i++)
	   printf("grade[%i]=%i\n",i,grade[i]);
	return 0;
}
