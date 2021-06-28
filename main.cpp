#include <bits/stdc++.h>

using namespace std;


int main()
{
   unsigned int arr[5];

  for (int i = 0; i < 5; i++)
  {
     cin >> arr[i];
  }

  sort(arr, arr + 5);

    unsigned int min = 0;
  for (int i = 0; i < 4; i++)
  {
      min += arr[i];
  }

  unsigned int max = 0;
  for (int i = 4; i > 0; i--)
  {
      max += arr[i];
  }
  

  cout << min << " " << max << endl;
  
}