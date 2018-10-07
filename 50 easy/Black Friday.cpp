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
  int i=1,_max=-1,n,a,ans, found=0;
  cin>>n;
  vi v;
  while(n--){
  	cin>>a;
    v.push_back(a);
  }
    for(int i=0; i<v.size(); i++){
  	
  	if(count(v.begin(),v.end(),v[i]) == 1){
  		if(v[i]>_max){
			_max = v[i];
			ans = i;
		}
	  }
	else{
		found++;
	}
  	
  }
  if(found != v.size())  cout<<ans+1; 
  else  cout<<"none";
  


  //fclose (stdin);
  //fclose (stdout);
  return 0;
}

