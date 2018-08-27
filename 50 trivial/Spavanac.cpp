#include <bits/stdc++.h>
using namespace std;

void solve(int h, int m){
    if(m >= 45){
    	cout<< h<<" "<<m-45;
    }else{
    	if(h == 0){
    		cout<< 23<<" "<<m-45+60;
		}else{
			cout<< h-1<<" "<<m-45+60;
		}
	}
}

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int h, m;
  cin>>h >>m;
  solve(h, m);

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



