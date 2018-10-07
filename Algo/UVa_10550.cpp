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

int todegre(int num){
	return (360*num/40);
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int a,b,c,d;
  while(cin>>a>>b>>c>>d){
  	if(a||b||c||d){
	  int sum = 0;
	  sum += (a-b+40)%40;
	  sum += (c-b+40)%40;
	  sum += ((c-d+40)%40);
	  sum *= 9;
	  sum += 360*3;
	  cout<<sum<<endl;
    }else{
    	break;
	}
  }

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



