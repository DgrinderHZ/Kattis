#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  
  string s;
  getline(cin, s);
  int count = 0, a=0,b=1,c=2; 
  for(int i=0; i < s.size(); i += 3){
  	if(s[a] != 'P') count++;
  	if(s[b] != 'E') count++;
  	if(s[c] != 'R') count++;
  	a=i+3; b=a+1; c = b+1;
  }
  cout<<count;
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



