#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int x,y;
  cin>>x >>y;
  int boolean = (x==0 && y==0) || (x==1 && y==0) || (x==0 && y==2)|| (x==2 && y==4);
  boolean = boolean ||(x==1 && y==2) || (x==1 && y==4) || (x==3 && y==4);
   if(boolean){
   
  	  cout<<"possible";
  }else{
  	cout<<"impossible";
  }
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



