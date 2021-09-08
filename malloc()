#include <stdio.h> 
#include <stdlib.h>

int* my_range(int param_1, int param_2)
{   

    if(param_1==param_2 || param_1>param_2){
        return NULL;
    }
    int* p = (int*)malloc((param_2-param_1)*sizeof(int));
    for(int i= 0; i<param_2-1; i++){
        p[i]=param_1;
        param_1++;
    }
    return p;
}



// int main(){
//     printf("%ls", my_range(1,4));
//     return 0;
// }




#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

char* my_strdup(char* param_1)
{
    int lenght = strlen(param_1);
    char* p = (char*)malloc(lenght*sizeof(char));
    for(int i=0; i<lenght; i++){
        p[i]=param_1[i];
    }
    return p;
}





// int main() {
//     printf("%s", my_strdup("abc"));
//     return 0;
// }
