#include <stdio.h>

// Dizinin en büyük elemanını bulan fonksiyon
int maxRecursive(int arr[], int n) {
    // Eğer dizinin sadece bir elemanı varsa, o eleman en büyüktür
    if (n == 1)
        return arr[0];
    
    // Dizinin en büyük elemanını bulmak için bir alt dizi oluşturulur
    int max_of_rest = maxRecursive(arr + 1, n - 1);

    // Bulunan en büyük eleman ile dizinin ilk elemanı karşılaştırılır
    if (arr[0] > max_of_rest)
        return arr[0];
    else
        return max_of_rest;
}

int main() {
    int arr[] = {10, 7, 45, 32, 87, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = maxRecursive(arr, n);
    printf("En buyuk eleman: %d", max);
    return 0;
}
