/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;

int main()
{
    int x,m,rango1=0,rango2;
    int media=0;
    float l=0, h;
    cout<<"qué cantidad de datos que va a ingresar (mayor a 20) "<<endl;
     cin>>x;
     while (x<20) do{
       
    cout<<"deben ser mas de 20 datos"<<endl;
    cout<<"ingrese un nuevo numero ";
    cin>>x;

    }
    while (x<20);
    cout<<"la cantidad de datos sera: "<<x<<endl;
    
    int datos[x];
    cout<<"Ahora ingrese los datos "<<endl;
    
    for(int i=0;i<x; i++)
    {
        cout<< "Dato Nro"<<(i+1)<<" :";
        cin>>datos[i];
         media = media+datos[i];
    }
    
    m=(media/x);
    cout<<"la media de los datos es: "<<m<<endl;
    
    int v;
    float mediana;
    v=x/2;
    if (x%2==0){
        mediana=(datos[v]+datos[v-1])/2;
    }
    else{
        mediana=datos[v];
    }
    cout<< "la mediana es: "<<mediana<<endl;
    
    for(int i=0;i<x; i++){
        h=((i+m)*2)/x;
        l=l+h;
    }
   // l=(sqrt(l)) ;
    cout<<"la desviacion estandar es: "<<l<<endl;
    rango2=datos[0];
    
    for(int i=0;i<x; i++){
   
   if (datos[i]>rango1) {
       rango1=datos[i];
       
   }  
   if (rango2>datos[i]){
       rango2=datos[i];
   }                   
        
    }
    cout<<"el rango esta entre : "<<rango1<<" y "<<rango2<<endl;
        
    

    return 0;
}
