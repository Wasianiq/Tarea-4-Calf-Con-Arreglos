#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
    int i, contRe=0, contAp=0;
    float Calf[10];
    float promRe, promAp, sumRe=0, sumAp=0;
    cout<<"Ingresa las 10 Calificaciones: "<<endl;
    for(i=0;i<10;i++)
{
cin >> Calf[i];
if(Calf[i]<6)
{
 contRe++;
 sumRe+=Calf[i];
    }
    else
    {
        contAp++;
        sumAp+=Calf[i];
    }
}
promRe = sumRe/contRe;
promAp = sumAp/contAp;
cout<<"Cantidad de Calificaciones Aprobatorias: "<<contAp<<endl;
cout<<"Promedio de Calificaciones Aprobadas: "<<promAp<<endl;
cout<<"Cantidad de Calificaciones Reprobatorias: "<<contRe<<endl;
cout<<"Promedio de Calificaciones Reprobadas: "<<promRe<<endl;
getch();
}  