#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*
    int n;
    printf("give me the month number ");
    scanf("%d", &n);
    printf("u entered %d\n", n);
    switch (n) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;
        case 2:
            printf("28/29 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        default:
            printf("that is not a valid month number!");
    }

    int n=1, result=0;
start_loop:
    if (n >= 10) {
        goto end_loop;
    }
    result += n;
    n++;
    goto start_loop;
end_loop:
    printf("result = %d\n", result);
     */

    srand(time(NULL));
    int i, inside = 0, iterations=1000000000;
    for (i=0; i<iterations; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
//        printf("Random x=%f, y=%f\n",x, y);
        double res = x*x + y*y;
        if (res < 1)
            inside++;
    }
    double pi = 4.0 * inside / iterations;
    printf("my computed pi=%f\n", pi);

    return 0;
}
