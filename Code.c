#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Declaring similiarity searching functions
int search100(int matrix[][50], int sequence[10]);
int search90(int matrix[][50], int sequence[10]);
int search80(int matrix[][50], int sequence[10]);
int search70(int matrix[][50], int sequence[10]);
int search60(int matrix[][50], int sequence[10]);
int search50(int matrix[][50], int sequence[10]);
int search40(int matrix[][50], int sequence[10]);
int k = 0;

int main()
{
//This program will search for similarities to the DNA sequence: [2 2 3 1 4 1 3 4 1 2] in DNA sample.
//Creating random DNA sample
  int dna[50][50];
  int i, j;

  srand(time(NULL));
  for (i = 0; i < 50; i++)
    for (j = 0; j < 50; j++)
      dna[i][j] = (rand() % 4) + 1;
      
//Printing the DNA sample            
  for (i = 0; i < 50; i++)
  {
    for (j = 0; j < 50; j++)
      {
        printf("%d ", dna[i][j]);
      }
    printf("\n");
  }
  printf("\n");


//Defining the DNA sequence which will be searched in the DNA sample
	int sequence[10] = {2, 2, 3, 1, 4, 1, 3, 4, 1, 2};
	printf("Dna bases are mapped as:\tA:1\tG:2\tC:3\tT:4\n");
	printf("The DNA sequence is: G G C A T A C T A G\n");

//Printing the DNA sequence	
	printf("Searching for gene similarity to the DNA sequence: ");
	for (i = 0; i < 10; i++)
		printf("%d ", sequence[i]);
	printf("\n\n");

//Searching Loop From 100% to 40%		
	search100(dna, sequence);
	if (k == 0)
	{
		search90(dna, sequence);
		if (k == 0)
		{
			search80(dna, sequence);
			if (k == 0)
			{
				search70(dna, sequence);
				if (k == 0)
				{
					search60(dna, sequence);
					if (k == 0)
					{
						search50(dna, sequence);
						if (k == 0)
							search40(dna, sequence);
					}
				}
			}
		}
	}
		  
	system("pause");          
  return 0;
}

//Similarity Searching Function For 100% Similarity
int search100(int matrix[][50], int sequence[10])
{	
	int i, j;	
  int found[250][3];
	
 	for (i = 0; i < 50 ; i++)
 	{
 		for (j = 0; j < 41; j++)
 		{
	    if (matrix[i][j] == sequence[0] && matrix[i][j + 1] == sequence[1] &&
			matrix[i][j + 2] == sequence[2] && matrix[i][j + 3] == sequence[3] && 
			matrix[i][j + 4] == sequence[4] && matrix[i][j + 5] == sequence[5] &&
			matrix[i][j + 6] == sequence[6] && matrix[i][j + 7] == sequence[7] && 
			matrix[i][j + 8] == sequence[8] && matrix[i][j + 9] == sequence[9])
			{
				found[k][0] = j + 1;
				found[k][1] = j + 10;
				found[k][2] = i + 1;
				k++;
			}				
 		}
  }
  	printf("There are 100%c similarities in %d different places, ", '%', k);
		printf("Their places in the DNA sample are shown below:\n");
  	for(i = 0; i < k; i++)
  	{
  		printf("Similarities are found in row: %d -- between %d. and %d. elements.\n", found[i][2], found[i][0], found[i][1]);
  		if(i == k - 1)
			{
				printf("\nTherefore, The highest similarity rate is 100%c\n", '%');
				printf("\n");
				return 1;
			}
		}
  
  printf("There is no 100%c similarities in the DNA sample.\n\n", '%');
  return 0;
}

//Similarity Searching Function For 90% Similarity
int search90(int matrix[][50], int sequence[10])
{	
	int i, j;	
  int found[250][3];
	
 	for (i = 0; i < 50 ; i++)
 	{
 		for (j = 0; j < 42; j++)
 		{
	    if (matrix[i][j] == sequence[0] && matrix[i][j + 1] == sequence[1] &&
			matrix[i][j + 2] == sequence[2] && matrix[i][j + 3] == sequence[3] && 
			matrix[i][j + 4] == sequence[4] && matrix[i][j + 5] == sequence[5] &&
			matrix[i][j + 6] == sequence[6] && matrix[i][j + 7] == sequence[7] && 
			matrix[i][j + 8] == sequence[8])
			{
				found[k][0] = j + 1;
				found[k][1] = j + 9;
				found[k][2] = i + 1;
				k++;
			}				
 		}
  }
  	printf("There are 90%c similarities in %d different places, ", '%', k);
		printf("Their places in the DNA sample are shown below:\n");
  	for(i = 0; i < k; i++)
  	{
  		printf("Similarities are found in row: %d -- between %d. and %d. elements.\n", found[i][2], found[i][0], found[i][1]);
  		if(i == k - 1)
			{
				printf("\nTherefore, The highest similarity rate is 90%c\n", '%');
				printf("\n");
				return 1;
			}
		}
  
  printf("There is no 90%c similarities in the DNA sample.\n\n", '%');
  return 0;
}
//Similarity Searching Function For 80% Similarity
int search80(int matrix[][50], int sequence[10])
{	
	int i, j;	
  int found[250][3];
	
 	for (i = 0; i < 50 ; i++)
 	{
 		for (j = 0; j < 43; j++)
 		{
	    if (matrix[i][j] == sequence[0] && matrix[i][j + 1] == sequence[1] &&
			matrix[i][j + 2] == sequence[2] && matrix[i][j + 3] == sequence[3] && 
			matrix[i][j + 4] == sequence[4] && matrix[i][j + 5] == sequence[5] &&
			matrix[i][j + 6] == sequence[6] && matrix[i][j + 7] == sequence[7])
			{
				found[k][0] = j + 1;
				found[k][1] = j + 8;
				found[k][2] = i + 1;
				k++;
			}				
 		}
  }
  	printf("There are 80%c similarities in %d different places, ", '%', k);
		printf("Their places in the DNA sample are shown below:\n");
  	for(i = 0; i < k; i++)
  	{
  		printf("Similarities are found in row: %d -- between %d. and %d. elements.\n", found[i][2], found[i][0], found[i][1]);
  		if(i == k - 1)
			{
				printf("\nTherefore, The highest similarity rate is 80%c\n", '%');
				printf("\n");
				return 1;
			}
		}
  
  printf("There is no 80%c similarities in the DNA sample.\n\n", '%');
  return 0;
}
//Similarity Searching Function For 70% Similarity
int search70(int matrix[][50], int sequence[10])
{	
	int i, j;	
  int found[250][3];
	
 	for (i = 0; i < 50 ; i++)
 	{
 		for (j = 0; j < 44; j++)
 		{
	    if (matrix[i][j] == sequence[0] && matrix[i][j + 1] == sequence[1] &&
			matrix[i][j + 2] == sequence[2] && matrix[i][j + 3] == sequence[3] && 
			matrix[i][j + 4] == sequence[4] && matrix[i][j + 5] == sequence[5] &&
			matrix[i][j + 6] == sequence[6])
			{
				found[k][0] = j + 1;
				found[k][1] = j + 7;
				found[k][2] = i + 1;
				k++;
			}				
 		}
  }
  	printf("There are 70%c similarities in %d different places, ", '%', k);
		printf("Their places in the DNA sample are shown below:\n");
  	for(i = 0; i < k; i++)
  	{
  		printf("Similarities are found in row: %d -- between %d. and %d. elements.\n", found[i][2], found[i][0], found[i][1]);
  		if(i == k - 1)
			{
				printf("\nTherefore, The highest similarity rate is 70%c\n", '%');
				printf("\n");
				return 1;
			}
		}
  
  printf("There is no 70%c similarities in the DNA sample.\n\n", '%');
  return 0;
}
//Similarity Searching Function For 60% Similarity
int search60(int matrix[][50], int sequence[10])
{	
	int i, j;	
  int found[250][3];
	
 	for (i = 0; i < 50 ; i++)
 	{
 		for (j = 0; j < 45; j++)
 		{
	    if (matrix[i][j] == sequence[0] && matrix[i][j + 1] == sequence[1] &&
			matrix[i][j + 2] == sequence[2] && matrix[i][j + 3] == sequence[3] && 
			matrix[i][j + 4] == sequence[4] && matrix[i][j + 5] == sequence[5])
			{
				found[k][0] = j + 1;
				found[k][1] = j + 6;
				found[k][2] = i + 1;
				k++;
			}				
 		}
  }
  	printf("There are 60%c similarities in %d different places, ", '%', k);
		printf("Their places in the DNA sample are shown below:\n");
  	for(i = 0; i < k; i++)
  	{
  		printf("Similarities are found in row: %d -- between %d. and %d. elements.\n", found[i][2], found[i][0], found[i][1]);
  		if(i == k - 1)
			{
				printf("\nTherefore, The highest similarity rate is 60%c\n", '%');
				printf("\n");
				return 1;
			}
		}
  
  printf("There is no 60%c similarities in the DNA sample.\n\n", '%');
  return 0;
}
//Similarity Searching Function For 50% Similarity
int search50(int matrix[][50], int sequence[10])
{	
	int i, j;	
  int found[250][3];
	
 	for (i = 0; i < 50 ; i++)
 	{
 		for (j = 0; j < 46; j++)
 		{
	    if (matrix[i][j] == sequence[0] && matrix[i][j + 1] == sequence[1] &&
			matrix[i][j + 2] == sequence[2] && matrix[i][j + 3] == sequence[3] && 
			matrix[i][j + 4] == sequence[4])
			{
				found[k][0] = j + 1;
				found[k][1] = j + 5;
				found[k][2] = i + 1;
				k++;
			}				
 		}
  }
  	printf("There are 50%c similarities in %d different places, ", '%', k);
		printf("Their places in the DNA sample are shown below:\n");
  	for(i = 0; i < k; i++)
  	{
  		printf("Similarities are found in row: %d -- between %d. and %d. elements.\n", found[i][2], found[i][0], found[i][1]);
			if(i == k - 1)
				{
					printf("\nTherefore, The highest similarity rate is 50%c\n", '%');
					printf("\n");
					return 1;
				}
		}
  
  printf("There is no 50%c similarities in the DNA sample.\n\n", '%');
  return 0;
}
//Similarity Searching Function For 40% Similarity
int search40(int matrix[][50], int sequence[10])
{	
	int i, j;	
  int found[250][3];
	
 	for (i = 0; i < 50 ; i++)
 	{
 		for (j = 0; j < 47; j++)
 		{
	    if (matrix[i][j] == sequence[0] && matrix[i][j + 1] == sequence[1] &&
			matrix[i][j + 2] == sequence[2] && matrix[i][j + 3] == sequence[3])
			{
				found[k][0] = j + 1;
				found[k][1] = j + 4;
				found[k][2] = i + 1;
				k++;
			}				
 		}
  }
  	printf("There are 40%c similarities in %d different places, ", '%', k);
		printf("Their places in the DNA sample are shown below:\n");
  	for(i = 0; i < k; i++)
  	{
  		printf("Similarities are found in row: %d -- between %d. and %d. elements.\n", found[i][2], found[i][0], found[i][1]);
			if(i == k - 1)
			{
				printf("\nTherefore, The highest similarity rate is 40%c\n", '%');
				printf("\n");
				return 1;
			}
		}
  
  printf("There is no 40%c similarities in the DNA sample.\n\n", '%');
  return 0;
}
