// Sort a vector using the sort algorithm .
#include <iostream >
#include <vector >
#include <cstdlib >
#include <algorithm >
using namespace std;

int main()
{
    vector<char> v;
    int i;
    // create a vector of random characters
    for (i = 0; i < 10; i++)
        v.push_back('A' + (rand() % 26));
    cout << " Original contents : ";

    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n\n" ;
    // sort the vector
    sort(v.begin(), v.end());
    cout << " Sorted contents : ";

    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
