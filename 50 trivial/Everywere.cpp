#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int t,n;
  cin>>t;
  while(t--){
  	cin>>n;
  	cin.ignore();
  	vector<string> cities;
  	while(n--){
  		string str;
  		getline(cin,str);
  		
  		bool exist = false;
  		
  		for(int i=0; i<cities.size(); i++){
  			if(cities[i] == str){
  				exist = true;
  				break;
			  }
		  }
		  
		if(!exist){
			cities.push_back(str);
		}
		
	  }
	cout<< cities.size() <<endl;
  }
  
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



