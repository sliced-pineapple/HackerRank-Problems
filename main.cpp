#include <iostream>

using namespace std;


int main()
{
    int a;
    cin >> a;

    float p = 0, n = 0, z = 0;
    for (int i = 0; i < a; i++)
    {
        int temp; cin >> temp;

        if (temp > 0)
        {
            p++;
        }
        else if (temp == 0)
        {
            z++;
        }
        else
        {
            n++;
        }
    }

    printf("%.6f\n%.6f\n%.6f", (p / a), (n / a), (z / a));
    
}