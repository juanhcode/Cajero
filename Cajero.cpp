/*Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.*/

#include <iostream>
using namespace std;

int main(){
    int dinero_inicial = 1000;
    int dinero_extra;
    int saldo = 0;
    int opcion;
    int retiro;
    


    cout<<"\tMenu"<<endl;
    cout<<"(1) Ingresar"<<endl;
    cout<<"(2) Retirar"<<endl;
    cout<<"(3) Salir"<<endl;
    cout<<"Que opcion desea escojer: "<<endl;
    cin>>opcion;


    switch (opcion)
    {
    case 1:
        cout<<"Digite la cantidad de dinero que quiere ingresar"<<endl; 
        cin>>dinero_extra;

        saldo = dinero_inicial + dinero_extra;

        cout<<"dinero en cuenta: "<<saldo <<endl;

        break;
    case 2:
        cout<<"digite la cantidad de dinero que quiere retirar"<<endl;
        cin>>retiro;

        if(retiro>saldo){
            cout<<"No puede retirar"<<endl;

        }
        else{
        saldo = dinero_inicial - retiro;
        cout<<"Dinero en cuenta: "<<saldo <<endl;
        }
        
        break;
    case 3:

        break;
    default:
        break;
    }


    return 0;
}