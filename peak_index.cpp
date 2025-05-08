#include<bits/stdc++.h>
using namespace std;
void solve (){
  int n;
  cin >> n;
  vector<int>v(n);
  for (int i = 0; i < n;i++)
  {
    cin >> v[i];
  }
  // int max = max_element(v.begin(), v.end()) - v.begin();
   while(v[v.size()-1]<v[v.size()-2]){
     v.pop_back();
   }
   cout << v.size() - 1 << endl;
   // cout << v[max] << endl;
}
int main ()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}