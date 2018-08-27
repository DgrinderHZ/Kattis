#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n,m;
  cin>>n>>m;
  int min = (n<m)?n:m ;
  int max = (n>m)?n:m ;
  for(int i=min; i<=max+1; i++)
  	    cout<<i<<endl;
  
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



