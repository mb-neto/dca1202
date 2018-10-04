#include <iostream>
#include "Point.h"
#include "Poligono.h"
#include "Retangulo.h"

using namespace std;

int main()
{
    Retangulo R(0,0,3,4);
    //Point P;
    R.imprimePoligono();
    cout << "\n";
    cout << R.areaPoligono() << "\n";
    R.transladaPoligono(-3,4);
    R.imprimePoligono();
    cout << "\n" << R.areaPoligono() << "\n";

    // centro de massa do retangulo
    Point P;
    P.setXY(-3/2,2);
    R.rotacionaPoligono(P, 30);
    R.imprimePoligono();
    cout << endl << R.areaPoligono() << endl;
    return 0;
}
