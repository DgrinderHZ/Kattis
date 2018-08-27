#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int x, y;
  cin>>x;
  cin>>y;
  if(x>0){
  	if(y>0){
  		cout<<1;
	  }else{
	  	cout<<4;
	  }
  }else{
  	if(y>0){
  		cout<<2;
	  }else{
	  	cout<<3;
	  }
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



