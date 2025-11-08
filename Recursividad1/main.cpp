#include <iostream>

using namespace std;

void factorial (int n){
int fact=1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
    }
    cout << "El factorial es: " << fact << endl;
}
int factorialRecursivo(int n){
    int facr;
   if(n==0){
        facr=1;
   }else{
    facr = n*factorialRecursivo(n-1);
   }
    return facr;

}

int factorialRecursivo2(int n){
    int facr;
   if(n==0){
        return 1;
   } //caso base
    facr = n*factorialRecursivo(n-1); //caso recursivo donde se llama nuevamente a la funcion
    return facr;

}
///mostrar n veces holamundo
 //iterativa
 void mostrarMundo(int n){
 for(int i=0;i<n;i++){
    cout << "Hola Mundo!"<< endl;
    }
 }
void mostrarMundoRecursivo(int n){
    if(n == 0){
    //terminar
    }else{
        mostrarMundoRecursivo(n-1);
        cout << "Hola Mundo!" << endl;
    }
}
///Sumar de uno hasta n

void suma(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    cout << sum <<endl;
}

int sumaNumero(int n){
        int sum=1;
    if(n==0){
        return 0;
    }else{
       sum=sum+sumaNumero(n-1);
    }
    return sum;
}

void mostrarParImpar(int n){
    if(n==0){
            return;
        //no se hace nada
    }else{
        if(n%2==0){
            cout << n <<" es Par " << endl;
        }else{
            cout << n <<" es Impar " << endl;
        }
        mostrarParImpar(n-1);
    }
}

void mostrarParImparOtraManera(int n){
    if(n>0){
           mostrarParImpar(n-1);
     if(n%2==0){
            cout << n <<" es Par " << endl;
        }else{
            cout << n <<" es Impar " << endl;
        }
    }
}

int fibonacci(int num){
    int a =0, b=1;
    int res, aux,cont;
    if(num==0){
        res=a;
    }
    else if(num==1){
        res=b;
    }else{
        for(cont=2;cont<=num;cont++){
     aux=a+b;
     a=b;
     b=aux;
        }
        res=aux;
    }
    return res;
}

int fibonacciRecursivo(int k){
    if(k==0){
        return 0;
    }
    if(k==1){
        return 1;
    }
    return fibonacciRecursivo(k-1) + fibonacciRecursivo(k-2);
}
int main()
{
    int n;
    cout << "inrgrese n:" << endl;
    cin>> n;
    cout << fibonacciRecursivo(n);
    //mostrarParImparOtraManera(n);
   // mostrarParImpar(n);
    /*suma(n);
    int repd=sumaNumero(n);
    cout << repd << endl;
    //mostrarMundoRecursivo(n);
    //mostrarMundo(n);
    /*int res=factorialRecursivo(n);
    cout << res << endl;
    cout << "-----------"<<endl;
    int rep =factorialRecursivo2(3);
    cout << rep << endl;
   // factorial(n);
    /*int fact=1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
    }
    cout << "El factorial es: " << fact << endl;*/
    return 0;
}
