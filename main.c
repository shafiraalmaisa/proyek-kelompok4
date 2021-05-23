#include <stdio.h>
#include <conio.h>

char pg1, pg2, pg3, pg4, bs5, bs6, bs7;

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
  getch();

  printf("\n<<________________________________________________________________>>\n\n");

  printf("1. Matryoshka merupakan boneka kayu yang berisikan boneka-boneka yang berukuran lebih kecil yang berasal dari negara\n\n");
  printf("a. Jepang\tc. China\nb. Rusia\td. Perancis\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg1);

  printf("\n2. Presiden Amerika Serikat yang menggantikan Donald Trump\n\n");
  printf("a. Malala Yousafzai\tc. Joe Biden\nb. Barack Obama\t\td. Jacob Rothschild\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg2);
  getchar();

  printf("\n3. Negara pemenang turnamen sepak bola Piala Dunia FIFA 2002\n\n");
  printf("a. Brasil\tc. Jerman\nb. Uruguay\td. Portugal\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg3);
  getchar();

  printf("\n4. Tahun terjadinya insiden peledakan bom di World Trade Center(WTC) di Amerika Serikat\n\n");
  printf("a. 1994\t\tc. 1992\nb. 1990\t\td. 1993\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &pg4);
  getchar();
}

// membuat fungsi soal Benar/Salah (B/S)
void BS() {
  printf("\n<<________________________________________________________________>>\n\n");

  printf("\nSoal nomor 5-7 merupakan soal Benar atau Salah (B/S).\n\n");
  printf("Tekan enter untuk melanjutkan...");
  getch();

  printf("\n\n5. Lauterbrunnen merupakan kota di sekitar lembah yang terletak di Amerika Utara (B/S)\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &bs5);
  getchar();

  printf("\n6. Cordoba adalah sebuah katedral yang dialihfungsikan menjadi masjid yang terletak di Spanyol (B/S)\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &bs6);
  getchar();

  printf("\n7. Australia merupakan sebuah benua yang memiliki beberapa negara bagian (B/S)\n\n");
  printf("Jawaban anda : ");
  scanf("%c", &bs7);
  getchar();

  printf("\n<<________________________________________________________________>>\n");
}

int main() {

  opening();

  pilgan();

  BS();

  return 0;
}
