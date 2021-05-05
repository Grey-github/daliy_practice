# include <iostream>
# include <windows.h>
# include <conio.h>
# include <time.h>
# include <stdlib.h>
# include <iomanip>
using namespace std;

void SetPos(COORD a)//将光标移动到指定位置 
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, a);
}
void SetPos(int i, int j)// set cursor
{
	COORD pos = { i, j };
	SetPos(pos);
}
void HideCursor()//隐藏光标
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void DrawplanetoNull(COORD* position, int len)//将之前自己的飞机消除，从而可以在另一位置画新的飞机
{
	for (int i = 0; i < len; i++)
	{
		SetPos(position[i]);
		cout << " ";
	}
}
void Drawplane(COORD* position, int len)//画自己的飞机
{
	int i;
	for (i = 0; i < len; i++)
	{
		SetPos(position[i]);
		if (i == 0)
		{
			cout << "|";
		}
		else if (i == 1)
		{
			cout << "<";
		}
		else if (i == 2 || i == 3 || i == 4 || i == 6 || i == 7)
		{
			cout << "O";
		}
		else if (i == 5)
		{
			cout << ">";
		}

	}
	/*for (int i = 0; i < len; i++)
	{
		SetPos(position[i]);
		cout << "^";
	}*/
}
void Planemove(COORD* position, int len)//实现自己的飞机X轴坐标的移动 
{
	for (int i = 0; i < len; i++)
	{
		DrawplanetoNull(position, len);
		position[i].X -= 1;
		Drawplane(position, len);
	}

}

void Drawenemy(COORD* position)
{
	for (int i = 0; i < 5; i++)  //随机生成五架敌机
	{
		int flag = 1;
		if (position[i].Y >= 37)
		{
			while (flag == 1)
			{
				flag = 0;
				position[i].Y = rand() % 8 + 3;
				position[i].X = rand() % 45 + 4 + i;//随机取五架敌机生成的位置
				for (int j = 0; j < 3; j++)//确保每辆架敌机之间不会重叠
				{
					if (j != i)
						if (abs(position[i].X - position[j].X) <= 3)
							flag = 1;
				}
			}

		}
		COORD a = { position[i].X,position[i].Y };
		int x = a.X; int y = a.Y;
		COORD anotherposition[8] = { {x,y},{x,y - 1},{x - 1,y - 1},{x + 1,y - 1},{x - 1,y - 2},{x + 1,y - 2},{x - 2,y - 2},{x + 2,y - 2} };
		for (int i = 0; i < 8; i++)//生成敌机
		{
			SetPos(anotherposition[i]);
			cout << "v";
		}
	}
}
void DrawenemyToNull(COORD* position)
{
	for (int i = 0; i < 5; i++)
	{
		COORD a = { position[i].X,position[i].Y };
		int x = a.X; int y = a.Y;
		COORD anotherposition[8] = { {x,y},{x,y - 1},{x - 1,y - 1},{x + 1,y - 1},{x - 1,y - 2},{x + 1,y - 2},{x - 2,y - 2},{x + 2,y - 2} };//把position的坐标赋给anotherposition
		for (int i = 0; i < 8; i++)//摧毁敌机
		{
			SetPos(anotherposition[i]);
			cout << " ";
		}
	}
}
void Enemymove(COORD* position)
{
	DrawenemyToNull(position);
	for (int i = 0; i < 5; i++)//通过不断让敌机机头纵坐标下降改变位置
		position[i].Y += 3;
	Drawenemy(position);

}
void Drawwall()//生成墙
{
	for (int i = 0; i < 38; i++)
		cout << "□" << setw(56) << "□" << endl;
	for (int j = 0; j < 29; j++)
		cout << "□";
	cout << endl;
}
bool GameOver(COORD* position, COORD* enemyposition)
{
	for (int k = 0; k < 5; k++)//敌人个数的循环
		for (int i = 0; i < 4; i++)//飞机构成点数的循环
			for (int j = 0; j < 8; j++)//敌人可能组成位置8个点的判断
			{
				COORD a = { enemyposition[k].X,enemyposition[k].Y };
				int x = a.X; int y = a.Y;
				COORD anotherposition[8] = { {x,y},{x,y - 1},{x - 1,y - 1},{x + 1,y - 1},{x - 1,y - 2},{x + 1,y - 2},{x - 2,y - 2},{x + 2,y - 2} };
				if (position[i].X == anotherposition[j].X && position[i].Y == anotherposition[j].Y)
					return false;
			}
	return true;
}
void Shoot(COORD*bullet, COORD*position)
{
    for(int i=0; i<10; i++)
    {
		    if(bullet[i].Y == 40)
        {
            bullet[i].X = position[0].X;
            bullet[i].Y = position[0].Y-1;
            break;
        }
	}
}
void drawBulletToNull(COORD * bullet)
{
    for(int i=0; i<10; i++)
    {
	    if( bullet[i].Y != 40 )
        {
            COORD pos={bullet[i].X, bullet[i].Y+1};
            SetPos(pos);
            cout<<" ";
        } 
	}
}
void drawThisBulletToNull( COORD c)
{
    SetPos(c);
    cout<<" ";
}
void bulletMove(COORD *bullet)
{
    for(int i=0; i<10; i++)
    {
        if( bullet[i].Y != 40)
        {
            bullet[i].Y -= 1;
            if( bullet[i].Y == 1 )
            {
                COORD pos={bullet[i].X, bullet[i].Y+1};
                drawThisBulletToNull( pos );
                bullet[i].Y=40;
            }
                 
        }
    }
}
void drawBullet(COORD * bullet)
{
    for(int i=0; i<10; i++)
    {
        if( bullet[i].Y != 40)
        {
            SetPos(bullet[i]);
            cout<<"^";   
        }
    }
}

int main()
{
	L1: int a, level, counter, u, Ifreturn;
	system("mode con cols=60 lines=40");
	system("color 8E");
	srand(time(0));//让rand()随时间随机
	for (int p = 1; p < 16; p++) cout << endl;
	cout << "        ----------w s a d 控制战机移动 -------------" << endl;
	cout << '\t' << '\t' << "*****************************" << endl;
	cout << '\t' << '\t' << "|      您是否要开始游戏     |" << endl;
	cout << '\t' << '\t' << "|  选项： 1 开始游戏        |" << endl;
	cout << '\t' << '\t' << "|         2 退出            |" << endl;
	cout << '\t' << '\t' << "|       请输入您的选项      |" << endl;
	cout << '\t' << '\t' << "*****************************" << endl;

	cin >> a;
	if (a == 1)
	{
		cout << "请输入难度（1=简单，2=一般，3=困难，4=地狱)：";
		cin >> level;
		counter = 5 - level, u = counter + 1;
	}
	else if (a == 2)
		return 0;
	cout << "游戏即将开始，请做好准备";
	Sleep(3000);
	system("cls");

	HideCursor();
	Drawwall();
	
	COORD bullet[8];
	for(int i=0; i<8; i++)
        bullet[i].Y = 40;
        
	COORD center = { 39, 20 };//定义飞机头的位置 
	COORD* position = new COORD[8];
	position[0].X = center.X;
	position[0].Y = center.Y;
	position[1].X = center.X - 2;
	position[1].Y = center.Y + 1;
	position[2].X = center.X - 1;
	position[2].Y = center.Y + 1;
	position[3].X = center.X;
	position[3].Y = center.Y + 1;
	position[4].X = center.X + 1;
	position[4].Y = center.Y + 1;
	position[5].X = center.X + 2;
	position[5].Y = center.Y + 1;
	position[6].X = center.X - 1;
	position[6].Y = center.Y + 2;
	position[7].X = center.X + 1;
	position[7].Y = center.Y + 2; //将整个飞机坐标初始化 
	int len = 8;
	COORD enemyposition[5];//五个敌机 敌机坐标
	enemyposition[0].X = 5; enemyposition[0].Y = 5;//5个敌机初始化
	enemyposition[1].X = 18; enemyposition[1].Y = 7;
	enemyposition[2].X = 11; enemyposition[2].Y = 9;
	enemyposition[3].X = 23; enemyposition[3].Y = 11;
	enemyposition[4].X = 45; enemyposition[4].Y = 5;
	char input;
	Drawplane(position, len);
	while (GameOver(position, enemyposition))//将飞机的移动和敌机的移动放进同一循环，以达到同时移动的目的
	{
		if (_kbhit())
		{
			Sleep(8);
			input = _getch();
			switch (input)
			{
			case 'A':
			case 'a':
				for (int i = 0; i < len; i++)
				{
					DrawplanetoNull(position, len);
					position[i].X -= 3;
					Drawplane(position, len);
				}
				break;
			case 'D':
			case 'd':
				for (int i = 0; i < len; i++)
				{
					DrawplanetoNull(position, len);
					position[i].X += 3;
					Drawplane(position, len);
				}
				break;
			case 'W':
			case 'w':
				for (int i = 0; i < len; i++)
				{
					DrawplanetoNull(position, len);
					position[i].Y -= 1;
					Drawplane(position, len);
				}
				break;
			case 'S':
			case 's':
				for (int i = 0; i < len; i++)
				{
					DrawplanetoNull(position, len);
					position[i].Y += 1;
					Drawplane(position, len);
				}
				break;
			case 'k':
			case 'K':
				Shoot(bullet, position);
				break;
			}
			int flag_bullet=0;
			if( 0 == flag_bullet )
        	{
			bulletMove(bullet);
			drawBulletToNull(bullet);
    		drawBullet(bullet);
    		}
    		flag_bullet++;
        	if( 5 == flag_bullet )
            flag_bullet = 0;
            			
		}
		if (counter % 6 == 0)//这里通过每循环6次敌机才移动一次，保证在自己飞机移动速度不受影响、不卡顿的同时使敌机速度减慢
			Enemymove(enemyposition);
		Sleep(20);
		counter++;
	}
	delete[]position;
	position = NULL;
	system("cls");
	cout << "游戏结束，是否选择再来一次？(1是0否）" << endl;
	cin >> Ifreturn;
	if (Ifreturn) goto L1;
	else cout << "Good Game";
	system("pause");
}

