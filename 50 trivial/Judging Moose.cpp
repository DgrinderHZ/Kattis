#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int l, r;
  cin>> l>> r;
  if(l==0 && r==0){
  	cout<<"Not a moose";
  }else if(l == r){
  	cout<<"Even "<< l+r;
   }else{
   	cout<<"Odd "<<((l<r)?r*2:l*2);
  }
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



