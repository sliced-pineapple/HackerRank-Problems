#include <iostream>

using namespace std;


int main()
{
    int n; cin >> n;

    int arr[n][n];

    int lf = 0;
    int rf = 0;

    int li = 0, rj = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];

            if (i == j)
            {
                lf += arr[i][j];
            }

            if (i == li && j == rj)
            {
                rf += arr[i][j];
            }
            
            
        }

        li++;
        rj --;
        
    }

    cout << abs(lf- rf) << endl;
    
}