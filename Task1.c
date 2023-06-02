#include <stdio.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    if (start.x == finish.x || start.y == finish.y) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    struct Coord start, finish;

    printf("введите координаты ладьи ");
    scanf("%d %d", &start.x, &start.y);

    printf("введите координаты другой клетки ");
    scanf("%d %d", &finish.x, &finish.y);

    if (canGet(start, finish) == 1) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
