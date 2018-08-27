#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  string str;
  int ans = 1;
  int itsMe = 1;
  getline(cin,str);
  for(int i=0; i<str.length(); i++){
  	if(str[i] == 'A'){
  		if(itsMe == 1){
		  itsMe = 2;
		  ans = 2;
		}
		else if(itsMe == 2){
		  itsMe = 1;
		  ans = 1;
		}
	  }else if(str[i]=='B'){
	  	if(itsMe == 2){
		  itsMe = 3;
		  ans = 3;
		}
		else if(itsMe == 3){
		  itsMe = 2;
		  ans = 2;
		}
	  }else{
	  	if(itsMe == 1){
		  itsMe = 3;
		  ans = 3;
		}
		else if(itsMe == 3){
		  itsMe = 1;
		  ans = 1;
		}
	  }
  }
  cout<<ans;
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



