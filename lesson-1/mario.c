#include <stdio.h>

int get_positive_int(void);
void print_tower(int n);


int main(void) {
    int height = get_positive_int();
    print_tower(height);

}


int get_positive_int(void) {
    int height;
    do {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);
    return height;
}


void print_tower(int n) {
    for (int row = 0; row < n; row++) {

        for (int space = n - 1; space > row; space--) {
            printf(" ");
        }

        for (int col = 0; col < row + 1; col++) {
            printf("#");
        }

        printf("  ");

        for (int col = 0; col < row + 1; col++) {
            printf("#");
        }

        printf("\n");
    }
}
