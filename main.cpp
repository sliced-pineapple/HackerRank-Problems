#include <iostream>

using namespace std;


int main()
{
    int a;
     cin >> a;

    long sum = 0;

    for (int i = 0; i < a; i++)
    {
        unsigned int temp; cin >> temp;
        sum += temp;
    }

    cout << sum << endl;
    
}