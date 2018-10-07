#include <bits/stdc++.h>
using namespace std;

int solve(string s, int d){

  int curDiff = 0, m = 0, w = 0, count = 0;
  
  for(int i=0;i<s.size();i++){
  	if(s[i] == 'W') w++;
  	if(s[i] == 'M') m++;
  	curDiff = abs(w -m);
  	if(curDiff > d){
  		if(w > m && s[i+1] == 'W') return count;
  		if(w < m && s[i+1] == 'M') return count;
	  }
	count++;
  }
  return count;
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int d;
  cin>>d; cin.ignore();

  string s;
  getline(cin, s);
  
  cout<<solve(s,d); 
  

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



