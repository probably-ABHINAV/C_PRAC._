// check character is vowel or consonant
#include <stdio.h>
int main(){
    char letter;
    printf("Enter a char: ");
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||
    letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
    return 0;
}