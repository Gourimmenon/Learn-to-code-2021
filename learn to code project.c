/* Gouri M Menon
   S2 D
   Learn to code project
   The program allows you to cast votes to a given set of candidates, count votes and declare the winner based on the recorded votes*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


#define a "Stacey"																					//define candidate name
#define b "Claudia"
int vote1=0,vote2=0,spoilt=0;															//initialise vote variable



void castvote ()																					//casting vote function
{
	int x;
	
	printf("\ncast your votes by pressing the number against the names\n");
	printf("1 %s\n2 %s\n3 NOTA\n",a,b);																	//display candidate list
	printf("Enter your response: ");
	scanf("%d",&x);
	
	switch(x)
	{
		case(1):
			vote1++;
			break;
		case(2):
			vote2++;
			break;
		default:
			spoilt++;
	
		
	}
	
	printf("\nYour vote has been recorded. Thank you!\n");
	
}

void countvote()																//display vote count of each candidate
{
	printf("\n%s:  %d\n",a,vote1);
	printf("%s:  %d\n",b,vote2);
	printf("Spoilt votes: %d",spoilt);

}

void winner()																	//declare winner based on recorded votes
{
	if (vote1>vote2)
	{
		printf("\nCongratulations %s. You've Won.\n",a);
	}
	else if (vote2>vote1)
	{
		printf("\nCongratulations %s. You've Won.\n",b);
	}
	else
	{
		printf("No winner detected!!");
	}
	
	

}





void main()																							//main function
{ 

	int n,i;
	
	printf("Welcome to the Election 2021");
	
	do
	{
	
	printf("\n\n1. Cast your vote\n2. Count vote\n3. Declare winner\n0. Exit\n");						//display menu
	printf("\nChoose your option: ");
	scanf("%d",&n);
	
	
		
	switch(n)																							//decide which function to perform
	{
		case(1): 
			castvote();
			break;
		case(2):
			countvote();
			break;
		case(3):
			winner();
			break;
		case(0):																					
			printf("\nThank you!\n");
			break;
		default:
			printf("\nInvalid response\n");
			break;
	}
	
	
	
	}while (n!=0);																						//exit program when input value=0
	
	

}
