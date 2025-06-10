#include <bits/stdc++.h>
#define ll long long 
const ll mod = (ll)(1e9+7);

using namespace std;

int nto1(ll n){
  for(int i = 2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return n>1;
}

bool prime[1000001];
void sieve(){
  for(int i = 0;i<=1000000;i++){
    prime[i] = 1;
  }
  prime[0]=prime[1]=0;
  
  for(int i=2;i<=sqrt(1000000);i++){
    if(prime[i]){
      for(int j = i*i;j<=1000000;j+=i){
        prime[j]=0;
      }
    }
  }
}

ll c[101][101];
void tohop(){
  for(int i = 0;i<=100;i++){
    for(int j = 0;j<=i;j++){
      if(j==0 || j==i) c[i][j]=1;
      else c[i][j] = c[i-1][j] + c[i-1][j-1];
    }
  }
}

int gcd(ll a,ll b){
  if(b==0) return a;
  return gcd(b,a%b);
}

int bac(ll n,ll p){
  int res = 0;
  for(int i = p;i<=n;i++){
    int tam = i;
    while(tam%p==0){
      res++;
      tam/=p;
    }
  }
  return res;
}

int legendre(int n,int p){
  int res = 0;
  for(int i=p;i<=n;i*=p){
    res += n/i;
  }
  return res;
}

ll pow_mod(ll a,ll b){
  ll res = 1;
  while(b){
    if(b&1){
      res *=a;
    }
    a*=a;
    b/=2;
  }
  return res;
}

ll pow_mod_2(ll a,ll b){
  if(b==0) return 1;
  ll tam = pow_mod_2(a,b/2);
  if(b&1) return tam*tam*a;
  else return tam*tam;  
}

ll pow_mod_last(ll a,ll b){
  if(b==1) return a;
  ll res = pow_mod_last(a,b/2)%mod;
  res = (res*res)%mod;
  if(b&1) res = (res*a)%mod;
  return res%mod;
}

ll prime2[1000001];
void sieve2(){
  for(int i = 0;i<=1000000;i++) prime[i]=i;
  for(int i = 2;i<=sqrt(1000000);i++){
    if(prime2[i]==i){
      for(int j = i*i;j<=1000000;j+=i){
        if(prime[j]==j) prime[j]=i;
      }
    }
  }
}

int main(){
  sieve();
  tohop();
  cout<<pow_mod(2,10)<<endl;
  cout<<pow_mod_2(2,10)<<endl;
  cout<<pow_mod_last(2,10)<<endl;


  return 0;
}

