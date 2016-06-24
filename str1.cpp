#include <cstdio>

int StrLen(char a[]) {
    int count = 0;
    for(int i = 0; a[i] != '\0'; ++i) {
        count++;
    }
    return count;
}

int WordCount(char a[]) {
    int count = 0;
    for(int i = 0; i < StrLen(a); ++i) {
        if(a[i] == ' ') {
            count++;
        }
    }
    return ++count;
}

int main() {
    char a[100];

    printf("Enter a string: ");
    fgets(&a[0], 100, stdin);

    printf("String Length: %d\n", StrLen(a));
    printf("Number of Words: %d\n", WordCount(a));
    return 0;
}
