#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n, t, count=0;
  cin>>n;
  while(n--){
  	cin>> t;
  	if(t<0){
  		count++;
	  }
  }
  cout<<count;

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



