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
int maxSubSum(vi);
int maxSubSum2(vi);

int maxSubSum3(vi array){
    int best = 0, sum = 0;
	for (int k = 0; k < array.size(); k++) {
	    sum = max(array[k],sum+array[k]);
	    best = max(best,sum);
	}
	return best;
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  vi arr;
  int n,a;
  cin>>n;
  while(n--){
  	cin>>a;
  	arr.push_back(a);
  	//cout<<a<<endl;
  }
   
  cout<<maxSubSum(arr)<<" "<<maxSubSum2(arr)<<" "<<maxSubSum3(arr);

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}

int maxSubSum(vi array){
  int best = 0;
  int n = array.size();
  for (int a = 0; a < n; a++) {
    for (int b = a; b < n; b++) {
		int sum = 0;
		for (int k = a; k <= b; k++) {
		    sum += array[k];
		}
		best = max(best,sum);
		
	}
  }

	return best;
}

int maxSubSum2(vi array){
  int best = 0;
  int n = array.size();
  for (int a = 0; a < n; a++) {
    int sum = 0;
	for (int b = a; b < n; b++) {
	    sum += array[b];
		best = max(best,sum);	
	}
  }

	return best;
}



