#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
typedef struct node
{
	int number;
	struct node *next; 
}node;

int main()
{
	int i;
	node *numbers = NULL;//头结点
	node *ptr = NULL;
	while (1)
	{
		int number;
		printf("number: ");
		scanf("%i", &number); 
		
		//问题所在，EOF还不太懂，ctrl+d实现 
		if (number == INT_MAX)
		{
			break;
		}
		
		node *n = malloc(sizeof(node));
		if (!n)
		{
			return 1;
		} //检查是否分配成功，分配失败就退出
		
		if (numbers)
		{
			for (ptr = numbers; ptr != NULL; ptr = ptr->next)
			{
				if (ptr->next == NULL)
				{
					ptr->next = n;
					break;
				}
			}
		} 
		else 
		{
			numbers = n;
		}
	} 
	
	for (ptr = numbers; ptr != NULL; ptr = ptr->next)
	{
		free(ptr->next);
		if (ptr->next == NULL)
		{
			free(numbers);
		}
	}
	
	return 0;
}
