#include <bits/stdc++.h>

using namespace std;

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

//Macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

typedef struct tu tuple;
struct tu{
	int x;
	int y;
	int h;
};
int alt(int x,int y,int h, int X, int Y){
	return max((h - abs(x-X) - abs(y-Y)),0);
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int n,x,y,h, hA,xA,yA;
  vector<tuple> arr;
  cin>>n;
  while(n--){
  	cin>>x>>y>>h;
  	arr.PB({x,y,h});
  }
  	
  	int found = 0, cpt=0;
  	for(int h=1; !found ; h++){
  		for(int X=0; X <=100 ; X++){
  			for(int Y=0; Y <=100 ; Y++){
  				found = 0;
  				for(int i=0; i <=arr.size() ; i++){
  					if(alt(arr[i].x,arr[i].y,h,X,Y) == arr[i].h){
  					   cpt++;
  					   //cout<<X<<" "<<Y<<endl;
					  }
				  }
				if(cpt == arr.size()){
    	              found = 1;
    	              xA = X;
    	              yA = Y;
    	              hA = h;
	             }  
			  }
		  }
	  }
     cout<<xA<<" "<<yA<<" "<<hA;
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<int(n);++i)

struct Point{
    int x,y,h;
};

int main(void){
    int n;
    cin>>n;
    vector<Point> vp(n);
    int tall = -1;
    rep(i,n){
        int x,y,h;
        cin>>x>>y>>h;
        vp[i] = Point{x,y,h};
        if (h > 0) tall = i;
    }
    assert(tall>=0);
    rep(x,101)rep(y,101){
        int h = abs(vp[tall].x-x) + abs(vp[tall].y-y) + vp[tall].h;
        bool ng = false;
        rep(i,n){
            if (vp[i].h != max(h - abs(vp[i].x-x) - abs(vp[i].y-y), 0)) {
                ng = true;
            }
        }
        if (!ng) {
            cout << x << " " << y << " " << h << endl;
            return 0;
        }
    }
    return 0;
}


