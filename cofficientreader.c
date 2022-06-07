#include <stdio.h>

int main(void) {
    int x, y, z, e;
    FILE *fp = fopen("cmpe3.txt", "r");
    if (!fp)
        return 1;
    while (fscanf(fp, "%dx%dy%dz=%d", &x, &y, &z, &e) == 4) {
        printf("%d %d %d %d\n", x, y, z, e);
    }
    return 0;
}