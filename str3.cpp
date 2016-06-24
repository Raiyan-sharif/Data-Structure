#include <cstdio>
#include <iostream>
using namespace std;

int StrLen(char a[]) {
    int count = 0;
    for(int i = 0; a[i] != '\0'; ++i) {
        count++;
    }
    return count;
}
int find_index(char src[], char sub[]) {

}

int main() {

    char a[100], b[100];

    printf("Enter string: ");
    fgets(&a[0], 100, stdin);
    printf("Enter sub-string to find index: ");
    fgets(&b[0], 100, stdin);

    printf("\n%d", find_index(a, b));

    return 0;
}
