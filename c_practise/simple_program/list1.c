#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//#include <cs50.h>
//这个程序仍存在问题，即CTRL+D并不能结束输入,程序为CS50源代码，由于没有CS50库，所以无法正常运行
int main()
{
	int *numbers = malloc(sizeof(int) * 50);
	int capacity = 0;
	int size = 0;
	int i;
	if (numbers == NULL)
	{
		exit(-1);
	}
	
	while(1)
	{
		int number;
		printf("Number: ");
		scanf("%i", &number);
		
		if (number == INT_MAX)
		{
			break;
		}
		if (size == capacity)//if there is not enough space, alloate more
		{
			int *tmp = realloc(numbers, sizeof(int)  *(size + 1));
			if (tmp == NULL)
			{
				return 0;			
			}
			capacity++;
		}
		
		numbers[size] = number;
		size++;
	}
	
	for (i = 0; i < size; i++)
	{
		printf("You inputted %i\n", numbers[i]);
	}
	
	free(numbers);
}
