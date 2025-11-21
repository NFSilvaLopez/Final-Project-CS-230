#include <stdio.h>

void translate(int num);

int main(){
int num;

printf("Please enter a hex digit: \n");
scanf("%x", &num);
translate(num);

return 0;
}

void translate(int num){
    for(int i = 3; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }
}