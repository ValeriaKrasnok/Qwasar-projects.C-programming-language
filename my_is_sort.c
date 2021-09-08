```
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* param_1)
{   
    int i = 0;
    int count1=0;
    int count2=0;
    if((*param_1).size==0){
        return true;
    }
    while(i<((*param_1).size)-1){
        if((*param_1).array[i]>=(*param_1).array[i+1]){
            count1++;
        }
        if((*param_1).array[i]<=(*param_1).array[i+1]){
            count2++;
        }
    i++;
    }
    if(count1==(*param_1).size-1 || count2==(*param_1).size-1){
        return true;
    }
    if(count1<(*param_1).size && count2<(*param_1).size){
        return false;
    }
    
}





// int main(){
//     int arr[3] = {};
//     integer_array test = {
//         .size = 3,
//         .array = arr
//     };
//     integer_array*ptr_test;
//     ptr_test = &test;
//     printf("%d", my_is_sort(ptr_test));
//     return 0;
// }
```
