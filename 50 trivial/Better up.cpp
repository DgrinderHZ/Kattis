#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);


  /* Code here */
  int n, count=0, a;
  float sum=0;
  
  cin>> n;
  while(n--){
  	cin>> a;
  	if(a >= 0){
  		sum += a;
  		count++;
	  }
  }
  cout<< sum/count;
  
  fclose (stdin);
  return 0;
}



