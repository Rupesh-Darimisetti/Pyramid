#include <stdio.h>
void main()
{
	int i,m,k,j,n;
	int c=n+1;
	printf("Enter a no. for pyramid\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		for( m=0;m<=n-i;m++)
		{
		printf("  ");
		}
		for(j=i;j>=0;j--)
		{
			printf(" %d",j);
		}
		for(k=1;k<=i;k++)
		{
			printf(" %d",k);
		}
		printf("\n");
		
	}

}
