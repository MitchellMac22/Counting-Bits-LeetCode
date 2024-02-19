//returns the number of ones 
int numofones(int k){
    int mask;
    int i=0;
    int counter=0;
    for(i=0;i<17;i++){ //2^17 > 10^5 constraint
        mask=1<<i;
        if(k & mask){ //if int and 0:16
            counter++;
        }
    }
    return counter;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    *returnSize=n+1;
    n=n+1;
    int *array = (int *)malloc(sizeof(int)*n); //allocate an array of size n(+1)
    
    //loop to populate the array with the correcr num of ones 
    for(int i=0;i<n;i++)
        array[i] = numofones(i);
    
    return array;
}
