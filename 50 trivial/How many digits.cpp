#include <bits/stdc++.h>

using namespace std;

#define M_PI 3.14159265358979323846
int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  /* Code here */
  long long n;
  double ans;
  while(cin>>n){
        if(n==0||n==1){
            cout<<1<<endl;
        }
        else{
           ans = n*log10(n/exp(1)) + 0.5*log10(2*M_PI*n) + log10(1+1/(12*n));
            cout<<(long long)(ans)+1 <<endl;
        }
    }

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}



/*
https://www.geeksforgeeks.org/count-digits-factorial-set-1/


#include <stdio.h>
#include <math.h>

#define E 2.718281828459045235360287471352662497757247093699959574966967627724076630353
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286

int main()
{
    int n;
    while(scanf("%d",&n) == 1) printf("%d\n", n < 2 ? 1 : (int)ceil(log10(2*PI*n)/2+n*(log10(n/E))));
    return 0;
}
*/
