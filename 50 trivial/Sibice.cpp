#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n, w, h, a;
  cin>>n >>w >>h;
  cin.ignore();
  int d = sqrt(w*w + h*h);
  while(n--){
  	cin>>a;
  	
  	if(a<=w || a <= h || a<= d){
  		cout<<"DA\n";
	  }else{
	  	cout<<"NE\n";
	  }
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



