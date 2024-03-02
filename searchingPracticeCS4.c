//practice each searching algo with struct

#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char ID[50];
    char name[50];
    int rarity;
}Student;

void bubSort(Student arr[], int n){
    Student temp;
    for(int i = 0; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j].rarity > arr[j+1].rarity){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearchRank(Student arr[], int low, int high, int targ){
    while(low <= high){
        int mid = low + (high - low) / 2;
        
        if(arr[mid].rarity == targ){
            return mid;
        }
        if(arr[mid].rarity < targ){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n,i,target;
    Student stud[100];
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++){
        scanf("%s", stud[i].ID);
        scanf("%s", stud[i].name);
        scanf("%d", &stud[i].rarity);
    }
    bubSort(stud, n);
    scanf("%d",&target);
    int index = binarySearchRank(stud, 0, n-1,target);
    if (index != -1) {
        printf("Student with rarity %d found at index %d\n", target, index);
    } else {
        printf("Student with rarity %d not found\n", target);
    }
    return 0;
}