#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main() {
    string s;
    int a[1000], b[1000], sum = 0, j = 0;
    cin>>s;
    for(int i = 0; i < s.length(); i++)
        a[i] = s[i] - '0';
    for(int i = 0; i < s.length(); i++)
        sum +=a[i];
    string m[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    while (sum != 0) {
        b[j] = sum %10;
        sum /= 10;
        j++;
    }
    for(int i = j-1; i >= 1; i--)
    cout<<m[b[i]]<<" ";
    cout<<m[b[0]];
    system("pause");
    return 0;
}