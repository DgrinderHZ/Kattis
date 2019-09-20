// https://open.kattis.com/problems/periodicstrings

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

/* Wrong answer
int check(string &s, int sz){
	if(s.size()%sz != 0) return 0;
  string one, two;
  one = s.substr(0, sz);
  int i = sz;
  while(i<s.size()-sz){
    two = s.substr(i, sz);
    for(int j=0; j<sz; j++){
      if(one[j] != two[(j+1)%sz])
          return 0;

    }
    
    one = two;
    i += sz;
  }
return 1;
}

void solve(){
	
  string s;
  cin>>s;

  vi ch(27, 0);
  int cnt = 0;
  for(char c: s){
    if(ch[c-'a'] == 1) continue;
    else{
    	cnt++;
    	ch[c-'a'] = 1;
	}
  }

  if(cnt == 1) cout<<1;
  else if(cnt == s.size()) cout<<s.size();
  else{
    int ans = 1;
    while(check(s, ans)==0){
      ans++;
      if(ans > s.size()/2){
      	ans = 1;
      	break;
	  }
    }
    cout<<ans;
  }

	
}
*/
// author: https://github.com/mpfeifer1/Kattis/blob/master/periodicstrings.cpp
string s;

bool periodic(int k) {
    if(s.size()%k != 0) return false;
    vector<string> arr;
    for(int i = 0; i < s.size(); i += k) {
        arr.push_back(s.substr(i,k));
    }
    for(int i = 1; i < arr.size(); ++i) {
        string prev = arr[i-1];
        prev = prev.back() + prev;
        prev.pop_back();
        if(arr[i] != prev) return false;
    }
    return true;
}

int main() {
	 #ifndef ONLINE_JUDGE
	  	//freopen ("input.txt","r",stdin);
	  	//freopen ("output.txt","w",stdout);
	  #endif
  
    cin >> s;
    for(int k = 1; k <= s.size(); ++k) {
        if(periodic(k)) {
            cout << k << '\n';
            return 0;
        }
    }
}
