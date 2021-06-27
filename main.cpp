#include <iostream>

using namespace std;


int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    int k = 0, l = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            k++;
        }
        else if (a[i] == b[i])
        {
            
        }
        else{
            l++;
        }
    }

    cout << k << " " << l << endl;
    
}