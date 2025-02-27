#include <iostream>
using namespace std;

int main()

{
    int DIAS;
	int SEGUNDOS;
	
	//Escribe los datos
    cout << "Ingresa la cantidad de dias a calcular en segundos" << endl;
    cin >> DIAS;
    
    //Calculo
    SEGUNDOS = DIAS * 24*60*60;
    
    //Se imprime resultados
    cout << "En " << DIAS << " dias hay " << SEGUNDOS << " segundos " << endl;
    return 0;
}
