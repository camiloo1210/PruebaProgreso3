#include<stdio.h>

//
struct Alumnos
{
    int Numero;
    char Nombre[20];
    char Carrera[30];
    float n1;//Nota 1 progreso
    float n2;//Nota 2 progreso
    float n3;//Nota 3 progreso
    float Promedio; //promedio de las 3 notas anteriores 
};

void LeerInformacion(){
    FILE * archivo;
    archivo=fopen("alumnos.txt" ,"r")
}
void ImprimirInformacion(){
    FILE* archivoimpresion;
    archivoimpresion=fopen("Alumnos inversos", "a")//Es una a pues se debe añadir informacion 
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
