#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &n2);
    int arr2[n2];
    
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int i = 0, j = 0, k = 0;
    int result[n1 + n2];
    
    while(i < n1 && j < n2) {
        int value;
        
        if(arr1[i] < arr2[j]) {
            value = arr1[i++];
        } else if(arr1[i] > arr2[j]) {
            value = arr2[j++];
        } else {
            value = arr1[i];
            i++;
            j++;
        }
    
        if(k == 0 || result[k - 1] != value) {
            result[k++] = value;
        }
    }
    
    while(i < n1) {
        if(k == 0 || result[k - 1] != arr1[i]) {
            result[k++] = arr1[i];
        }
        i++;
    }
    
    while(j < n2) {
        if(k == 0 || result[k - 1] != arr2[j]) {
            result[k++] = arr2[j];
        }
        j++;
    }
    for(int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    
    return 0;
}
