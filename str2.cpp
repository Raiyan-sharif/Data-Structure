#include <cstdio>

int StrLen(char a[]) {
    int count = 0;
    for(int i = 0; a[i] != '\0'; ++i) {
        count++;
    }
    return count;
}

char* StrCat(char a[], char b[]) {
    char c[300];
    int i;

    for(i = 0; i < StrLen(a); ++i) {
        if(a[i] != '\n')
            c[i] = a[i];
    }
    for(i = 0; i < StrLen(b); ++i) {
        c[StrLen(a) + i - 1] = b[i];
    }

    c[StrLen(a) + i - 1] = '\0';
    return &c[0];
}

int main() {

    char a[100], b[100];

    printf("Enter string 1: ");
    fgets(&a[0], 100, stdin);
    printf("Enter string 2: ");
    fgets(&b[0], 100, stdin);

    printf("\n\nResult: %s\n", StrCat(a, b));

    return 0;
}
