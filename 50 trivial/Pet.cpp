#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n, sum = -1, a;
  for(int i=0; i<5 ; i++ ){
  	int j=4, s=0; 
  	while(j--){
  		cin>> a;
  		s += a;
	  }
	//cin.ignore();
	  if(s > sum){
	  	sum = s;
	  	n = i;
	  }
  }
  cout<< n+1 <<" "<<sum;
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



