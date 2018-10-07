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
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int k, ans, v;
	while (scanf("%d", &k) != EOF) {
	   ans = 0; 
	   while (k--) { scanf("%d", &v); ans += v; }
	   printf("%d\n", ans); 
	} 


  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



