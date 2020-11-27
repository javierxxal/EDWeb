#include <iostream>
#include "Nodo.h"
#include "Pila.h"
#include "Cola.h"
#include "Lista.h"
#include <ctime>
#include<fstream>
#include<cstdlib>
#include <Pedido.h>
#include <string>
#include <string.h>
#include<Web.h>

using namespace std;

int main()
{
    srand((int) time (0));
    Web gestor;
    Pedido p1 = Pedido("Ordenador Portatil","Daniel Verduras Gallego","Calle de Alcala","VIP","123456789",7);
    Pedido p2 = Pedido("Teclado Gaming","Javier Alonso Lledo","Calle Madrid","NVIP","8273956235",2);
    Pedido p3 = Pedido("Raton 3.0","Pedro Sanchez","Moncloa","NR","386346783",9);
    Pedido p4 = Pedido("Xiaomi MI A1","Pepe Perez","Puerta de Alcala","VIP","237346345636",1);
    Pedido p5 = Pedido("Monitor LG","Daniel Verduras Gallego","Calle de Alcala","VIP","123456789",3);
    Pedido p6 = Pedido("Zapatillas Nike","Javier Alonso Lledo","Calle Madrid","NVIP","8273956235",4);
    Pedido p7 = Pedido("Television 4K","Lucas Vazquez","Calle del Futbol","NR","464626245252",5);
    Pedido p8 = Pedido("CD Bad Bunny","David Fernandez","Calle Antonio Machado","NR","37346346346",6);
    Pedido p9 = Pedido("Camiseta Levis","Ruben Castro","Avenida Espartales","NR","923572972",8);
    Pedido p10 = Pedido("Raqueta de Tenis","Raul Fando","Calle 69","NR","26452545",10);

    Pedido listaP[] = {p1,p2,p3,p4,p5,p6,p7,p8,p9,p10}; //lista con pedidos realizados manualmente para completar el ejercicio

    cout << "------------------------------" << endl;
    cout << "Bienvenido al gestor de pedidos Web." << endl;
    cout << "Copyrightę Daniel Verduras y Javier Alonso 2020" << endl;
    cout << "------------------------------" << endl;
    cout << "Para comenzar, desea leer productos de un fichero de texto?" << endl;
    cout << "1. Si    2. No" << endl;
    int n;
    cin >> n;
    system("cls");
    if(n == 1){
        cout << "Vamos a proceder a leer los pedidos del fichero."<< endl;
        int num = gestor.introducirTxt();  //aqui entra en un bucle infinito y no se por que
        //cout << num;

    }
    else{
        cout << "Procedemos entonces a hacer la simulacion con 10 pedidos de prueba." << endl;
        cout << "Estos son los pedidos con los que vamos a trabajar: " << endl;
        cout << "------------------------------" << endl;
        for(Pedido elem : listaP){
            elem.toStr();
            cout << "------------------------------" << endl;
        }
        cout << "\n";
        system("pause");
        system("cls");

        cout << "Vamos a introducir los productos al sistema." << endl;
        for(Pedido elem : listaP){
            gestor.introducirPedido(elem);
        }
        system("pause");
        cout << "Los pedidos han sido introducidos correctamente al sistema." << endl;





    }

    return 0;
}
