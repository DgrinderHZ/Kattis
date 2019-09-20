#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)
#define sfi1(v) scanf("%d",&v)
#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
#define sfstr(v) scanf("%s", v);
#define sz(v) (int)v.size()
#define ndl puts("")
#define SS stringstream
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < (b); i++)
#define prec setprecision(n)
#define endl '\n'

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;


int main() {
     #ifndef ONLINE_JUDGE
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
      #endif
  
    /* vll fact(1000009);
    fact[0] = 1;
    for(ll i=1; i<=1000005L; i++ ) fact[i] = i*fact[i-1];
    
    int q;
    while(cin>>q){
        cout<<floor(log10(fact[q])+1)<<endl;
    }*/
    
    vector<double> digits(1000009);
    digits[0] = 0;
    for(int i=1; i<=1000000; i++ ) digits[i] = log10(i) + digits[i-1];
    
    int q;
    while(cin>>q){
        cout<<(int)digits[q]+1<<endl;
    }
}
