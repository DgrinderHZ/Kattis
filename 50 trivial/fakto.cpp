#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int a, i;
  cin>>a >>i;
  int ans = a * (i-1) + 1;
  cout<<ans;

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



