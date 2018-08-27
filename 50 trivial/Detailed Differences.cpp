#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);

  /* Code here */
  int n;
  string first, second;
  cin>>n;
  cin.ignore();
  while(n--){
  	string diff;
  	getline(cin, first);
  	getline(cin, second);
  	for(int i=0; i<first.size(); i++){
  		if(first.at(i) == second.at(i)){
  			diff.push_back('.');
		  }else{
		  	diff.push_back('*');
		  }
	  }
	cout<< first <<endl;
	cout<< second <<endl;
	cout<< diff <<endl;
	cout<<endl;
  }

  fclose (stdin);
  fclose (stdout);
  return 0;
}



