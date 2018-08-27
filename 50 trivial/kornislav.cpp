#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  vector<int> arr(4);
  for(int i=0; i<4 ;i++){
  	cin>>arr.at(i);
  }
  sort(arr.begin(), arr.end());
  cout<<arr[0]*arr[2];

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



