#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)

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
  
  string s;
  int ans = 1;
  cin>> s;
  for(char c: s){
  	if(c == 'A'){
  		
  		if(ans == 1) ans = 2;
  		else if(ans == 2) ans = 1;
  		
	  }else if(c == 'B'){
	  	
  		if(ans == 2) ans = 3;
  		else if(ans == 3) ans = 2;
  		
	  }else if(c == 'C'){
	  	
	  	if(ans == 3) ans =1;
  		else if(ans == 1) ans = 3;
  		
	  }
  }
  cout<<ans;
  

  return 0;
}
