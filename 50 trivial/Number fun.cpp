#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  float n, a, b, res;
  cin>> n;
  while(n--){
  	cin>>a >>b >>res;
  	bool ans = (a-b == res ||a+b == res ||a/b == res ||a*b == res||b-a == res ||b/a == res);
  	if(ans){
  		cout<<"Possible\n";
	  }else{
	  	cout<<"Impossible\n";
	  }
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



