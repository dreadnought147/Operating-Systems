#include <stdio.h>
#include <string.h>

#include <stdio.h>  // Include the standard I/O library for printf()

// The program always starts executing from main()
int main(int argc, char *argv[]) {
    char input_buf[1024];
  if(argc!=2){
        printf("Error enter a vlaid number of inputs \n");
        return;
   }
   strcpy(input_buf,argv[1]); //copeies the argv1 at input buf
   int count =0;
  // printf("you inputed: %s\n", input_buf);
   char * temp = strtok(input_buf, " ");// take verything until you meet " " ,
   // all taken is = temp
   while(temp!=NULL){
    //printf("you inputed: %s\n", temp);
    count=count+1;
    temp = strtok(NULL, " "); //
   }
   printf("%d \n", count);



//    
//     printf("you inputed: %s\n", input_buf);
//     printf("%d",strtok(input_buf, " "));
//     printf("you inputed: %s\n", input_buf);



   // printf("ENter a word: \n");
    

 //   printf("you inputed: %s\n", input_buf);

  



//    for (int i=0; i<strlen(input_buf); i++){
//     printf("%c",input_buf[strlen(input_buf)-1-i]);
//    }
//    printf("\n");
    // Return 0 to the operating system to indicate success
    return 0;
}
