#include<stdio.h>
#include<conio.h>
int main(){
   char ch='X';
   int i;
   clrscr();
   _setcursortype(_NOCURSOR);
   for(i=0;i<20;i++){
     textcolor(RED);
     gotoxy(20+i,10);
     cprintf("%c",ch);
     delay(100);

     textcolor(BLACK);
     gotoxy(20+i,10);
     cprintf("%c",ch);
   }
   for(i=0;i<20;i++){
     textcolor(GREEN);
     gotoxy(40+i,10);
     cprintf("%c",ch);
     delay(100);

     textcolor(BLACK);
     gotoxy(40+i,10);
     cprintf("%c",ch);
   }
   for(i=0;i<20;i++){
     textcolor(WHITE);
     gotoxy(60+i,10);
     cprintf("%c",ch);
     delay(100);

     textcolor(BLACK);
     gotoxy(60+i,10);
     cprintf("%c",ch);
   }
  getch();
}