#include <bits/stdc++.h>

using namespace std;


int main()
{
  int n;
  cin >> n;

  unsigned int arr[n];
  for (int i = 0; i < n; i++)
  {
      cin >> arr[i];
  }
  
  sort(arr, arr + n);

  unsigned int max = arr[n - 1];
  int count = 0;
  for (int i = 0; i < n; i++)
  {
      if (arr[i] == max)
      {
          count++;
      }
      
  }
  
  cout << count << endl;
}