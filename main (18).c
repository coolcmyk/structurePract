#include <stdio.h>
#include <string.h>

typedef struct serv {
    char nama[50];
    int age;
} Servant;

int finderByName(Servant arr[], int n, char target[], int indices[]) {
    int count = 0; // Variable to keep track of the number of matches found
    for (int i = 0; i < n; i++) {
        if (strstr(arr[i].nama, target) != NULL) {
            printf("%s\n", arr[i].nama);
            indices[count++] = i; // Store the index of the match and increment the count
        }
    }
    return count; // Return the number of matches found
}

int findByAge(Servant arr[], int n, int target, int indices[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].age == target) {
            printf("%s\n", arr[i].nama);
            indices[count++] = i;
        }
    }
    return count;
}

int main() {
    int n, type;
    char nama[50];
    scanf("%d", &n);
    Servant arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", arr[i].nama, &arr[i].age);
    }
    printf("choose the case \n");
    printf("1. search by name \n");
    printf("2. search by age \n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Enter name to search: ");
            scanf("%s", nama);
            int indices[100]; // Array to store the indices of the matches
            int count = finderByName(arr, n, nama, indices);
            if (count > 0) {
                printf("'%s' found at indices: ", nama);
                for (int i = 0; i < count; i++) {
                    printf("%d ", indices[i]);
                }
                printf("\n");
            } else {
                printf("'%s' not found\n", nama);
            }
            break;
        case 2:
            printf("Enter age to search: ");
            int age;
            int indices_age[100];
            scanf("%d", &age);
            int count_age = findByAge(arr, n, age, indices_age);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
