int binSearch(int arr[], int low, int high, int target){
    while(low <= high){
        mid = low + (high - low) / 2;
        
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

void bubSort(int arr[], int n){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }}
}
