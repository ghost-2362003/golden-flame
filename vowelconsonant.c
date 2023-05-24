#include<stdio.h>
int main(){
    char str[1000];
    printf("enter the string: ");
    scanf("%s", str);
    int vowel = 0, consonant = 0, i = 0;
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowel++;
        else
            consonant++;
        i++;
    }
    printf("number of vowels: %d\n", vowel);
    printf("number of consonant: %d", consonant);
    return 0;
}