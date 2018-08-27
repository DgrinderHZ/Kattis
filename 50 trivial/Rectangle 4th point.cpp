#include <bits/stdc++.h>
using namespace std;

int fourth(int a,int b,int c){
	if(a == b){
		return c;
	}else if(b == c){
		return a;
	}
	return b;
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int x1, y1, x2, y2, x3, y3;
  cin>>x1>>y1;
  cin>>x2>>y2;
  cin>>x3>>y3;
  
  cout<< fourth(x1, x2, x3) <<" "<< fourth(y1, y2, y3);
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



