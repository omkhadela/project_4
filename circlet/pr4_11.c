#include<stdio.h>

main()

{
	int i,j,s,space=4;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=space;s++)
		{
			printf("  ");
	    }
		space--;
		    for(j=1;j<=i;j++)
		        {
		        	printf("%d ",j);
				}
		        printf("\n");
	}
		
}
