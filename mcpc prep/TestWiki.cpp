#include <iostream>


using namespace std;

int main()
{
  int i;

  int const tailleTableau(10); //taille du tableau
  int tableau[tailleTableau]; //déclaration du tableau

  for (int i(0); i<tailleTableau; i++ )
  {
      tableau[i]=i*i;
      cout<<"Le tableau ["<<i<<"] contient la valeur "<<tableau[i]<<endl;
  }

   return 0;
}
