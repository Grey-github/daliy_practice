#include <stdio.h>
#include <conio.h>
#include <windows.h>

void startup(void);
void show(void);
void updateWithoutInput(void);
void updateWithInput(void);

//函数外定义的全局变量
int position_x, position_y;//飞机的位置
int bullet_x, bullet_y;//子弹位置 
int higth, width;//游戏画面尺寸 
int enemy_x, enemy_y;//敌机坐标 
int score;//得分 

int main()
{
	system("mode con cols=40 lines=30"); 
	startup();//游戏执行
	while(1)
	{
		show();
		updateWithoutInput();
		updateWithInput();
	} 
	return 0;
} 
void startup(void)//数据初始化 
{
	higth = 10;
	width = 40;
	
	position_y = higth/2;
	position_x = width/2;
	
	bullet_x = position_x; 
	bullet_y = -1;
	
	enemy_x = width/2;
	enemy_y = 0; 
	
	score = 0; 
}

void show(void)//显示画面 
{
	COORD pos = {0, 0};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
	
	int i,j;
	
	for (i=0; i<higth; i++)
	{
		for (j=0; j<width; j++)
		{
			if ((position_y==i)&&(position_x==j))
				printf("*");//在飞机坐标输出飞机 
			else if ((bullet_y==i)&&(bullet_x==j))
				printf("|");//在子弹坐标输出子弹 
			else if ((enemy_y==i)&&(enemy_x==j))
				printf("￥");//在敌机位置输出敌机 
			else
				printf(" ");//在指定坐标外输出空格调整光标 
		}
		printf("\n");//每输出一行空格后换行 
	}
	printf("得分：%d\n",score);
}

void updateWithoutInput(void)//与用户输入无关的更新 
{
	static sleep = 0;//用于控制飞机下落速度 
	if (sleep % 5 != 0)
		sleep++; 
	else if (sleep % 5 == 0)
	{
		enemy_y++;
		sleep++;
	}
	
	if (enemy_y > higth)
	{
		enemy_y = 0; 
		enemy_x = rand() % width;//余数一定不大于或等于除数:
	}

	if (bullet_y > -1)
		bullet_y--;
	
	if((enemy_x==bullet_x) && (enemy_y==bullet_y))
	{
		score++;
		enemy_y = -1;
		bullet_y = -1;
		enemy_x = rand() % width;
	}
	
}

void updateWithInput(void)//与用户输入有关的更新 
{
	char input;
	if (kbhit())//当按下时执行，通常与getch结合使用，都定义在conio.h里 
	{
		input = getch();
		
		if ((input=='A') || (input=='a'))
			position_x--;
	 	if ((input=='D') || (input=='d'))
			position_x++;
		if ((input=='W') || (input=='w'))
			position_y--;
		if ((input=='S') || (input=='s'))
			position_y++;
		if ((input == ' '))
		{
			bullet_y = position_y - 1;
			bullet_x = position_x;
		} 
	}
	
}


