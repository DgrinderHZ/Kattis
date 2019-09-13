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

//#define N 100000010

bool isvowel(char c){
    if( c == 'a' || c == 'o' || c == 'u'  || c == 'e' || c == 'i') return true;
     if( c == 'A' || c == 'O' || c == 'U'  || c == 'E' || c == 'I') return true;
     return false;
}


int main ()
{
    freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    /* Code here */
    int n;
    vi v;
    cin>>n;
    while( n--) {
          int a;
          cin>>a; v.pb(a);
    }
   sort(all(v));

   if( v.size() == 1) cout<< v[0];
   else if ( v.size() == 2 )  cout << v[0] << " " << v[1];
   else {
           int s = 0 , end = 0;
           vi ans;
           ans.pb(v[0]);
           
           loop(i, 1, v.size() ){
           	 
           	 if(v[i] == v[i-1]+1)
           	     ans.pb(v[i]);
             else{
             	
             	if (ans.size() > 2){
             		cout<<ans[0]<<"-"<<ans.back()<<" ";
             		ans.clear();
             		ans.pb(v[i]);
				 }
				else if(ans.size() == 2){
             		cout<<ans[0]<<" "<<ans[1]<<" ";
             		ans.clear();
             		ans.pb(v[i]);
				 }
				else{
					cout<<ans[0]<<" ";
             		ans.clear();
             		ans.pb(v[i]);
				}
			 }
		   }
		   
		   if (ans.size() > 2){
             		cout<<ans[0]<<"-"<<ans.back()<<" ";
             		
				 }
				else if(ans.size() == 2){
             		cout<<ans[0]<<" "<<ans[1]<<" ";
             		
				 }
				else{
					cout<<ans[0]<<" ";
				}
                  
   }

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}


