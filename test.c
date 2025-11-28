#include<stdio.h>
int main()
{
    int arr[100], freq[100];
    int n, i, j, count;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        //freq[i] = -1; 
    }
    int l;
    for(l=0;l<n;l++){
        int count=1;
        for(j=l+1;j<n;j++){
            if(arr[l]==arr[j]){
                count++;
                //freq[j]=0;
            }
        }
            freq[l]=count;
        
    }
    int k;
    for(k=0;k<n;k++){
            printf("frequency of %d is %d\n",arr[k],freq[k]);
        
    }
}
