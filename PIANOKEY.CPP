#include <dos.h>
#include <conio.h>
#include <iostream.h>
#include "pianoutl.h"

// private constants for the frequency of notes

const int c_flat_hz       = 440;     const int c_sharp_hz      = 466;
const int d_flat_hz       = 495;     const int d_sharp_hz      = 524;
const int e_flat_hz       = 550;
const int f_flat_hz       = 587;     const int f_sharp_hz      = 622;
const int g_flat_hz       = 660;     const int g_sharp_hz      = 699;
const int a_flat_hz       = 733;     const int a_sharp_hz      = 777;
const int b_flat_hz       = 825;
const int c_flat_high_hz  = 880;     const int c_sharp_high_hz = 932;
const int d_flat_high_hz  = 990;     const int d_sharp_high_hz = 1049;
const int e_flat_high_hz  = 1100;

// private function not available to outside programs

void DrawRectangle(int TopLeftVert,    int TopLeftHoriz,
                   int BottomRightVert,int BottomRightHoriz,
                   int Color)
{
   textbackground(Color);
   window(TopLeftHoriz,TopLeftVert,BottomRightHoriz,BottomRightVert);
   ClearTheScreen();
   window(1,1,80,25);
}

// public functions 

char GetAKey()
{
    char Key;
    Key = (char)getch();
    return Key;
}

void ChangeWritingColorTo(int Col)
{
   textcolor(Col);
}

void ClearTheScreen(void)
{
   clrscr();
}

void WaitAWhile(int time)
{
   delay(time);
}

void ChangeBackgroundColorTo(int Col)
{
   textbackground(Col);
}

void TurnSoundOn(char Key)
{
   switch (Key)
   {
      case c_flat       : sound(c_flat_hz); break;
       case     c_sharp      : sound(c_sharp_hz);  break;
       case     d_flat       : sound(d_flat_hz);   break;
       case     d_sharp      : sound(d_sharp_hz);  break;
       case     e_flat       : sound(e_flat_hz);   break;
       case     f_flat       : sound(f_flat_hz);   break;
       case     f_sharp      : sound(f_sharp_hz);  break;
       case     g_flat       : sound(g_flat_hz);   break;
       case     g_sharp      : sound(g_sharp_hz);  break;
       case     a_flat       : sound(a_flat_hz);   break;
       case     a_sharp      : sound(a_sharp_hz);  break;
       case     b_flat       : sound(b_flat_hz);   break;
       case     c_flat_high  : sound(c_flat_high_hz);  break;
       case     c_sharp_high : sound(c_sharp_high_hz); break;
       case     d_flat_high  : sound(d_flat_high_hz);  break;
       case     d_sharp_high : sound(d_sharp_high_hz); break;
       case     e_flat_high  : sound(e_flat_high_hz);  break;
   }
}

void TurnSoundOff(void)
{
   nosound();
}

void DrawRectangleForNote(char Key)
{
   switch (Key)
   {
     case c_flat       : DrawRectangle(10, 1,24, 7,Major_Color); 
                         break;
     case c_sharp      : DrawRectangle(10, 5,20,11,Sharp_Color); 
                         break;
     case d_flat       : DrawRectangle(10, 9,24,15,Major_Color); 
                         break;
     case d_sharp      : DrawRectangle(10,13,20,19,Sharp_Color); 
                         break;
     case e_flat       : DrawRectangle(10,17,24,23,Major_Color); 
                         break;
     case f_flat       : DrawRectangle(10,25,24,31,Major_Color); 
                         break;
     case f_sharp      : DrawRectangle(10,29,20,35,Sharp_Color); 
                         break;
     case g_flat       : DrawRectangle(10,33,24,39,Major_Color); 
                         break;
     case g_sharp      : DrawRectangle(10,37,20,43,Sharp_Color); 
                         break;
     case a_flat       : DrawRectangle(10,41,24,47,Major_Color); 
                         break;
     case a_sharp      : DrawRectangle(10,45,20,51,Sharp_Color); 
                         break;
     case b_flat       : DrawRectangle(10,49,24,55,Major_Color); 
                         break;
     case c_flat_high  : DrawRectangle(10,57,24,63,Major_Color); 
                         break;
     case c_sharp_high : DrawRectangle(10,61,20,67,Sharp_Color); 
                         break;
     case d_flat_high  : DrawRectangle(10,65,24,71,Major_Color); 
                         break;
     case d_sharp_high : DrawRectangle(10,69,20,75,Sharp_Color); 
                         break;
     case e_flat_high  : DrawRectangle(10,73,24,79,Major_Color); 
                         break;
     }
}

void FlashRectangleForNote(char key,int wait)
{
   switch (key)
   {
	 case c_flat        : DrawRectangle(21, 1,24, 7,Flash_Color); 
                              break;
	  case c_sharp      : DrawRectangle(10, 5,20,11,Flash_Color);  
                              break;
	  case d_flat       : DrawRectangle(21, 9,24,15,Flash_Color);  
                              break;
	  case d_sharp      : DrawRectangle(10,13,20,19,Flash_Color);  
                              break;
	  case e_flat       : DrawRectangle(21,17,24,23,Flash_Color);  
                              break;
	  case f_flat       : DrawRectangle(21,25,24,31,Flash_Color);  
                              break;
	  case f_sharp      : DrawRectangle(10,29,20,35,Flash_Color);  
                              break;
	  case g_flat       : DrawRectangle(21,33,24,39,Flash_Color);  
                              break;
	  case g_sharp      : DrawRectangle(10,37,20,43,Flash_Color);  
                              break;
	  case a_flat       : DrawRectangle(21,41,24,47,Flash_Color);  
                              break;
	  case a_sharp      : DrawRectangle(10,45,20,51,Flash_Color);  
                              break;
	  case b_flat       : DrawRectangle(21,49,24,55,Flash_Color);  
                              break;
	  case c_flat_high  : DrawRectangle(21,57,24,63,Flash_Color);  
                              break;
	  case c_sharp_high : DrawRectangle(10,61,20,67,Flash_Color);  
                              break;
	  case d_flat_high  : DrawRectangle(21,65,24,71,Flash_Color);  
                              break;
	  case d_sharp_high : DrawRectangle(10,69,20,75,Flash_Color);  
                              break;
	  case e_flat_high  : DrawRectangle(21,73,24,79,Flash_Color);  
                              break;
     }
     WaitAWhile(wait);
     switch (key)
     {
	  case c_flat       : DrawRectangle(21, 1,24, 7,Major_Color);  
                              break;
	  case c_sharp      : DrawRectangle(10, 5,20,11,Sharp_Color);  
                              break;
	  case d_flat       : DrawRectangle(21, 9,24,15,Major_Color);  
                              break;
	  case d_sharp      : DrawRectangle(10,13,20,19,Sharp_Color);  
                              break;
	  case e_flat       : DrawRectangle(21,17,24,23,Major_Color);  
                              break;
	  case f_flat       : DrawRectangle(21,25,24,31,Major_Color);  
                              break;
	  case f_sharp      : DrawRectangle(10,29,20,35,Sharp_Color);  
                              break;
	  case g_flat       : DrawRectangle(21,33,24,39,Major_Color);  
                              break;
	  case g_sharp      : DrawRectangle(10,37,20,43,Sharp_Color);  
                              break;
	  case a_flat       : DrawRectangle(21,41,24,47,Major_Color);  
                              break;
	  case a_sharp      : DrawRectangle(10,45,20,51,Sharp_Color);  
                              break;
	  case b_flat       : DrawRectangle(21,49,24,55,Major_Color);  
                              break;
	  case c_flat_high  : DrawRectangle(21,57,24,63,Major_Color);  
                              break;
	  case c_sharp_high : DrawRectangle(10,61,20,67,Sharp_Color);  
                              break;
	  case d_flat_high  : DrawRectangle(21,65,24,71,Major_Color);  
                              break;
	  case d_sharp_high : DrawRectangle(10,69,20,75,Sharp_Color);  
                              break;
	  case e_flat_high  : DrawRectangle(21,73,24,79,Major_Color);  
                              break;
     }
}

void CleanUp(void)
{
   ChangeWritingColorTo(WHITE);
   ChangeBackgroundColorTo(BLACK);
   ClearTheScreen();
}
