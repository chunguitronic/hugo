#include <stidio.h>
int main(){
    int any;
    printf("introdueix l'any:");
    scanf("%d", &any);
    if(any%4==0)
        if(any%100==0)
            if(any%400==0)
                printf("Sí que es traspàs\n");
            else printf("No és de traspàs\n");
        else printf("Sí que es traspàs\n");
    else printf("No és de traspàs\n");
    return 0;
}
