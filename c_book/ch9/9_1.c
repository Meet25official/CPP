// write a program, which reads your name from the keyboard and outputs a list of ASCII codes, which represent your name.
#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("ASCII codes of your name: ");
    for(int i = 0; i < strlen(name); i++){
        printf("%d ", name[i]);
    }
    return 0;
}

