// Klavyeden girilen bir ismi karakter karakter bir dosyaya yazan, okuyan ve okuduðunu ekrana alt alta
//karakter karakter yazan bir program yazýnýz.
#include <stdio.h>
int main()
{
 int i;
 FILE *fp;
 char *isim, ch;
 if((fp=fopen("dosya.doc", "w"))==NULL)
 {
 printf("dosya.doc yazma icin acilamadi...");

 }
 printf("Bir isim giriniz : ");
 scanf("%s", isim);
 while(*isim) {
 fputc(*isim, fp);
 isim++;
 }
 fclose(fp);
 if((fp=fopen("dosya.doc", "r"))==NULL)
 {
 printf("dosya.doc okuma icin acilamadi...");
 
 }
 while(ch!=EOF) {
 ch=fgetc(fp);
 printf("%c\n", ch);
 }
 fclose(fp);
 return 0;
}

