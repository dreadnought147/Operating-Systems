#include <stdio.h>
#include <string.h>

#include <stdio.h>  // Include the standard I/O library for printf()

// The program always starts executing from main()
int main(int argc, char *argv[]) {
    char input_buf[100];

//    / printf("ENter a word: \n");
fgets(input_buf, sizeof(input_buf), stdin);

  //  printf("you inputed: %s\n", input_buf);

   if(!argv[0]){
    printf("Error enter a vlaid input, input was %s: \n" , argv[0]);
   }

   for (int i=0; i<strlen(input_buf); i++){
    printf("%c",input_buf[strlen(input_buf)-1-i]);
   }
   printf("\n");
    // Return 0 to the operating system to indicate success
    return 0;
}
