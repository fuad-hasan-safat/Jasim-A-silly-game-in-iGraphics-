#ifndef HEADER_H_HEADERDISCRIPTION
#define HEADER_H_HEADERDISCRIPTION


char str[200] = "Description will be shown here. Our graphical part is now under constraction.";
char str1[100] = "Current graphics will be changed";

void description()
{
	iText(0, 300, str ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(0, 250, str1, GLUT_BITMAP_TIMES_ROMAN_24);
}


void start()
{
	iSetColor(14, 69, 31);
	iText(100, 400, "Click  to start", GLUT_BITMAP_HELVETICA_18);
}









#endif 