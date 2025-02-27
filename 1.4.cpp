#include <iostream>
using namespace std;

int main() 

{
    const float LITRO = 3.785, PRECIOLITRO = 8.20;
    float GAL, TOTAL;
 
   //Entrada de datos
   
    cout << "Escriba la cantidad de galones comprados" << endl;
    cin >> GAL;
    
    
   //Calculo
    TOTAL = GAL * LITRO * PRECIOLITRO;
    
    //Se imprime resultados
    cout << "El total a pagar es de: " << TOTAL << endl;
    
	return 0;
}
