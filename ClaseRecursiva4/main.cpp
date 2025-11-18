#include <iostream>

using namespace std;

int factorialRecursivo(int n, int fact){
   if(n==0){
        return 1;
   }
      return n*factorialRecursivo(n-1,n*fact);
}

int sumade1aNOPC(int n, int sum){
    if(n==0){
        return sum;
    }
    return sumade1aNOPC(n-1,n+sum);
}

int cocienteDivision(int a,int b,int cont){
    if((a-b)<0){
        return cont;
    }
    return cocienteDivision(a-b,b,cont+1);
}

int sumaVecRec(int vec[], int n, int sum){
    if(n<0){
        return sum;
    }
    return sumaVecRec(vec,n-1,sum+vec[n]);
}

int sumaRecVector (int vec[], int n){
    return sumaVecRec(vec,n,0);
}
void intercambio(int num,int num2){
    int aux=num;
    num=num2;
    num2=aux;
}
void particion(int vec[],int i, int d){
    int piv=vec[(i+d)/2];
    while(i<=d){
        while(vec[i]<piv){
            i=i+1;
        }
        while(vec[d]>piv){
            d=d-1;
        }
        if(i<=d){
            intercambio(vec[i], vec[d]);
            i=i+1;
            d=d-1;
        }
    }
}
void quickSort(int vec[], int izq, int der){
    int i=izq;
    int d=der;
    if(izq <der){
        particion(vec,i,d);
        if(izq<d){
            quickSort(vec,izq,d);
        }
        if(izq<d){
            quickSort(vec,i,der);
        }
    }

}
int main()
{
   int  vec[5]= {5,2,1,3,4};
   quickSort(vec,0,4);
   cout << "VecOrd" << vec << endl;
  // cout << "La suma del vector es: " << sumaRecVector(vec,5);
    //cout << factorialRecursivo(8,1)<< endl;
    //cout<< "La suma es: "<<sumade1aNOPC(10,0);
    //cout << "El cociente es: "<< cocienteDivision(5,2,0) << endl;
    return 0;
}
