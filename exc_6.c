#include <stdio.h>
#include <stdlib.h>


void main(void)

{
	int i,j,k;
	char *tem;
	char *name[5] = {"follow","basic","great","happy","computer"};

	for(i = 0;i < 5-1;i++)
	{
		k = i;
		for(j= i+1; j <5;j++)
		{
			if(strcmp(name[k],name[j]) > 0)
				k = j;
		}	
		if(k != i)
		{
			tem = name[i];
			name[i] = name[k];
			name[k] = tem;
		}
	}

	for(i = 0;i < 5;i++)
		puts(name[i]);
	exit(0);      

	
} 
