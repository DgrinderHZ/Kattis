#include <bits/stdc++.h>
using namespace std;

bool checkPair(int i, int j, int n){
	/* Checks if i,j is a valid pair
	adds i or j to sum at each time */
	int sum = 0, turn = 0;
	if(i + j == n) return true; // the simplest case
	while(sum < n){
		if(turn % 2 == 0){
			sum += i;
		}else{
			sum += j;
		}
		turn++;
	}
	return (sum == n)?true:false;
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n;
  cin>>n;
  cout<<n<<":\n";
  for(int i = 2; i<= n/2+1; i++){
  	for(int j= i-1; j<= i; j++){ // The three cond. are important
  		if(checkPair(i, j, n)){
  			cout<<i<<","<<j<<endl;
		  }
	  }
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



