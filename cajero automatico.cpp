/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x;
    int n=0;
    int m=0;
    int b=0;
     cout<<"      Cajero de Bank of America "<<endl;
    cout<<"ingrese cantidad de dinero a retirar $:"<<endl;
    cin>> x;
    cout<<"sus billetes serán:  "<<endl;
    
    while (x>=100){
    x=x-100;
    n++;
    }
    
    if (n>=1){
   cout<<n<<" billetes de 100"<<endl;
    }
     
     while (x>=50){
    x=x-50;
    cout<<"1 billete de 50"<<endl;
     }
        
     while (x>=20){
    x=x-20;
    b++;
     }
     if (b>=1){
   cout<<b<<" billete de 20"<<endl;
    }
         
        
    while (x>=10){
    x=x-10;
    cout<<"1 billete de 10"<<endl; 
     }
        
    while (x>=5){
    x=x-5;
     cout<<"1 billete de 5"<<endl; 
     }
        
     while (x>=1){
    x=x-1;
    m++;
    
     }if (m>=1){
   cout<<m<<" billetes de 1"<<endl;
    }
         
          
    return 0;
}
