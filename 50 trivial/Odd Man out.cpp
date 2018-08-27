#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n, j=1;
  cin>> n;
  while(n--){
  	int g;
  	cin>>g;
  	vector<int> arr;
  	while(g--){
  		int c;
  		cin>>c;
  		arr.push_back(c);
	  }
	int cnt;
	for(int i=0; i<arr.size(); i++){
		if(count(arr.begin(), arr.end(), arr.at(i)) < 2){
			cnt=i;
		}
	}
	cout<<"Case #"<<j++<<": "<<arr[cnt]<<endl;
	
    }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



