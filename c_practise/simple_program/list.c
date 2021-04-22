#include <stdio.h>

int main()
{
	int capacity;   
	do
	{
		printf("Capacity: ");
		scanf("%i", &capacity);
	}while(capacity<1);
	
	int numbers[capacity];
	int i; 
	int size = 0;
	while(size < capacity)
	{
		int number;
		printf("Number: ");
		scanf("%i", &number);
		numbers[size] = number;
		size++;
	}	  
	for(i = 0; i < size; i++)
	{
		printf("You inputted %i\n", numbers[i]);
	}
}
