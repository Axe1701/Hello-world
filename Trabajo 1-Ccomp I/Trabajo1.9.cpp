#include <iostream>

using namespace std;

int main(){
	int anio ;
    cout<<"A�o a comprobar: ";cin>> anio ;
    
    if (anio % 4 == 0){
        cout<<"El a�o es bisiesto"<<endl;
    }
    else{
    	cout<<"El a�o no es bisiesto"<<endl;
    }
    
	return 0;
	}
