#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  float h,v;
  cin>> h>> v;
  int len = (int) h/sin(v*PI/180)+1;
  cout<<len;

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



