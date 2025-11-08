#include <iostream>

using namespace std;
//iterativa
void sumaArregloIterativo(int n, int vec[]){
        int sum=0;
    for(int i=0;i<n;i++){
        sum= sum+vec[i];
    }
    cout << "La suma es: " << sum << endl;
}

int arreglosRecurivo(int vec[], int n){
    int sum;
    if(n==0){
        return vec[0];
    }else{
    sum =vec[n]+arreglosRecurivo(vec,n-1);
   }
   return sum;
}
//iterativo
void mostrarNumerodeAreglo(int vec[], int n){
    for(int i=0;i<n;i++){
        cout << vec[i] << endl;
    }
}
//recursiva

int main()
{
    int vec[5]={1,2,3,4,5};
    mostrarNumerodeAreglo(vec,5);
  // cout<< arreglosRecurivo(vec,4) <<endl;
    //sumaArregloIterativo(5,vec);
    return 0;
}
