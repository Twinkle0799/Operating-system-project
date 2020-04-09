#include<stdio.h>
int main()
{
	int i, type[20],n;
	int responsetime[20];
	printf("Number of process: ");
	scanf("%d",&n);
	printf("Enter the response time for various processes:\n");
	for(i=0;i<n;i++)
	{
		printf("Response time of P%d (in milliseconds): ",i);
		scanf("%d",&responsetime[i]);
		if(responsetime[i]<1000)
		{
			type[i]=1;
		}
		else
		{
			type[i]=0;
		}
	}
	printf("Process Number\tResponse Time\tType\t\tPriority");
	printf("\n=========================================================");
	for(i=0;i<n;i++)
	{
		printf("\nP%d\t\t%dms\t\t",i,responsetime[i]);
		if(type[i]==1)
		{
			printf("Interactive\tHigh");
		}
		else
		{
			printf("Non-Interactive\tLow");
		}
	}
	printf("\n=========================================================");
	printf("\n************************Program Ends***********************\n");
	printf("************************Made By:Twinkle Gupta**************\n");
	printf("************************Roll no:07*************************\n");
	printf("************************Section:K18GT**********************\n");
}
