#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n, x,y;
  cin>>x >>y >>n;
  for(int i=1; i<=n; i++){
  	if(i%x == 0 && i%y == 0) cout<<"FizzBuzz\n";
  	else if(i%x == 0) cout<<"Fizz\n";
  	    else if(i%y == 0) cout<<"Buzz\n";
  	         else cout<<i<<endl;
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



