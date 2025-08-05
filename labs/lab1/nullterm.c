// #include <stdio.h>
// #include <string.h>

// int main(int argc,char *argv[]){
//     char input_buf[10];
//     int hi;
// strncpy(input_buf, argv[1], sizeof(input_buf));
// // for (int i =0; i<sizeof(input_buf); i++){
// //     printf("%c \n", input_buf[i]);
// //     if (input_buf[i]!='\0'){ 
// //     hi = 257;
// //     }
// // }

//     printf("%s \n", input_buf);

//     return 0;

// }

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char input_buf[10];  // Uninitialized (could contain garbage)
    strncpy(input_buf, "1234567890ABC", sizeof(input_buf));  // No space for '\0'!
    
    // Print with %s (undefined behavior: could print garbage or crash)
    printf("Broken output: %s\n", input_buf);  

    return 0;
}