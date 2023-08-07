#ifndef HEADER_H_HEADER_SCORE
#define HEADER_H_HEADER_SCORE

// this is temporary code ... here FILE will use to store code 
char scr[100] = "Store will be stored in a file";
char scr_1[100] = " and showed if u click Score icon";

void score()
{
	iText(350, 350, scr, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(350, 250, scr_1, GLUT_BITMAP_TIMES_ROMAN_24);
}




#endif 
