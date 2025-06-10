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
int n=3,ok=1;
int a[1001];
void init(){
    for(int i = 1;i<=n;i++) a[i]=0;
}
void sinh(){
    int i = n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else a[i]=1;
}
int main()
{
    faster();
    init();
    while(ok){
        for(int i=1;i<=n;i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh();
    }
        

    return 0;
}