//Print all N integers in A in reverse order as a single line of space-separated integers.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n];//int *arr = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--){
            printf("%d ",a[i]);
    }    
        
    return 0;
}
