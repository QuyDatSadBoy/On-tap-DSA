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
int n=5,k=3;
int a[1001];

void in(){
  for(int i =1;i<=k;i++){
    cout<<a[i];
  }
  cout<<endl;
}

void back_track(int i){
  for(int j=a[i-1]+1;j<=n-k+i;j++){
    a[i]=j;
    if(i==k) in();
    else back_track(i+1);
  }
}

int main()
{
    faster();
    back_track(1);

    return 0;
}