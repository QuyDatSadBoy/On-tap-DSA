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

int n=5,k=3,ok=1;
int a[1001];
void init(){
  for(int i = 1;i<=k;i++) a[i]=i;
}
void sinh(){
  int i = k;
  while(i>=1 && a[i]==n-k+i){
    i--;
  }
  if(i==0){
    ok=0;
    return;
  }
  a[i]++;
  for(int j = i+1;j<=k;j++) a[j]=a[j-1]+1;

}


int main()
{
    faster();
    init();
    while(ok){
      for(int i = 1;i<=k;i++){
        cout<<a[i];
      }
      cout<<endl;
      sinh();
    }
    

    return 0;
}