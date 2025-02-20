#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int n = strlen(s);
    if(n==1){
        if(s[n-1] == ' ') return 0;
        else return 1;
    }
    int count = 0;
    int flag = 0;
    while(n){
       if(s[n-1]==' ' && flag){
            return count ;
        }
        if(s[n-1]==' '){
            n--;
            continue;
        }
        else{
            count++;
            n--;
            flag = 1;
        }
    }
    return count;
}

int main() {
    char input1[] = "Hello World";
    printf("Input: s = \"%s\"\n", input1);
    printf("Output: %d\n", lengthOfLastWord(input1));

    char input2[] = "   fly me   to   the moon  ";
    printf("Input: s = \"%s\"\n", input2);
    printf("Output: %d\n", lengthOfLastWord(input2));

    char input3[] = "luffy is still joyboy";
    printf("Input: s = \"%s\"\n", input3);
    printf("Output: %d\n", lengthOfLastWord(input3));

    return 0;
}
