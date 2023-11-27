#include <stdio.h>

struct Person {
    char name;
    int age;
};

int findCommonAge(struct Person personX, struct Person personY) {
    return (personX.age == personY.age) ? personX.age : -1;
}

int main() {
    struct Person personX = {'X', 25};
    struct Person personY = {'Y', 25};

    int commonAge = findCommonAge(personX, personY);

    if (commonAge != -1) {
        printf("The common age is: %d\n", commonAge);
    } else {
        printf("Persons have different ages.\n");
    }

    return 0;
}
