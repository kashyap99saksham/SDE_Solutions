void print2largest(int arr[], int arr_size) 
{ 
    int i, first, second; 
    if (arr_size < 2) { 
        printf(" Invalid Input "); 
        return; 
    } 
    int largest = second = INT_MIN; 
    for (int i = 0; i < arr_size; i++) { 
        largest = max(largest, arr[i]); 
    } 
    for (int i = 0; i < arr_size; i++) { 
        if (arr[i] != largest) 
            second = max(second, arr[i]); 
    } 
    if (second == INT_MIN) 
        printf("There is no second largest element\n"); 
    else
        printf("The second largest element is %d\n", second); 
} 