#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int t; cin>>t; cin.ignore();
  vector< pair<int,string> > p;
  while(t--){
  	string s, ss;
  	getline(cin,s,' ');
  	getline(cin,ss);
  	if(isdigit(s[0]))
  	  p.push_back(make_pair(atoi(s.c_str())/2,ss));
  	else
  	  p.push_back(make_pair(atoi(ss.c_str()),s));
  }
  	sort(p.begin(),p.end());
  	
  	for(int i=0;i<p.size();i++) cout<<p[i].second<<endl;
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



