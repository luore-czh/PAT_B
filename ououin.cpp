#include<cstdio>
#include<string>
#include<stdlib.h>
using namespace std;
int main() {
    int a, b, m = 0;
    scanf("%d%d", &a, &b);
    string c = to_string(a + b);
    int len = c.length();
    for(int i = 0; i < len; i++) {
        printf("%c",c[i]);
        if(c[i] == '-')
        m = 1;
        else
        m = 0;
        if((i + 1 -m) != 0 && (len-(i + 1 - m)) % 3 == 0 && i != (len-1))
        printf(",");
    }
    system("pause");
    return 0;
}
