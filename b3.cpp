#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("Ofast")
const ll mod = (ll)1e9 + 7;
#define endl "\n"
#define all(v) v.begin(), v.end()
#define ms(a) memset(a, 0, sizeof(a))
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

bool cmp(int a,int b){
  return a<b;
}

int main()
{

  vector<int> v;
  v.push_back(2);
  v.push_back(5);
  v.push_back(1);
  v.push_back(-100);
  sort(v.begin(),v.end(),cmp);
  for(auto x : v){
    cout<<x<<endl;
  }
  

  return 0;
}