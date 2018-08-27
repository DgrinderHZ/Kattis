#include <bits/stdc++.h>
using namespace std;

bool clockWise;

typedef struct {
	double x;
	double y;
}Vertex;

double getArea(vector<Vertex> arr){
	double area = 0;
	for(int i=1; i<arr.size(); i++){
		area += (arr[i-1].x * arr[i].y )- (arr[i-1].y * arr[i].x);
	}
	area += (arr[arr.size()-1].x * arr[0].y )- (arr[arr.size()-1].y * arr[0].x);
	
	if(area < 0) clockWise = true;
	else clockWise = false;
	return fabs(area/2);
}



int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  
  int n;
  
  while(cin>>n){
  	if(n == 0) break;
  	vector<Vertex> arr;
  	Vertex temp;
    while(n--){
  	cin>>temp.x >>temp.y;
  	arr.push_back(temp);
   }
  double area = getArea(arr);
  if(clockWise){
		printf("CW %.1f\n",area);
	}else{
		printf("CCW %.1f\n",area);
	}
  }
 
  fclose (stdin);
  //fclose (stdout);
  return 0;
}



