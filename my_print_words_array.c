#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

int my_putchar(char c) {  
    return write(1, &c, 1);
}

void my_putstr(char* param_1) { 
    int i = 0; 
    while(param_1[i]) {
        my_putchar(param_1[i]);
        i++;
    }
}


void my_print_words_array(string_array* param_1)
{
    for(int i=0; i<(*param_1).size; i++){
        my_putstr((*param_1).array[i]);
        my_putchar('\n'); //each word will be followed by a newline
    }
 }

// int main() {
//     char *arr[3] = {"abc", "def", "gh"};
//     string_array test = {
//         .size = 3,
//         .array = arr
//     };
//     string_array*ptr_test;
//     ptr_test = &test;
//     my_print_words_array(ptr_test);
//     return 0;
// }
