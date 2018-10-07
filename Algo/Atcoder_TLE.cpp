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
  int n,T,c,t,cptr = 0;
  vector<pair<int,int> > arr;
  cin>>n>>T;
  while(n--){
  	cin>>c>>t;
  	if(t<=T) cptr++;
  	arr.PB(MP(c,t));
  }
  if(cptr == 0) cout<<"TLE";
  else{
  	
  	sort(arr.begin(),arr.end());
  	for(int i=0; i<arr.size() ; i++){
  		if(arr[i].S <= T)
  		{
  			cout<<arr[i].F;
  			break;
		  }
	  }
  }
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



