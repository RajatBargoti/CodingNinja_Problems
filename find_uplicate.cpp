int duplicateNumber(int *arr, int size)
{
    //Write your code here
    int ans =0;
    for(int i=0;i<size;i++){
      int c=0;
    for(int j=0;j<size;j++)
    {
        if (arr[j]==arr[i])
        c++;
        if(c>=2)
            return arr[i];


    }
    }
    return 0;
}
