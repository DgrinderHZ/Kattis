#include <bits/stdc++.h>
using namespace std;

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

//Macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
//#define REP(i,a,b) for (int i = a; i < b; i++)


int getRotVal(string s){
	int val=0;
	for(int i=0; i<s.size() ; i++){
		val += s[i]-65;
	}
	return val;
}

char newChar(char c, int val){
	if(val> 25) val = val%25;
	for(int i=0; i<val ; i++){
		if(c == 'Z') c = 'A';
		else c++;
	}
	return c;
}

pair<string,string> divideRotate(string s){
	
	string s1 = s.substr(0, (s.size()/2));
	string ss = s.substr((s.size()/2));
	int val1 = getRotVal(s1);
	int val2 = getRotVal(ss);
	for(int i=0; i<ss.size() ; i++){
		s1.at(i) = newChar(s1.at(i), val1);
		ss.at(i) = newChar(ss.at(i), val2);
	}
	
	return make_pair(s1, ss);	
}

string merge(pair<string,string> p){
	for(int i=0; i<p.F.size() ; i++){
		p.F.at(i) = newChar(p.F.at(i), p.S.at(i)-65);
	}
  return p.F;	
}

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  string s;
  getline(cin, s);
  
  pair<string,string> p = divideRotate(s);
  
  cout<< merge(p);
  //cout<< "h";
  


  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



