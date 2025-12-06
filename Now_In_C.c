#include <stdio.h>

void translate(int num);

int main(){
char input;
int num;

while (1){
     printf("Please enter a hex digit or X to exit: \n");
    scanf(" %c", &input);
    if(input == 'X' || input == 'x'){
        break;
    } 
    if (input >= '0' && input <= '9'){
        num = input - '0';
    } 
    else if (input >= 'a' && input <= 'f'){
        num = input - 'a' + 10;
        printf("%d", num);
        printf("\n");
}  
else if (input >= 'A' && input <= 'F'){
        num = input - 'A' + 10;
        }
        translate(num);
    }
return 0;
}

void translate(int num){
    for(int i = 3; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}
