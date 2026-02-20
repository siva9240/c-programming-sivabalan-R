#include <stdio.h>

int main() {
    int i;
    long long ll;
    float f;
    double d;
    char c;
    int b;   

    scanf("%d %lld %f %lf %c %d", &i, &ll, &f, &d, &c, &b);

   
    printf("Integer: %d\n", i);
    printf("Long Long: %lld\n", ll);
    printf("Float: %g\n", f);
    printf("Double: %g\n", d);
    printf("Character: %c\n", c);
    printf("Boolean: %d\n", b);

    return 0;
}
