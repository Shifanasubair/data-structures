#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int uset[] = {1, 2, 3, 4, 5, 6, 7, 8,9,10}; 
int SIZE = 9;

typedef struct bit {
    unsigned char x:1;
}bit;
void readset(struct bit s[], int n);
void printset(struct bit s[]);
void unionset(struct bit a[], struct bit b[], struct bit c[]);
void intersect(struct bit a[], struct bit b[], struct bit c[]);
void difference(struct bit a[], struct bit b[], struct bit c[]);
int main() {
    struct bit a[10] = {0}, b[10] = {0}, c[10] = {0}; 
    int n;
    printf("Number of elements in set A: ");
    scanf("%d", &n);
    readset(a, n);
    printf("Number of elements in set B: ");
    scanf("%d", &n);
    readset(b, n);
    printf("Set A: ");
    printset(a);
    printf("Set B: ");
    printset(b);
    unionset(a, b, c);
    printf("A U B = ");
    printset(c);
    intersect(a, b, c);
    printf("A intersection B = ");
    printset(c);
    difference(a, b, c);
    printf("A - B = ");
    printset(c);
    return 0;
}

void readset(struct bit s[], int n) {
    int i, x, k;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        for (k = 0; k <= SIZE; k++) {
            if (uset[k] == x) {
                s[k].x = 1;
                break;
            }
        }
    }
}

void printset(struct bit s[]) {
    int k;
    printf("{");
    for (k = 0; k <= SIZE; k++) {
        if (s[k].x == 1) {
            printf("%d ", uset[k]);
        }
    }
    printf("}\n");
}

void unionset(struct bit a[], struct bit b[], struct bit c[]) {
    int k;
    for (k = 0; k < SIZE; k++) {
        c[k].x = a[k].x | b[k].x;
    }
}

void intersect(struct bit a[], struct bit b[], struct bit c[]) {
    int k;
    for (k = 0; k <= SIZE; k++) {
        c[k].x = a[k].x & b[k].x; 
    }
}

void difference(struct bit a[], struct bit b[], struct bit c[]) {
    int k;
    for (k = 0; k <= SIZE; k++) {
        c[k].x = a[k].x & !b[k].x; 
    }
} 
