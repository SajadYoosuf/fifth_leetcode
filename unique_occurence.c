#include <stdio.h>
#include <stdbool.h>
bool uniqueOccurrences(int* arr, int arrSize) {
    int freq[1000], k = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] != 1001) {
            int count = 1;
            for (int j = i + 1; j < arrSize; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = 1001;
                    count++;
                }
            }
            freq[k++] = count;
        }
    }
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (freq[i] == freq[j])
                return false;
        }
    }
    return true;
}
int main(){
    int numbers[100];
    int size;
    printf("enter your array size:");
    scanf("%d\n",&size);
    printf("enter your array values:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&numbers[i]);
    }
    bool result=uniqueOccurrences(numbers,size);
    printf("%s",result?"true":"false");
    
}