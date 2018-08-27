
#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n,x=0;
  string str;
  cin>>n;
  cin.ignore();
  while(n--){
  	getline(cin,str);
  	char p = str[str.size()-1];
  	string num = str.substr(0,str.size()-1);
  	x += pow(atoi(num.c_str()),p-48);
  	//cout<<p<<" "<<atoi(num.c_str())<<endl;
  	
  }
  cout<< x;

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}




