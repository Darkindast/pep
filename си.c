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
    int ch,f,r;
    scanf("%d", &ch);
    while (ch != palindrom(ch)){
        f = palindrom(ch);
        r = palindrom(f);
        ch = f + r;
    }
    printf("%d\n", ch);
    return 0;
}
