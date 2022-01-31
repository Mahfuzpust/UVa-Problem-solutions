#include <iostream>

using namespace std;

int Convert(char s[]) {
    int hs = 1, ans=0;
    for (int i=9; i>=1; i--)
        if (s[i]!='.') {
            if (s[i]=='o')
                ans =ans+ hs;
            hs =hs* 2;
        }
    return ans;
}

int main() {
    char s[15];
    gets(s);
    while (gets(s)) {
        if (s[0]=='_') break;
        printf("%c", Convert(s));
    }
}
