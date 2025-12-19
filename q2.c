#include <stdio.h>

int main() {
    int a, b;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &a);

    printf("Enter elements:\n", a);
    for (b = 0; b < a; b++) {
        scanf("%d", &arr[b]);
    }

    int larg = arr[0];

    for (b = 1; b < a; b++) {
        if (arr[b] > larg) {
            larg = arr[b];
        }
    }

    printf("The largest element is: %d\n", larg);


}
