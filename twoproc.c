#include "types.h"
#include "user.h"

int 
main(){
    int forkVal = fork();
    //child process
    int i;
    if (forkVal== 0){
        for (i = 0; i < 50 ; i++){
            printf(1, "+");
            yield();
        }
    } 
    if (forkVal != 0){
        for (i = 0; i < 50 ; i++){
            printf(1, "-");
            yield();
        }
        wait();
    }

    exit();
    return 0;
   
}