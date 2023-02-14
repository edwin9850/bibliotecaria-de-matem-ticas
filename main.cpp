/* 8/02/2023
autor: edwin sebastian pardo
utilizar la bibliotecaria de matematicas
*/
#include <iostream>
#include <cmath> //biblioteca de matematicas
#include <vector>
using namespace std;

//funcion principal
int main() {
  
//creo los datos y hago operaciones 
  double x1 = 4.5, x2 = 13, x3 = 1.5;
  cout<<"\n number square root"<<endl;
  cout<<"\n la raiz de "<<x1<< " es "<<sqrt(x1); // saco la raiz cuadrada de x1
  cout<<"\n la raiz de "<<x2<< " es "<<sqrt(x2); // saco la raiz cuadrada de x2
  cout<<"\n la raiz de "<<x3<< " es "<<sqrt(x3)<<endl; // saco la raiz cuadrada de x3

  cout<<"\n la muntiplicacion de todas es "<<x1*x2*x3; //la multiplicacion de estos datos

  return 0;
  }