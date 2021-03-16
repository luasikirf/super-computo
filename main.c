#include <stdio.h>
#include <stdlib.h>
#include "element.h" //entre comillas usa libreria en la path donde esta el .c

int main(int argn,char **argc){
    Element element;
    
    if (argn > 1){
        element = new_Element(argc[1]);
        print_Element(element);
        
       // printf("%s %i\n ",argc[1],argn);
        
        
    }else{
        
        printf("we need more arguments \n");
    }
}
