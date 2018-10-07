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

vector<int> subset;
void mySearch(int n,int k ){
          if (k == n) {
            // process subset
            cout<<"This is one subset: ";
            for(int i=0;i<subset.size(); i++) cout<<subset[i]<<"  ";
            cout<<endl;
          } else {
          mySearch(n,k+1);
          subset.push_back(k);
          mySearch(n,k+1);
          subset.pop_back();
         }
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int a;
	cin>>a;
	mySearch(a,0);

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



