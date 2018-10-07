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

bool isValide(int);
int *arr;
int n,c;
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int t; cin>>t;
  while(t--){
	  int i; cin>>n>>c;
	  arr = new int[n];
	  i = 0;
	  while(i<n) {
	  	cin>>arr[i]; i++;
	  }
	  
	  sort(arr,arr+n);
	  
	  /* Binary search */
		int hi = 1e9 + 2, lo = 0, mid;
		while (lo < hi - 1) {
			mid = (lo + hi) / 2;
			if (isValide(mid)) lo = mid;
			else hi = mid - 1;
		}
		if (isValide(hi)) cout<<hi<<endl;
		else cout<<lo<<endl;
	}
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}

// d: distance
bool isValide(int d) {
	// vérify if we can use the distance d
	int cur_val = arr[0], cntr = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] - cur_val >= d) {
			cntr++;
			cur_val = arr[i];
		}
	}
	if (cntr >= c) return true;
	return false;
}

