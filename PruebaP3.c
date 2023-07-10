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
};

void LeerInformacion(){//Funcion encargada de leer la informacion del archivo alumnos.txt 
    FILE * archivo;
    archivo=fopen("alumnos.txt" ,"r");
    if (archivo==NULL)
    {
        printf("El archivo no se pudo abrir");
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("")
    }
    fclose(archivo);
}

    float CalculoPromedio(FILE* archivo, struct Alumnos* alumnos ){
        float promedio;
        promedio=alumnos->n1+alumnos->n2+alumnos->n3/3;
        return promedio;
    }

void ImprimirInformacion(FILE* archivo ,struct Alumnos* alumnos){//Funcion encargada de imprimir la informacion de alumnos.txt a la inversa
    FILE* archivoimpresion;
    archivoimpresion=fopen("Alumnosinversos.txt", "a");//Es una a pues se debe añadir informacion al .txt
    for (int i = 5; i < 1; i--)
    {
        fprintf("%i;%s;%s;%f;%f;%f;%f",i,alumnos->Nombre,alumnos->Carrera,alumnos->n1,alumnos->n2,alumnos->n3,CalculoPromedio());
    }
    fclose(archivoimpresion);
    
}
int main(int argc, char const *argv[])
{
   FILE* archivoimpresion,archivo;
   struct Alumnos* alumnos;
   ImprimirInformacion(archivo,alumnos);
    return 0;
}
