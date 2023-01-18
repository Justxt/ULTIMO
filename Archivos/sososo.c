#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    char buffer[100];
    double pi;
    int res, mul;

    archivo=fopen("vector.txt","r+");
    archivo2=fopen("vector1.txt","w");

        if (archivo==NULL){
            if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
}

        for(int i=0; i<100; i++){
            fscanf(archivo, "%d", &mul);
        res = mul * 3;
        fprintf(archivo2,"%d\n",res);

    }

     fclose(archivo);
     fclose(archivo2);
     return 0;
}
