#include<bits/stdc++.h>
using namespace std;
void solve ()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i <n;i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  if (n==1)
  {
    cout << "true" << endl;
  }
  else
  {
    bool value = 1;
    int d = v[1] - v[0];
    for (int i = 1; i < v.size();i++)
    {
      if (v[i]-v[i-1]!=d)
      {
        value = 0;
        break;
      }
    }
    if (value)
    {
      cout << "true" << endl;
    }
    else
    {
      cout << "false" << endl;
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}