/*
University Amerike
Author: Sebastian Arias
Practice: 22
Date: 11/04/25
Description: Create a programm that has a class that represent the player atributes,
dont ask the user his data.
*/

#include <iostream>
#include <string>

using namespace std;

class Player
{
    private:
    string name;
    int pointLife;
    int strength;

    public:
        void setName(string player1)
        {
            player1 = name;
        }
        string getName()
        {
            return name;
        }  

        void setLife(int life)
        {
            pointLife = life;
        }
        int getLife()
        {
            return pointLife;
        }

        void setStrength(int force)
        {
            strength = force;
        }

        int strength()
        {
            return strength;
        }

        void modifyPointsLife(int amount)
        {
            pointLife += amount;
        }
    
        void modifyStrength(int amount)
        {
            strength += amount;
        }
};

int main()
{
    Player player1;
    player1.setName("knight");
    player1.setLife(100);
    player1.setStrength(65);

    show


}