#include <iostream>
#include <conio.h>
using namespace std;

// abstraction
class mobileUser
{
public:
    void call()
    {
        cout << "hello !" << endl;
    }
    // pure virtual method
    virtual void sendMessage() = 0;
};

class Rahim : public mobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi this is Rahim" << endl;
    }
};

class karim : public mobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi this is karim" << endl;
    }
};

int main()
{

    getch();
}