#include <bits/stdc++.h>
using namespace std;

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

//Macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);
  /* Code here */
  string s;
  getline(cin,s);
  double w=0.,lo=0.,up=0., sy=0.;
  REP(i,0,s.size()){
  	if(s[i]=='_') w++;
  	else if(s[i] <= 122 && s[i] >= 97) lo++;
  	     else if(s[i] <= 90 && s[i] >= 65) up++;
  	          else sy++;
  }
  
  printf("%.17f\n%.17f\n%.17f\n%.17f\n", w/s.size(), lo/s.size(), up/s.size(), sy/s.size() );

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



