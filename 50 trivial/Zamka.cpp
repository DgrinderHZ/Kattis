#include <bits/stdc++.h>
#include <string>
using namespace std;


int digitSum(int a){
	string str = to_string(a);
	int s = 0;
	for(int i=0; i<str.size(); i++){
		s += str[i]-48;
	}
	return s;
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int l, d, x;
  cin>>l >>d >>x;
  int min,max;
  int foundMin = 0;
  for(int i=l; i<=d ; i++){
  	int s = digitSum(i);
  	if(s == x && !foundMin){
  		min = i;
  		foundMin = 1;
	  }
	if(s == x){
  		max = i;
	  }
  }
  cout<<min<<endl<<max;

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



