#include <stdio.h>
#include <conio.h>

// fungsi untuk permulaan game
void opening() {
  printf("+--------------------------------------+\n");
  printf("|                                      |\n");
  printf("| Selamat datang di Kuis Seputar Dunia |\n");
  printf("|                                      |\n");
  printf("+--------------------------------------+");

  printf("\n\nBerani untuk bermain?\n");
  printf("Tekan enter untuk melanjutkan...");
  getch();
}

// membuat fungsi soal pilihan ganda
void pilgan() {
  printf("\n\nSoal nomor 1-4 merupakan soal pilihan ganda. \nMari kita mulai!\n\n");

  printf("1. Matryoshka merupakan boneka yang berisikan boneka-boneka yang berukuran lebih kecil yang berasal dari negara...\n\n");
  printf("a. Jepang\tc. China\nb. Rusia\td. Perancis");
}

/* membuat fungsi soal Benar/Salah (B/S)
void BS() {

} */

int main() {

  opening();

  pilgan();

  //BS();

  return 0;
}
