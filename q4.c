
#include <stdio.h>
int main() {
    int arr[100], x, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &x);

    printf("Enter %d elements:\n", x);
    for (i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;   

    printf("Square of each element:\n");
    for (i = 0; i < x
	; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }


}
