#include <stdio.h>
#include <string.h>
typedef struct peserta{
    char ID[6];
    int ses1,ses2,ses3;
}Peserta;

void bubSort(Peserta arr[], int n){
    int i,j;
    Peserta temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j].ses3<arr[j+1].ses3){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else if(arr[j].ses3==arr[j+1].ses3 && arr[j].ses2<arr[j+1].ses2){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else if(arr[j].ses3==arr[j+1].ses3 && arr[j].ses2==arr[j+1].ses2 && arr[j].ses1 < arr[j+1].ses1){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,m;
        scanf("%d", &n);
        scanf("%d", &m);
        Peserta p[n];
        char targ[6];
        scanf("%s", targ);
        for(int i=0;i<n;i++){
            scanf("%s %d %d %d", p[i].ID,&p[i].ses1,&p[i].ses2,&p[i].ses3);
        }
        bubSort(p,n);
        int lulus = 0;
        for(int i=0;i<n;i++){
            if(strcmp(p[i].ID, targ) == 0){
                if(i<m){
                    printf("YA\n");
                }
                else{
                    printf("TIDAK\n");
                }
                break;
            }
        }
        
    }
    return 0;
}
    

