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
void mostrarNumerodeAregloIterativo(int vec[], int n){
    for(int i=0;i<n;i++){
        cout << vec[i] << endl;
    }
}
//recursiva
void mostrarNumerodeAregloRecursivo(int vec[],int n){
    if(n==0){
        cout << vec[n] << endl;
    }else{
        mostrarNumerodeAregloRecursivo(vec,n-1);
        cout << vec[n] << endl;
    }
}
//iterativo
int busqueda(int vec[], int n, int buscado){
   int pos =-1;
   for(int i=0; i<n; i++){
        if(vec[i]== buscado){
            pos=i;
        }
    }
    return pos;
}
//recursivo
/*int busquedaRecursiva (int vec[], int n, int busc){
    if (vec[n]==busc){
    busquedaRecursiva(vec,n-1,busc);
        return n;
    }else{
        return -1;
    }
}*/
int busquedaRecursiva (int vec[], int n, int busc){
    if (n<0){
        return -1;
    }
    if (vec[n]==busc){
        return n;
    }
    return busquedaRecursiva(vec,n-1,busc);
}
//Iterativo
int busquedamenor(int vec[], int n){
int men =-1;
for (int i=0;i<n;i++){
        int j = i+1;
    if(vec[i]> vec[j]){
        men = j;
        }
    }
return men;
}
//Recursivo
int main()
{
    int vec[5]={3,45,7,67,1};
    busquedamenor(vec,5);
    //int res = busqueda(vec,5,8);
   /*int res=busquedaRecursiva(vec,4,4);
    if(res==-1){
        cout << "No se encuentra el valor" << endl;
    }else{
        cout << "Si se encuentra el valor" << endl;
    }
    //mostrarNumerodeAregloRecursivo(vec,4);
  ///  mostrarNumerodeAregloIterativo(vec,5);
  // cout<< arreglosRecurivo(vec,4) <<endl;
    //sumaArregloIterativo(5,vec);*/
    return 0;
}
