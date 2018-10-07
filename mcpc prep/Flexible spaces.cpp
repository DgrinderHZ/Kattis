#include <bits/stdc++.h>
using namespace std;

int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int w,p,a;
  int t;
  cin>>w >>p;
  vector<int> units(p+2); // Walls or borderlines
  vector<int> feasibleWidths;
  units[0] = 0;
  units[p+1]= w;
  
  for(int i=1; i<=p ;i++){
    cin>> units.at(i);
  }
  // Check the available widths using the room_widths available
  for(int i=1 ; i<units.size() ; i++)
    for(int j=0; j<i ; j++){
    	int tempWidth = units[i]-units[j];
    	bool notSaved = true;
    	for(int k = 0; k<feasibleWidths.size(); k++){
    		if(feasibleWidths[k] == tempWidth)
    		    {
    		    	notSaved = false; // Already Saved 
    		    	break;
				}
		}
		if(notSaved)
		    feasibleWidths.push_back(tempWidth);
	}
  
  sort(feasibleWidths.begin(), feasibleWidths.end());
  for(int i=0; i< feasibleWidths.size() ;i++){
    cout<< feasibleWidths.at(i)<<" ";
  }

  fclose (stdin);
  //fclose (stdout);
  return 0;
}



