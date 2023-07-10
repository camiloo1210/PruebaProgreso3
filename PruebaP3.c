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

void LeerInformacion(struct Alumnos* alumnos){//Funcion encargada de leer la informacion del archivo alumnos.txt 
    FILE * archivo;
    archivo=fopen("alumnos.txt" ,"r");
    if (archivo==NULL)
    {
        printf("El archivo no se pudo abrir");
    }
    
    for (int i = 0; i < 4; i++)
    {
        fscanf(archivo,"%i;%s;%s,%f,%f,%f\n",alumnos->Numero,alumnos->Nombre,alumnos->Carrera,alumnos->n1,alumnos->n2,alumnos->n3);
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
    for (int h = 5; h < 1; h--)
    {
        fprintf("%i;%s;%s;%f;%f;%f;%f\n",h,alumnos->Nombre,alumnos->Carrera,alumnos->n1,alumnos->n2,alumnos->n3,CalculoPromedio(archivo,alumnos));
    }
    fclose(archivoimpresion);
    
}
int main()
{
   struct Alumnos* alumnos;
   FILE* archivoimpresion,archivo;
   ImprimirInformacion(archivoimpresion,alumnos);
   LeerInformacion();
    return 0;
}
