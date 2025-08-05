void miniMaxSum(int arr_count, int* arr) {
    int min, max;
    long long sum = 0 , min_sum, max_sum;
    
    for (int i=0;i<arr_count;i++){
        sum = sum +arr[i];
        
        min  = arr[0];
        max = arr[0];
    }
    for (int i = 0; i< arr_count; i++){
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    min_sum = sum-max;
    max_sum = sum-min;

printf("%lld %lld\n", min_sum, max_sum);

}
