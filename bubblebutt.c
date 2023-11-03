#include <stdio.h>
#define SIZE 5

int *bubblebutt(int* v) {

    for(int i = 0; i < SIZE-1; i++) {

        for(int j = i + 1; j < SIZE; j++) {

            if(v[j] < v[i]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

        }


    }
    return v[0];

}


int main() {

    int vec[SIZE];
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &vec[i]);
    }

    vec[0] = bubblebutt(vec);

    for(int i = 0; i < SIZE; i++) {
    printf("%d ", vec[i]);
    }


    return 0;
}