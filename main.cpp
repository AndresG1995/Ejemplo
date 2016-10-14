/* 
 * File:   main.cpp
 * Author: Andres
 *
 * Created on 22 de agosto de 2016, 11:59
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int numero[4];
double promedio=0;
for(int i = 1; i<= 4;i++){
cout<<"Numero: "<<endl;
cin>>numero[i];
}
for(int i = 1; i<= 4;i++){
if( numero[i]%2==0 || numero[i]%3==0 || numero[i]%5==0 || numero[i]%7==0 || numero[i] == 1)
cout<<"Numero: "<<numero[i]<<" no primo."<<endl;
else
cout<<"Numero: "<<numero[i]<<" primo."<<endl;
promedio= promedio+numero[i];
}
cout<<"Promedio: "<<promedio/4<<endl;
    return 0;
}

