#include <stdio.h>

typedef struct {
    int x, y;
} Point;

/* TODO: return the squared distance between a and b. */
int dist2(Point a, Point b) {
    int horizontal_diff = a.x - b.x;
    int squared_horizontal_diff = horizontal_diff * horizontal_diff;

    int vertical_diff = a.y - b.y;
    int squared_vertical_diff = vertical_diff * vertical_diff;

    return squared_horizontal_diff + squared_vertical_diff;
}

int main(void) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    Point a = {0, 0};
    Point b = {0, 0};
    /* TODO: build a from (x1, y1) and b from (x2, y2). */

    a.x = x1;
    a.y = y1;

    b.x = x2;
    b.y = y2;

    printf("%d\n", dist2(a, b));
    return 0;
}
