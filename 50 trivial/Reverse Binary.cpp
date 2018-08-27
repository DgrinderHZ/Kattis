#include <bits/stdc++.h>
using namespace std;
int reverseBin(int a){
	int r=a,res=0;
	vector<int> arr;
	for(int i=0; r != 0 ;i++){
		arr.push_back(r%2);
		r /= 2;
    }
    for(int i=0; i < arr.size() ;i++){
		res += arr[i] * pow(2,arr.size()-i-1); 
		//cout<<arr[i];
    }
    return res;
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n;
  cin>>n;
  int a = reverseBin(n);
  cout<< a;
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



