/*
 * Lab 3, Task 3
 * Name: Mylan SCHNEIDER
 * Student ID: 260ADB179
 *
 * Implement custom string functions:
 *   - my_strlen (return the number of characters)
 *   - my_strcpy (copy a string into dest)
 *
 * Rules:
 *   - Do not use <string.h> functions.
 *   - Use loops or pointer arithmetic.
 *   - Ensure dest has enough space.
 *
 * Required output:
 *   Length: 16
 *   Copy: Programming in C
 */

#include <stdio.h>

// Custom implementation of strlen
int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Custom implementation of strcpy
void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Ne pas oublier le caractère de fin de chaîne
}

int main(void) {
    char text[] = "Programming in C";

    // Test my_strlen
    int len = my_strlen(text);
    printf("Length: %d\n", len);

    // Test my_strcpy
    char buffer[100];
    my_strcpy(buffer, text);
    printf("Copy: %s\n", buffer);

    return 0;
}
