#include <bits/stdc++.h>

using namespace std;

int main()
{
  int s,t;
  cin >> s >> t;

  int a,b;
  cin >> a >> b;

  int m, n;
  cin >> m >> n;

  int ad[m];

  int ac = 0;
  for (int i = 0; i < m; i++)
  {
    cin >> ad[i];

    if((ad[i] + a) >= s && (ad[i] + a) <=t){
        ac++;
    }
  }

  int od[n];
  int oc = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> od[i];
    if((b + od[i]) >= s && (b + od[i]) <= t)
    {
      oc++;
    }
  }
  
  cout << ac << "\n" << oc << endl;
}