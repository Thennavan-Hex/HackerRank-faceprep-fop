#include <stdio.h>

int main() {
    int b, runs_total, runs, bb;
    float t, oc, rc, rt;

    scanf("%d", &b);
    scanf("%d", &runs_total);
    scanf("%d", &runs);
    scanf("%d", &bb);

    t = b / 6;
    oc = bb / 6 + (float)(bb % 6) / 10;
    rc = runs / oc;
    rt = runs_total / t;

    printf("%.0f\n", t);
    printf("%.1f\n", oc);
    printf("%.1f\n", rc);
    printf("%.1f\n", rt);
    if (rc >= rt) {
        printf("Eligible to Win");
    } else {
        printf("Not Eligible to Win");
    }

    return 0;
}
