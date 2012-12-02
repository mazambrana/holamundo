#include <iostream>
#include <cstring>

#include "holaMundo.hpp"
#include "claseNueva.cpp"

using namespace std;

int main() 
{
    // La nueva clase
    claseNueva c;
    c.read ();

    cout << "Hola Mundo" << endl;
    
    int i = 0;
 
    // Llamamos a la función aquiNosVamos
    for ( i = 0 ; i < 10 ; i++ )
    {
        aquiNosVamos (i);
    }

    // Printamos la clase
    cout << "Clase " << c.view() << endl;

    return 0;
}

void aquiNosVamos (int i)
{
    const char *p = pasoDeTi(i);
    //pasoDeTi(i);

    cout << "Aquí mostramos el " << i << endl;
    cout << "Ahora vas y lo cascas " << p << endl;
}

char * pasoDeTi (int i)
{
    // Forma uno sin deprecated
    //const char *variable = "y nada más!!";

    // Forma dos sin deprecated
    char *variable = (char *)"y nada más!!";

    return variable;
}
