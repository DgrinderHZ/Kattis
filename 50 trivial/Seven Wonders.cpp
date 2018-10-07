#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  char ch;
  int sum = 0;
  int c=0, g(0), t(0);
  while(cin>>ch){
  	
	if(ch != 'T' && ch != 'G' && ch != 'C' ) break;
  	
  	if(ch == 'C') c++;
  	if(ch == 'T') t++;
  	if(ch == 'G') g++;
  }
  sum += c*c + t*t + g*g;
  if(c && g && t){
  	int time = 0;
  	if(c == g && g == t)
  	  {
  	  	time = c;
    }else{
    	while(c && t && g){
    		time++;
    		t--;
    		g--;
    		c--;
		}
	}
  	sum += time * 7;
  } 
  cout<<sum; 
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



