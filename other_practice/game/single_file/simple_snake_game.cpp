#include <stdlib.h>
#include <curses.h>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection
{
    STOP = 0, LEFT, RIGHT, UP, DOWN
};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw()
{
    initscr();
    clear();
    for (int i = 0; i < width+2; i++)
        addch('#');
    addch('\n');

    for (int i = 0; i < height; i++)    
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                addch('#');

            if (j == x && i == y)
                addch('0');
            else if (j == fruitX && i == fruitY)
                addch('F');
            else
                addch(' '); 

            if (j == width - 1)
                addch('#');
            // string bound = (j == 0 || j == width - 1) ? "#" : " ";
            //string snake = (j == x && i == y) ? "0" :"";
            //string fruit = (j == fruitX && i == fruitY) ? "F" : "";
            
            //cout << bound;
            //cout << snake;
            //cout << fruit;
        }
        addch('\n');
    }
    for (int i = 0; i < width+2; i++)
        addch('#');
    addch('\n');
    refresh();
}

void Input()
{
    cbreak();
    noecho();
    scrollok(stdscr, TRUE);
    nodelay(stdscr, TRUE);

    switch(getch())
    {
    case 'a':
        dir = LEFT;
        break;
    case 'd':
        dir = RIGHT; 
        break;
    case 'w':
        dir = UP;
        break;
    case 'S':
        dir = DOWN;
        break;
    case 'x':
        gameOver = true;
        break;
    }
    nocbreak();
}

void Logic()
{
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        break;
        y++;
    default:
        break;
    }
}

int  main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();

    }
}