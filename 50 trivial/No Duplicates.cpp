#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  vector<string> arr;
  int found = 0;
  string str;
  getline(cin,str);
  int j=0;
  for(int i=0;i<str.size();i++){
  	if(str[i] == ' '){
  		int n=str.find(' ',i);
  		string s=str.substr(j,n-j);
  		//cout<<s<<endl;
		arr.push_back(s);
		//cout<< j<<" "<<i<<endl;
		j=i+1;
	}	
  }
  arr.push_back(str.substr(j));
  for(int i=0; i<arr.size(); i++){
  	if(count(arr.begin(), arr.end(), arr[i]) > 1){
  		cout<<"no";
  		found = 1;
  		break;
	  }
  }
  if(found == 0){
    	cout<<"yes";
	}
	//for(int i=0;i<arr.size();i++) cout<<arr[i];
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



