#include<stdio.h>

void main()
{
	  int k,spa,l;
	
		for(k=9; k>=1; k--)
	{
		for(spa=1; spa<=11-k; spa++)
		{
			printf(" ");
		}
		for(l=1; l<=2*k-1; l++)
		{
			printf("*");
		}
		printf("\n");
	}
		
}
