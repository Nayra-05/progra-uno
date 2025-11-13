#include <iostream>
#define tam 40
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
    for (int j =1+i;j<n;j++){
        if(vec[i]> vec[j]){
            men = j;
            }
        }
    }
return men;
}
//Recursivo
/*int busquedaMenorRecursivo (int vec[], int n, int men,int i){
    if(n>i){
        if(vec[n]>vec[i]){
            return i;
            busquedaMenorRecursivo(vec,n-1,men,i+1);
        }else{
            return men;
        }
    }
}*/ ///intentar en casa

//Busqueda binaria
/*int busquedaBinariaRecursiva (int veOrd[],int n, int buscado, int liminf, int limsup)
{
    int posBuscado;
    int cen=(liminf+limsup)/2;
    if (veOrd[cen]== buscado){
        posBuscado=cen;
        }else if(liminf>limsup){
        posBuscado=-1;
    }else {
        if(posBuscado<veOrd[liminf]){
            limsup=;
        }else{
            liminf=;
        }
    }

}*/

void mostrarmtrizRec(int mat[tam][tam], int fil, int col, int i,int j){
    if (i<fil){
        //terminar
    if (j==col){
        i++;
        j=0;
        cout<<endl;
    }else{
        cout << mat[i][j]<< " ";
        j++;

        }
    }
    mostrarmtrizRec(mat,fil,col,i,j);
}
int main()
{
    int mat[tam][tam];
    mat[0][0] =1;
    mat[0][1] =2;
    mat[1][0] =3;
    mat[1][1] =4;
    int vec[5]={3,45,7,67,1};
    mostrarmtrizRec(mat,2,2,0,0);
/*int men = busquedaMenorRecursivo(vec,4,-1,0);
 // int men = busquedamenor(vec,5);
  cout << "Menor es el numero : " << vec[men] << endl;
  // int res = busquedamenor(vec,5);
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
