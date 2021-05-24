#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char a, y = 'y', t = 't', Y = 'Y', T='T';
char pg1, pg2, pg3, pg4, bs5, bs6, bs7;
int jwb1, jwb2, jwb3, jwb4, jwb5, jwb6, jwb7;

// fungsi untuk permulaan game
void opening() {
  printf("+--------------------------------------+\n");
  printf("|                                      |\n");
  printf("| Selamat datang di Kuis Seputar Dunia |\n");
  printf("|                                      |\n");
  printf("+--------------------------------------+");

  printf("\n\nBerani untuk bermain?\n");
  printf("Tekan enter untuk melanjutkan...");
  getchar();
}

// membuat fungsi soal pilihan ganda
void pilgan() {
  printf("\n\nSoal nomor 1-4 merupakan soal pilihan ganda. \nMari kita mulai!\n\n");
  getchar();

  printf("\n<<________________________________________________________________>>\n\n");

  printf("1. Matryoshka merupakan boneka kayu yang berisikan boneka-boneka yang berukuran lebih kecil yang berasal dari negara\n\n");
  printf("a. Jepang\tc. China\nb. Rusia\td. Perancis\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg1);
  getchar();
  if(pg1 == 'b' || pg1 == 'B'){jwb1 = 1;}
  else {jwb1 = 0;}
  
  printf("\n2. Presiden Amerika Serikat yang menggantikan Donald Trump\n\n");
  printf("a. Malala Yousafzai\tc. Joe Biden\nb. Barack Obama\t\td. Jacob Rothschild\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg2);
  getchar();
  if(pg2 == 'c' || pg2 == 'C'){jwb2 = 1;}
  else {jwb2 = 0;}

  printf("\n3. Negara pemenang turnamen sepak bola Piala Dunia FIFA 2002\n\n");
  printf("a. Brasil\tc. Jerman\nb. Uruguay\td. Portugal\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg3);
  getchar();
  if(pg3 == 'a' || pg3 == 'A'){jwb3 = 1;}
  else {jwb3 = 0;}

  printf("\n4. Tahun terjadinya insiden peledakan bom di World Trade Center(WTC) di Amerika Serikat\n\n");
  printf("a. 1994\t\tc. 1992\nb. 1990\t\td. 1993\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg4);
  getchar();
  if(pg4 == 'd' || pg4 == 'D'){jwb4 = 1;}
  else {jwb4 = 0;}
}

// membuat fungsi soal Benar/Salah (B/S)
void BS() {
  printf("\n<<________________________________________________________________>>\n\n");

  printf("\nSoal nomor 5-7 merupakan soal Benar atau Salah (B/S).\n\n");
  printf("Tekan enter untuk melanjutkan...");
  getchar();

  printf("\n\n5. Lauterbrunnen merupakan kota di sekitar lembah yang terletak di Amerika Utara (B/S)\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &bs5);
  getchar();
  if(bs5 == 's' || bs5 == 'S'){jwb5 = 1;}
  else {jwb5 = 0;}

  printf("\n6. Cordoba adalah sebuah katedral yang dialihfungsikan menjadi masjid yang terletak di Spanyol (B/S)\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &bs6);
  getchar();
  if(bs6 == 's' || bs6 == 'S'){jwb6 = 1;}
  else {jwb6 = 0;}

  printf("\n7. Australia merupakan sebuah benua yang memiliki beberapa negara bagian (B/S)\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &bs7);
  getchar();
  if(bs7 == 'b' || bs7 == 'B'){jwb7 = 1;}
  else {jwb7 = 0;}

  printf("\n<<________________________________________________________________>>\n");
}

// membuat fungsi hasil jawaban
void hasil() {

  int total;

  total = jwb1 + jwb2 + jwb3 + jwb4 + jwb5 + jwb6 + jwb7;

  printf("\nTotal jawaban yang benar : %d \n",total);
  printf("\nTekan enter untuk melihat rincian jawaban....");getchar();
  printf("\n 1.%s ",(jwb1==1)?"benar":"salah");
  printf("\n 2.%s ",(jwb2==1)?"benar":"salah");
  printf("\n 3.%s ",(jwb3==1)?"benar":"salah");
  printf("\n 4.%s ",(jwb4==1)?"benar":"salah");
  printf("\n 5.%s ",(jwb5==1)?"benar":"salah");
  printf("\n 6.%s ",(jwb6==1)?"benar":"salah");
  printf("\n 7.%s ",(jwb7==1)?"benar":"salah");
}

// Fungsi cek jawaban dan hitung skor
float hitungSkor() {
  float skor = 0;
  if (pg1 == 'b' || pg1 == 'B') {
  skor += 17.5;
  }
  if (pg2 == 'c' || pg2 == 'C') {
  skor += 17.5;
  }
  if (pg3 == 'a' || pg3 == 'A') {
  skor += 17.5;
  }
  if (pg4 == 'd' || pg4 == 'D') {
  skor += 17.5;
  }
  if (bs5 == 's' || bs5 == 'S') {
  skor += 10;
  }
  if (bs6 == 's' || bs6 == 'S') {
  skor += 10;
  }
  if (bs7 == 'b' || bs7 == 'B') {
  skor += 10;
  }

  printf("\n\nSkor yang Anda dapatkan: %.2f\n", skor);

}


//membuat fungsi penutup
void closing() {
  printf("\n\nApakah anda ingin main lagi? (y/t) \n");
  printf("Jawaban anda : ");scanf("%s",&a);
    if (a == y || a == Y){pilgan();BS();hasil();hitungSkor();closing();}
    else if(a == t || a == T){EXIT_FAILURE;}
}


int main(int ArgumenAwal,char *argumen[]) {

    if(ArgumenAwal !=3){
        printf("Maaf anda gagal untuk login!\nAkses lebih lanjut ditolak");
        printf("\nCara penggunaan : ./FileAplikasiProgramUtama username password");


    }

    char usernameInput[10],passwordInput[10];
    strcpy(usernameInput,argumen[1]);
    strcpy(passwordInput,argumen[2]);


    FILE *fpr;

    if((fpr = fopen("Database/login.bin","rb")) == NULL){
        printf("gagal membuka FILE Database/login.bin");
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
     return EXIT_FAILURE;
 }

  opening();

  pilgan();

  BS();
  
  hasil();
  
  hitungSkor();
  
  closing();

  return 0;
}
