#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  
  double C, l, w, sum = 0.0;
  int L;
  cin >> C;
  cin >> L;
  
  while(L--){
  	cin>>w >>l;
  	sum += w*l;
  }
  
  //cout<< C*sum <<endl;
  printf("%.8f\n", C*sum);
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



