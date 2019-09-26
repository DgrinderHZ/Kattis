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

int INF = numeric_limits<int>::max() - 9;

int main ()
{
  #ifndef ONLINE_JUDGE
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
  #endif
  int n;
  while(1){
    cin >> n;
    if (n == 0) break;
    string s(to_string(n));
    int sum1 = 0;
    for(auto c: s) sum1 += (c-'0');

    for(int m = 11; m <= 100000; m++){
        string ss(to_string(m*n));
        int sum2 = 0;
        for(auto c: ss) sum2 += (c-'0');
        if(sum1 == sum2) {
            cout<<m<<endl; break;
        }
    }
  }
  return 0;
}
