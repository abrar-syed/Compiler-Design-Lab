#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
    int state =0,i=0;
    char current;
    char input[20];
    printf("Enter the string with only symbols a and b: ");
    scanf("%s",input);
    while((input[i])!='\0'){
        current = input[i];
        switch(state){
        case 0:
            if(current=='a')
                state=1;
            else if(current == 'b')
                state= 2;
            else{
                printf("Invalid Token\n");
                exit(0);
            }
            break;

        case 1:
            if(current=='a')
                state=4;
            else if(current == 'b')
                state= 2;
            else{
                printf("Invalid Token\n");
                exit(0);
            }
            break;

        case 2:
            if(current=='a')
                state=1;
            else if(current == 'b')
                state=3;
            else{
                printf("Invalid Token\n");
                exit(0);
            }
            break;

        case 3:
            if(current=='a')
                state=1;
            else if(current == 'b')
                state= 3;
            else{
                printf("Invalid Token\n");
                exit(0);
            }
            break;

        case 4:
            if(current=='a')
                state=4;
            else if(current == 'b')
                state= 2;
            else{
                printf("Invalid Token\n");
                exit(0);
            }
            break;
        }
           i++;     

    }
    if(state==3 || state==4){
        printf("String Accepted\n");
    }
    else{
        printf("String Not Accepted\n");
    }
}
    
