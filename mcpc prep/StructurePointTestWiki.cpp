#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

int main()
{
    Point A, B;
    double dx, dy, distance;

    cout << "Tapez l'abscisse de A : ";  cin >> A.x;
    cout << "Tapez l'ordonnée de A : ";  cin >> A.y;
    cout << "Tapez l'abscisse de B : ";  cin >> B.x;
    cout << "Tapez l'ordonnée de B : ";  cin >> B.y;
 
    dx = A.x - B.x;
    dy = A.y - B.y;
    distance = sqrt( dx*dx + dy*dy );

    cout << "La distance AB vaut : " << distance << endl;

    return 0;
}
