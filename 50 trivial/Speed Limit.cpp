#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n;
  while(cin>>n){
  	if(n == -1) break;
  	int a, b;
  	vector<int> s, t;
  	while(n--){
  		cin>>a >>b;
  	    s.push_back(a);
  	    t.push_back(b);
	  }
	int miles = s[0]*t[0];
	for(int i=1; i<s.size(); i++){
		miles += s[i]*(t[i]-t[i-1]);
	}
	cout<<miles<<" miles"<<endl;
	cin.ignore();
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



