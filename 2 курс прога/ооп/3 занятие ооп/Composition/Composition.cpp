#include <iostream>
using namespace std;

class Engine
{
    int i;
public:
    void start() { cout << "Engine's start\n";}
};

class Body
{
    int j;
public:
    void close_door() { cout << "Door's manipulation\n"; }
};

class Auto 
{
    Engine e;
    Body b;
public:
    void close_door()
    {
        b.close_door();
    }
    void start_auto()
    {
        e.start();
        close_door();
        cout << "Tu-tu\n";
    }
};
int main()
{
    Auto Mesredes;
    Mesredes.start_auto();
}

