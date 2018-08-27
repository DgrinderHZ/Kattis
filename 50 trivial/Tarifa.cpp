#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int X, N, sum = 0, P;
  cin>>X;
  cin>>N;
  int ans = X *(N+1); 
  for(int i=0; i<N; i++){
  	cin>>P;
  	sum += P;
  }
  cout<< ans - sum;

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



