#include <bits/stdc++.h>
using namespace std;

int d,m;
int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[]= {"Thursday", "Friday", "Saturday","Sunday", "Monday", "Tuesday", "Wednesday"};

int solve(int d_i, int m_i, int myday){
  int found = 0;
  while(!found){
    for(int i=d_i; i<= months[m_i-1] ;i++){
        if(i == d && m_i == m) {
            found = 1;
            break;
          }
        myday++;
        if(myday==7) myday=0;
    }
    m_i++;
    d_i = 1;
  } 
  return myday;
}
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  int myday=0;
  cin>>d>>m;
  int d_i = 1, m_i=1;
  if(m<=6){
  	myday = solve(d_i, m_i, myday);
  }else if(m<=9){
  	myday = solve(1, 7, 6);
  }else if(m>9){
  	myday = solve(1, 10, 0);
  }
  cout<<days[myday];
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
