#include "string_operations.h"

static void swap_chars(char * text, size_t i, size_t j){
    char temp;
    temp = text[i];
    text[i] = text[j];
    text[j] = temp;
}


void reverse_string(char * text) {
    int len = strlen(text);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        swap_chars(text, i, j);
    }

}
