#include <stdio.h>
#include <stdlib.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

struct University* biggestUniversity(struct University data[], int n) {
    struct University* result = &data[0];
    for (int i = 1; i < n; i++) {
        if (data[i].numberOfStudents > result->numberOfStudents) {
            result = &data[i];
        }
    }
    return result;
}

int main() {
    // тест
    struct University universities[3];
    universities[0].name = "МГУ";
    universities[0].numberOfStudents = 40000;
    universities[0].rating = 10;
    universities[1].name = "МФТИ";
    universities[1].numberOfStudents = 9000;
    universities[1].rating = 9;
    universities[2].name = "Харьковский политехнический институт";
    universities[2].numberOfStudents = 30000;
    universities[2].rating = 8;

    struct University* biggest = biggestUniversity(universities, 3);
    printf("Самый большой университет: %s, количество студентов: %d\n",
           biggest->name, biggest->numberOfStudents);

    return 0;
}