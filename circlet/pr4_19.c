#include<stdio.h>

main()

{
	int i,s,j;
	for(i=5;i>=2;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(s=1;s<=5-i;s++)
		{
			printf("  ");
		}
		for(s=4;s>=i;s--)
		{
		printf("  ");
	    }
	    for(j=i;j>=1;j--)
	    {
	    	printf("%d ",j);
		}
		printf("\n");
	}

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(s=1;s<=5-i;s++)
		{
			printf("  ");
		}
		for(s=4;s>=i;s--)
		{
		printf("  ");
	    }
	    for(j=i;j>=1;j--)
	    {
	    	printf("%d ",j);
		}
		printf("\n");
	}
}
