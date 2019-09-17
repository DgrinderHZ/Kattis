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

int getValue(char s, string& source) {
    for(int i = 0; i < source.size(); i++) {
        if(source[i] == s) {
            return i;
        }
    }

    return 0;
}


int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin>>t; cin.ignore();
    int c = 1;
    while(t--){
    	string alien, src, dest;
    	cin>>alien >>src >>dest;
    	
    	cout<<"Case #"<<c++ <<": ";
    	
    	int sBase = src.length(), tBase = dest.length();
    	
    	// step 1: source to decimal
    	reverse(all(alien));
    	ll decimal = 0;
    	loop(i, 0, alien.length()){
    		decimal += getValue(alien[i], src) * pow(sBase, i);
		}
		
		// step 2: decimal to target
		string ans = "";
		while(decimal>0){
			ans += dest.at(decimal % tBase);
			decimal /= tBase;
		}
		
		reverse(all(ans));
		
		cout<<ans<<endl;
	}
		
    	
	
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}

