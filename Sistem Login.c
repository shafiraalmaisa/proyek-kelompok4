#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int banyakArgumen,char *argumen[]) 
{
    if(banyakArgumen !=3){
        printf("Maaf anda gagal untuk login!");
        printf("\nCara penggunaan : ./FileAplikasiProgramUtama username password");


    }

    char usernameInput[10],passwordInput[10];
    strcpy(usernameInput,argumen[1]);
    strcpy(passwordInput,argumen[2]);


    FILE *fpr;

    if((fpr = fopen("Database/login.bin","rb")) == NULL){
        printf("gagal membuka file");
        return EXIT_FAILURE;
    }

char akun[25];
fread(akun,sizeof(char),sizeof(akun)/sizeof(char),fpr);

fclose(fpr);

char *string[5];
char username[25],password[25];
int ctrl = 0;

string [0] = strtok(akun,"/");
while(string[ctrl++]  != NULL){
    string[ctrl] = strtok(NULL,"/");
}

strcpy(username,string[0]);
strcpy(password,string[1]);

if( (strcmp(usernameInput,username)== 0) &&(strcmp(passwordInput,password)== 0)){
    printf("Berhasil Login!\n");
}
else{
     printf("Gagal login!\n");
 }

return 0;
}
