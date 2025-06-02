#include "string_utils.h"

void my_append(char* dest, const char* src) {
    // Знайти кінець dest
    int i = 0;
    while (dest[i] != '\0') ++i;
    int j = 0;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}