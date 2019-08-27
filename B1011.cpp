#include<cstdio>
#include<stdlib.h>
using namespace std;
int main() {
    int n;
    long long a, b, c;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lld %lld %lld", &a, &b, &c);
        if((a + b) > c)
            printf("Case #%d: true\n", i+1);
        else 
            printf("Case #%d: false\n", i+1);
    }
    system("pause");
    return 0;
}
//在printf中注意使用/n
