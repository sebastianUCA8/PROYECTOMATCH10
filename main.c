#include <stdio.h>

int main(int argc, char const *argv[]) 
{
    int cantEstudiantes;
    
    printf("cantidad de estudiante a ingresar: ");
    scanf("%d",&cantEstudiantes);
    int Carnet[cantEstudiantes];
    
    float Temperatura[cantEstudiantes][30];
    float prom[cantEstudiantes];
    float promedioEstudiantes[cantEstudiantes];
    float promTotal;
    float Final;

    for (int i = 0; i < cantEstudiantes; i++)
    {
        
        printf("Ingrese el carnet: ");
        scanf("%d",&Carnet[i]);

        for (int k = 0; k < 30; k++)
        {

            printf("Ingrese temperatura %d: ", k+1);
            scanf("%f",&Temperatura[i][k]);
            
            prom[i] += Temperatura[i][k];
        }    
        
    }
    printf("Carnet\tPromedio\n");
    for (int y = 0; y < cantEstudiantes; y++)
    {
        
        printf("%d\t", Carnet[y]);
        promedioEstudiantes[y] = prom[y]/30;

        printf("%.2f\n", promedioEstudiantes[y]);
        
        promTotal += promedioEstudiantes[y];
    }  

    Final = promTotal/cantEstudiantes;
    printf("Promedio %.2f ", Final);
    printf("\n");

    return 0;
}