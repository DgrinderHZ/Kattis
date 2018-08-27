#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int dom[]= {11,4,3,20,10,14,0,0};
  int notDom[]= {11,4,3,2,10,0,0,0};
  /* A = 0, K=1, ... , 8 = 6, 7 = 7
  Number = Position */
  int n;
  char b;
  cin>>n >>b;
  cin.ignore();
  n = 4*n;
  int sum = 0;
  while(n--){
  	string str;
  	getline(cin,str);
  	
  	switch(str.at(0)){
  		case 'A': 
		  if(str.at(1) == b){
		  	sum += dom[0];
		  }else{
		  	sum += notDom[0];
		  }
  		  break;
  		case 'K': 
		  if(str.at(1) == b){
		  	sum += dom[1];
		  }else{
		  	sum += notDom[1];
		  }
  		  break;
  		case 'Q': 
		  if(str.at(1) == b){
		  	sum += dom[2];
		  }else{
		  	sum += notDom[2];
		  }
  		  break;
  		case 'J': 
		  if(str.at(1) == b){
		  	sum += dom[3];
		  }else{
		  	sum += notDom[3];
		  }
  		  break;
  		case 'T': 
		  if(str.at(1) == b){
		  	sum += dom[4];
		  }else{
		  	sum += notDom[4];
		  }
  		  break;
  		case '9': 
		  if(str.at(1) == b){
		  	sum += dom[5];
		  }else{
		  	sum += notDom[5];
		  }
  		  break;
  		case '8': 
		  if(str.at(1) == b){
		  	sum += dom[6];
		  }else{
		  	sum += notDom[6];
		  }
  		  break;
  		case '7': 
		  if(str.at(1) == b){
		  	sum += dom[7];
		  }else{
		  	sum += notDom[7];
		  }
  		  break;
	  }
  }
  cout<<sum;
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



