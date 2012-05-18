#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = argc;

    while(i > 0) {
        int a = i - 1;
        printf("arg %d: %s\n", i, argv[a]);
        i--;
    }

    char *states[] = {"California", "Oregon", "Washington", "Texas"};

    i = 4;
    while(i > 0) {
        int a = i - 1;
        printf("state %d: %s\n", i, states[a]);
        i--;
    }

    i = 4;
    while(i > 0) {
        int a = i - 1;
        states[a] = argv[a];
        printf("argv into state at %d: %s\n" ,a, states[a]);
        i--;
    }

    return 0;
}
