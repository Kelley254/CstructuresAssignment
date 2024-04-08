#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 2; // Change this if you want a different size
    struct Student studentsArray[arraySize];

    // Populate the structure array
    populateStudents(studentsArray, arraySize);

    // Print the structure elements
    printStudents(studentsArray, arraySize);

    return 0;
}

