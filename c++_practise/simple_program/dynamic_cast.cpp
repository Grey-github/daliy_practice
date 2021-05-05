#include <iostream>
#include <string>

class Entity
{
public:
    virtual void PrintName() {}
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};

int main()
{
    Player* player = new Player();
    Entity* actuallyEnemy = new Enemy();

    // can compile, but this is very dangrous, and may crash while running
    // Player* player2 = (Player *)actuallyEnemy;
    Entity* actuallyPlayer = player;

    Player* p0 = dynamic_cast<Player*>(actuallyEnemy);
    
    std::cout << p0 << std::endl;

    Player* p1 = dynamic_cast<Player*>(actuallyPlayer);

    std::cout << p1 << std::endl;

    return 0;
}