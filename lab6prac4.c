#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];
    printf("Enter the elements of the source array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }
    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[i];
    }
    printf("Elements of the destination array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    return 0;
}
