#include <stdio.h>//importing sandard input and output package to read data.
void main()//creating main method for the program
{//opening of main func block
	int i,m,k,j,n;//inputing necessary elements
	printf("Enter a no. for pyramid: %d",&n);//input the number for program

	//code for givn task
	for(i=0;i<=n;i++)
	{//opening of for loop
		
		//code to print front end space
		for( m=0;m<=n-i;m++)
		{//opening of m loop
			printf("  ");
		}//closing of m loop
	
		//code to print numbers after spaces
		for(j=i;j>=0;j--)
		{//opening of j loop
			printf(" %d",j);
		}//closing of j loop
		
		//code to print second half of pyramid to right.
		for(k=1;k<=i;k++)
		{//opening of k loop
			printf(" %d",k);
		}//closing of k loop
		printf("\n");
		
	}//closing of main for loop
}//close of main func block
