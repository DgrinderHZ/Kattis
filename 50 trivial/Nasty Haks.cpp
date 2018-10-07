#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n, e, r, c;
  cin >> n;
  while(n--){
  	cin>>r >>e >>c;
  	int eAfterCost = e-c;
  	if(eAfterCost == r){
  		cout<< "does not matter\n";
	  }else if(eAfterCost > r){
	  	cout << "advertise\n";
	  }else{
	  	cout<< "do not advertise\n";
	  }
  }

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



