/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,l,h;
     cout<<"          PROGRAMA DE LUIS PEREZ"<<endl;
    cout<<"PROGRAMA PARA IMPRIMIR LA BANDERA DE INGLATERRA"<<endl;
    cout<<endl;
    cout<<"Ingrese el largo horizontal de la bandera: ";
    cin>>l;
    if (l<=2){
        cout<<"Debe ser mayor a 2, ingrese nuevamente: ";
        cin>>l;
    }
    if (l>19){
        cout<<"Debe ser menor de 20, ingrese nuevamente: ";
        cin>>l;
    }
    if (l%2==0){
       cout<<"Debe ser un numero impar, ingrese nuevamente: ";
       cin>>l;    
        
    }
    
    cout<<"Ingrese la altura  de la bandera: ";
    cin>>h;
    if (h<=2){
        cout<<"Debe ser mayor a 2, ingrese nuevamente: ";
        cin>>h;
    }
    if (h>19){
        cout<<"Debe ser menor de 20, ingrese nuevamente: ";
        cin>>h;
    }
    if (h%2==0){
       cout<<"Debe ser un numero impar, ingrese nuevamente: ";
       cin>>h;    
        
    }
    cout<<"la altura de la bandera será: "<<h<<" y el largo sera de: "<<l<<endl; 
     cout<<endl;
     cout<<endl;
    
    for(int i=0;i<h/2; i++){
    
    for(int i=0;i<l/2; i++)
    {
       cout<<"0" ;
    }
    cout<<"+";
    for(int i=0;i<l/2; i++)
    {
       cout<<"0" ;
    }
    cout<<endl; 
            }
     for(int i=0;i<l; i++){ 
         cout<<"+";
     }
     cout<<endl;
     
    for(int i=0;i<h/2; i++){
    
    for(int i=0;i<l/2; i++)
    {
       cout<<"0" ;
    }
    cout<<"+";
    
    
    for(int i=0;i<l/2; i++)
    {
       cout<<"0" ;
    }
    cout<<endl; 
            }
    return 0;
}

