#include <iostream>

using namespace std;
int main() {
  //1
 /*
  int x;
  cout << "ingrese edad"; cin>>x;
  (x<=0 or x>102)? cout<<"no es una edad validad"<<endl:cout<<"edad valida"<<endl;
  (x<18)? cout<<"Es una persona menor de edad ":cout<<"Es una persona mayor de edad ";

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
    int a,b,c;
    int promedio;
    cout<<"ingrese un numero: "; cin>>a;
    cout<<"ingrese un numero: "; cin>>b;
    cout<<"ingrese un numero: "; cin>>c;

    (a>=b && a>=c)?cout<<"mayor: "<<a<<endl:(b>=c)?cout<<"mayor: "<<b<<endl:cout<<"mayor: "<<c<<endl;
    (a<=b && a<=c)?cout<<"menor: "<<a<<endl:(b<=c)?cout<<"menor: "<<b<<endl:cout<<"menor: "<<c<<endl;

    promedio =(a+b+c)/3;
    cout<<"el promedio es: "<<promedio<<endl;
    


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
    int count=1;
    int primo=2;
    int y=1;
    cout << "ingrese numero: "; cin>>x;
    while(count <= x){
     if(primo % d == 0){
      cout << primo << ",";
      cont++;
    }
    d=2;
    primo++;
    }
    else{d++;}}
    
    


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
    
    //8
    int x;
    int y=10000;
    int z=100000;
    int w=10;
    int t=1;
    int b;
    int a;
    int c;
    cout << "ingresa un numero: ";
    cin>>x;
    for(int i=0;i<=1;i++){
    b = x%z/y;
    a = x%w/t;
     if (a==b){
       c+=1;
     }
    y=y/10;
    z=z/10;
    w=w*10;
    t=t*10;
    b = 0;
    a= 0;
    }
    if (c==2){
      cout << "palindrome";
    }else{
      cout << "no es palindrome";
    }


    //9
      int x;
      cout << "ingresa un año: "; cin>>x;
    if (x%4==0 || x%400==0){
        if(x%100!=0)
            cout<<"es año bisiesto"<<endl;
        else{
        cout<<"es un año comun"<<endl;
        }
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

