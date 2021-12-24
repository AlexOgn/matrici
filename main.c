#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int a, b;
    int size;
} Matrix;

Matrix* init_matrix(int a, int b){
    Matrix* matrix = malloc(sizeof(Matrix));

    matrix->a = a;
    matrix->b = b;
    matrix->size = matrix->a*matrix->b;
}

Matrix* multiply_matrixes(Matrix* m1, Matrix* m2){
    Matrix* matrix = malloc(sizeof(Matrix));

    matrix->a = m1->a;
    matrix->b = m2->b;
    matrix->size = m1->a * m1->b * m2->b;
}

void print_matrix(Matrix* m){
    printf("%d %d %d", m->a, m->b, m->size);
}

int main(){
    int n;
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * (n+1));
    for(int i=0;i<=n;i++){
        scanf("%d", &arr[i]);
    }

    Matrix** matrices = malloc(sizeof(Matrix) * n);
    for(int i=0;i<n;i++){
        matrices[i] = init_matrix(arr[i], arr[i+1]);
    }


}
