#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_LEN 1024


int main(){
    char* argv[100];        //user command
    char* path= "/bin/";    //set path at bin
    char fullpath[20];      //full file path
   char line[BUFFER_LEN];  //get command line
    int argc;               //arg count

while(1){

    printf("$ ");                    

        if(!fgets(line, BUFFER_LEN, stdin)) {  //get command and put it in line
            break;                                
        size_t length = strlen(line);
        if (line[length - 1] == '\n')
            line[length - 1] = '\0';
    }
    if(strcmp(line, "exit")==0){            //check if command is exit
        break;
    }

    char *token;                  //split command into separate strings
    token = strtok(line," ");
    int i=0;
    while(token!=NULL && i < 100){
        argv[i]=token;      
        token = strtok(NULL," ");
        i++;
    }
    argv[i]=NULL;                     //set last value to NULL for execvp

    argc=i;                           //get arg count
    for(i=0; i<argc; i++){
        printf("%s\n", argv[i]);      //print command/args
    }
    strcpy(fullpath, path);           //copy /bin/ to file path
    strcat(fullpath, argv[0]);            //add program to path

    for(i=0; i<strlen(fullpath); i++){    //delete newline
        if(fullpath[i]=='\n'){      
            fullpath[i]='\0';
        }
    }

    int pid= fork();              //fork child

    if(pid==0){               //Child
        execvp(progpath,argv);
        fprintf(stderr, "Child failed\n");

    }else{                    //Parent
         wait(NULL);
        printf("Child exited\n");
    }

}
} 
