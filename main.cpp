// 出典 https://github.com/kokonokaNO/kyopro_template
#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#define CERR(x) cerr<<RED<<x<<RESET
#define COUT(x) cout<<GREEN<<x<<RESET
#else
#define CERR(x) ;
#define COUT(x) cout<<x
#endif

#define YES cout<<"Yes"<<endl;
#define NO cout<<"No"<<endl;
#define YN {YES}else{NO};

using ll=long long;
using pll=pair<ll, ll>;

#define rep(i,n)for(ll i=0;i<n;i++)

ll INF=2e18;

template<class T> using PQ=priority_queue<T, vector<T>>;
template<class T> using PQ_G = priority_queue<T, vector<T>, greater<T>>;

template<typename T> using v1=vector<T>;
template<typename T> using v2=v1<v1<T>>;
template<class T>istream& operator>>(istream& i, v1<T>& v){rep(j, size(v))i>>v[j];return i;}

#define sum(a) accumulate(a.begin(), a.end(), 0LL)

int dx[]={1, 0, -1, 0};
int dy[]={0, 1, 0, -1};

bool isInRange(ll l, ll x, ll r){
    return l<=x && x<r;
}

#define sort_l(a) sort((a).begin(), (a).end());
#define sort_g(a) sort((a).begin(), (a).end(), greater<>());

int main(void){
    return 0;
}