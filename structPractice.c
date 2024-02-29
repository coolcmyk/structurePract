
#include <stdio.h>
#include <stdbool.h>

typedef struct servant{
    char name[100];
    char class[100];
    int rarity;
}servants;

void bubSort(servants arr[], int n){
    int i,j;
    bool stat;
    for(i = 0 ; i < n - 1 ; i++){
        stat = false;
        for(j = 0 ; j < n - i - 1; j++){
            if(arr[j].rarity > arr[j+1].rarity){
                swap(&arr[j].rarity, &arr[j+1].rarity);
                swap(&arr[j].name, &arr[j+1].name);
                swap(&arr[j].class, &arr[j+1].class);
                stat = true;
            }
        }
        if(stat==false){
            break;
        }
    }
}

void swap(int *x, *int y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
void takeServe(){
    int temp,cnt=0;
    scanf("%d", &temp);
    servants serv[100];
    for(cnt = 0 ; cnt < temp ; cnt++){
        scanf("%s", serv[cnt].name);
        scanf("%s", serv[cnt].class);
        scanf("%d", &serv[cnt].rarity);
    }
    bubSort(serv, temp);
    printf("Servant details:\n");
    for (int cnt = 0; cnt < temp; cnt++) {
        printf("Servant %d:\n", cnt + 1);
        printf("Name: %s\n", serv[cnt].name);
        printf("Class: %s\n", serv[cnt].class);
        printf("Rarity: %d\n", serv[cnt].rarity);
    }
}
int main()
{
    printf("Hello World");
    takeServe();
    return 0;
}
