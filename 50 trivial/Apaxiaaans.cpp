#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  string str;
  getline(cin, str);
  for(int i=0; i<str.size()-1 ; i++)
  	if(str[i]==str[i+1])
  	  {
		str.erase(i,1);
		i--;
	}
	  

  cout<<str;
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



