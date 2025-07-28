#include <stdio.h>  // Include the standard I/O library for printf()

// The program always starts executing from main()
int main(int argc, char *argv[]) {
    printf("YOu passed in the %d inputs \n", argc);

    for (int i =0; i<argc; i++){
        printf("input number %d is: %s \n", i, argv[i]);
    }
    

    // Return 0 to the operating system to indicate success
    return 0;
}
