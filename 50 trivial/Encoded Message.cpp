#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  string s;
  int t; cin>>t; cin.ignore();
  while(t--){
  	getline(cin,s);
  	int const n = sqrt( s.size() );
    char tab[n][n];
  	int a=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n; j++){
    		tab[i][j] = s[a];
    		a++;
		}
	}
	for(int j=n-1;j>=0;j--){
    	for(int i=0;i<n; i++){
    		cout<<tab[i][j];
		}
	}
	cout<<endl;
  }
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



