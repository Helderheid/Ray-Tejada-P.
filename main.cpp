#include <iostream>

using namespace std;
int main() {
  //1
 /*
  int x;
  cout << "ingrese edad"; cin>>x;
  if (x<=0 or x>102){
  cout << "no es una edad validad";}

  else if (x>0 and x<17){
  cout << "Es una persona menor de edad";}

  else if (x>17 and x<101){
  cout << "Es una persona mayor de edad";}

//2

int x;
int a=1;
int aux=0;
cout << "ingrese un numero: "; cin>>x;

while (a!=x){
 aux=a;
 cout <<aux<< ",";
 a++;
 if (a==x){
     cout << x;
     break;
}

}



  //3

   int mayor=-99999;
     int menor=99999;
     int suma=0;
     int promedio=0;
     int x=0;
     int a=0;
     for (int i = 0; i <= 4; i++){
        //cout << "menor "<<menor << " x " <<x << " mayor " <<mayor <<endl;

        cout << "ingresa un numero: ";cin>>x;
        suma = suma +x;
        a=a+1;

        if (x>mayor){
            mayor=x;
            }
        if (x<menor){
            menor=x;
        }
     }
      promedio = suma/a;

      cout << "el promedio es: "<< promedio <<endl;
      cout << "el mayor es: "<<  mayor <<endl;
      cout << "el menor es: "<<  menor <<endl;


    //4
    int a,b;
    cout << "ingrese numero 1: "; cin>>a;
    cout << "ingrese numero 2: "; cin>>b;

    if (b%a==0){
       cout << a <<" Es multiplo de "<<b << endl;
    }
    if (a%2==0 and b%2==0){
      cout << a <<" y "<<b<<" son multiplos de 2"<<endl;
    }
    if ((a*a)==b){
      cout << a <<" elevado al cuadrado es = "<<b<<endl;
    }

    //5
     int y=0;
     int x;
         cout<<"Ingrese numero"; cin>>x;
      
         for(int i=1;i<(n+1);i++){
         if(x%i==0){
             y++;
            }
         }
         if(y!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }

    //6
    int x;
    cout << "ingrese numero: "; cin>>x;
    int y=x;
    for (int i=0; i<=x;i++){
    y=y-1;
    if(y%2!=0){
      cout << y<<"---";
      if (y==1){
        i=x;
      }
    }

    }

    //7
        int x;
    int y=10000;
    int z=100000;
    int b=0;

    cout << "ingresa un numero: ";
    cin>>x;

    for(int i=0;i<=4;i++){
    b = x%z/y;
    cout << b <<" ";

    y=y/10;
    z=z/10;
    b = 0;
    }

    //9
      int x;
      cout << "ingresa un año: "; cin>>x;
      if (x%4==0){
         cout << "es año bisiesto";
      }else{
        cout << "es un año comun";
      }


    //10
    int x,aux;
    int val=1;
    int val2=0;
    cout << "ingresa un numero: "; cin>>x;

    for (int i=0;i<=x;i++){
      aux=val;
      val= val + val2;
      val2=aux;
      cout << val<<endl;
    }


    //extra
    int x;
    int fac=1;
    cout << "ingresa un numero: "; cin>>x;
    int y;
    y=x;

    for (int i=0;i<=x;i++){
      fac=fac*x;
      x=x-1;
    }
    cout << "el factorial de "<<y<<" es: "<< fac;

*/
    return 0;

   }

