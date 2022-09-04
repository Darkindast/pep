#include <stdio.h>

int palindrom(int n){
    int s = 0;
    while (n > 0){
        s = s *10 + n % 10;
        n /=10;
    }
    return s;
}

int main(){
    int ch, n, i = 0,f,r;
    scanf("%d %d", &ch, &n);
    for (;i < n; ++i){
        f = palindrom(ch);
        r = palindrom(f);
        ch = f + r;
    }
    printf("%d", ch);
    return 0;
}
