#include<stdio.h>
#include<string.h>

char* encrypt_string();
char* decrypt_string();

char* encrypt_string(char char_string[]){
    for (int i = 0; i < strlen(char_string); i++)
    {
        char_string[i] = char_string[i] + 1;
    }
return char_string;
}

char* decrypt_string(char char_string[]){
    for (int i = 0; i < strlen(char_string); i++)
    {
        char_string[i] = char_string[i] - 1;
    }
return char_string;
}

int main(){ 

    char char_string[] = "Anup Kumar Mondal";

printf("\n");

    char* hold_encryption = encrypt_string(char_string);
    printf("The encryption : %s \n", hold_encryption);

    char* hold_decryption = decrypt_string(hold_encryption);
    printf("The decryption : %s \n", hold_decryption);

printf("\n");
return 0;
}