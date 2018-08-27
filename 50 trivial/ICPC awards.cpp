#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n;
  
  vector<string> uniNames;
  cin>>n;
  cin.ignore();
  int count = 0;
  while(n-- && count<12){
  	string str;
  	getline(cin, str);
  	//cout<< str <<endl;
  	int pos = str.find(' ');
  	string name = str.substr(0, pos);
  	
  	if( find( uniNames.begin(), uniNames.end(), name) == uniNames.end() ){
  		uniNames.push_back(name);
  		cout<< str <<endl;
  		count++;
	  }
	else {
		continue;
	}
  }
   
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



