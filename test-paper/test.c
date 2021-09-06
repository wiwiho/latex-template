#include<stdio.h>

int main(){
    int T = 5, ans = 0;
    while (T--)
        ans += T + 10; __(1)__
    printf("%d\n", ans);

    return 0;
}