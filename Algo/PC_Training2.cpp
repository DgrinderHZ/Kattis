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
#define REP(i,a,b) for (int i = a; i <= b; i++)

vi split(string);
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  string ch;
  while(getline(cin,ch)){
  	vi arr;
  	arr = split(ch);
  	int sum =0;
  	for(int i=0; i< arr.size(); i++){
		sum += arr.at(i);
	}
	cout<<sum<<"\n";
  }
  return 0;
}
vi split(string ch){
	vi arr;
	for(int i=0; i< ch.size(); i++){
		if(ch[i] != ' '){
			arr.PB(ch[i]-48);
		}
	}
	return arr;
}

