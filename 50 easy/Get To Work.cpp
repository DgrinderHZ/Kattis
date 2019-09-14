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
#define loop(i,a,b) for (int i = a; i < b; i++)
#define prec setprecision(n)

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void solve();

typedef struct{
    int s;
    vi cap;
}Town;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  
  int cases = 1;
    cin >> cases;
    int i = 1;
    while(cases--) {
        cout<<"Case #"<<i++<<": ";
        solve();
    }
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}

void solve() {
    int n, t, e;
    cin>>n >>t >>e;
    
    vector<Town> arr(n);
    
    int imposs = 0;
    
    while(e--){
        int i,j;
        cin>> i>>j;
        arr[i-1].cap.pb(j); // add capacity
        (arr[i-1].s)++; // add employer
    }
    
    vi ans(n);
    
    // solving part
    for(int i = 0; i<arr.size(); i++){
        
        if( i == t-1){
        	continue;
        }else{
            sort(all(arr[i].cap));
        
            while(arr[i].s > 0){
                if(arr[i].cap.back() == 0){
                	imposs = 1;
                    break;
                }else{
                	
                    ans[i] += 1;
                    arr[i].s -= arr[i].cap.back();
                    for(int j = 0; j<arr[i].cap.back()-1 && arr[i].cap.size()>0 ; j++)
                    	arr[i].cap.erase(arr[i].cap.begin());
                    arr[i].cap.erase(arr[i].cap.end()-1);
                    
                }
            }
        }
    }
    
    if(imposs)
        cout<<"IMPOSSIBLE";
    else{
        
        for(auto i: ans) cout<<i<<" ";
    }
    
    cout<<endl;
    
}
