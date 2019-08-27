#include<cstdio>
#include<stdlib.h>
int main() {
    int n, a[100000];
    scanf("%d", &n);
    int b[100000] = {0};
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    int c = 0;
    for(int i = 0; i < n; i++) {
        if(b[a[i]] == 1) {
        printf("%d", a[i]);
        c = 1;
        break;
        }
    }
    if(c == 0)
        printf("None");
    system("pause");
    return 0;
}