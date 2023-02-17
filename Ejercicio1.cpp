#include <iostream> 
using namespace std; 
int main (int argc, char *argv[]) { 
    double Altura, Base, Perimetro, Area; 
    
    cout<<"¿Cual es la base de tu rectangulo? "; 
    cin>>Base; 
    
    cout<<"¿Cual es la altura de tu rectangulo? "; 
    cin>>Altura; 
    
    Perimetro = (2*Base) + (2*Altura); 
    Area  = Base * Altura; 
    
    cout<<"El area del rectangulo es: "<<Area<<endl; 
    cout<<"El perimetro del rectangulo es: "<<Perimetro<<endl; 
    
    return 0; 
}