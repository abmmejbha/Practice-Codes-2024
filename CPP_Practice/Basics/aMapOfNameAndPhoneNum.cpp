// A map of names and phone numbers .
#include <iostream >
#include <map >
#include <cstring >
using namespace std;

//Class
class name
{
    char str[20];

public:
    name() { strcpy(str, ""); }
    name(char *s) { strcpy(str, s); }
    char *get() { return str; }
};
// must define less than relative to name objects
bool operator<(name a, name b)
{
    return strcmp(a.get(), b.get()) < 0;
}
//Class
class phonenum
{
    char str[20];

public:
    phonenum() { strcpy(str, ""); }
    phonenum(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

//main function
int main()
{
    map<name, phonenum> m;
    // put names and phone numbers into map
    m.insert(pair<name,
                  phonenum>(name("Joe "), phonenum(" 555 -4323 ")));
    m.insert(pair<name,
                  phonenum>(name("Tom "), phonenum(" 555 -9784 ")));
    m.insert(pair<name,
                  phonenum>(name(" Larry "), phonenum("212 555 -9372 ")));
    m.insert(pair<name,
                  phonenum>(name("Tod "), phonenum("01 11 232 -4232 ")));
    // given a name , find phone number
    char str[80];
    cout << " Enter name : ";
    cin >> str;
    map<name, phonenum>::iterator p;
    p = m.find(name(str));
    if (p != m.end())
        cout << " Phone Number : " << p->second.get();
    else
        cout << " Name not in map .\n";
    return 0;
}