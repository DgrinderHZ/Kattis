#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n,m , Max=-1;
  cin>>n>>m;
  vector<int> sumSet(n+m+1, 0);
  for(int i=1; i<=n ; i++){
  	for(int j=1; j<=m ; j++){
  		sumSet.at(i+j)++;
  		if(sumSet[i+j] > Max)
  	       Max = i+j;
	  }
  } 
  
  for(int i=0; i<sumSet.size(); i++)
  	if(sumSet[i] == Max)
  	    cout<<i<<endl;
  
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



