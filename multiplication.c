#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter value N = ");
	scanf("%d",&n);
	
	printf("multiplication Table = \n");
	
	for(i=1 ; i<=10 ; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}