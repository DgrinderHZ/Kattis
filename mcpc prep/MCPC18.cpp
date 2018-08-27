#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int t,n, m,a;
  cin>> t;
  while(t--){
  	cin>>n;
	cin>>m;
	vector<int> arr;
  	for(int i=0; i<n ; i++){
  		cin>> a;
  		arr.push_back(a);
	  }
	
	if(n==1){
		cout << m <<endl;
	}else{
		int c = count(arr.begin(), arr.end(), m);
		
		if(c == 1){
			for(int i=0 ; i<n ; i++){
				if(arr.at(i) < m){
					continue;
				}else{
					int res = accumulate(arr.begin()+i,arr.end(),0);
					cout<< res <<endl;
					break;
				}
			}
		}
		else{
			int curMax = -1, newMax;
			vector<int>::iterator it, fp = find(arr.begin(),arr.end(),m);
				
				for(it = arr.begin() ; it != arr.end(); it++){
					if(*it < m){
						continue;
					}else{
						vector<int>::iterator sp = find(fp+1,arr.end(),m);
						//cout<< "here1 "<< *fp << "h2" << *sp <<endl;
						if(sp != arr.end()){
							newMax = accumulate(it,sp,0);
							it = fp+1;
							fp = sp;
						}
						else{
							newMax = accumulate(it-1,arr.end(),0);
						}
					
					}
					if(newMax > curMax)
					    curMax = newMax;
				}
		    
			cout<< curMax <<endl;    
		}
	}
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



