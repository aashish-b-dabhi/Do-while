#include <stdio.h>

main()
{
    int i,n,sum=0;

    printf("Enter Value N = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    	printf("Sum of 1 to N = %d",sum);

}