#ifndef HEADER_H_HEADERICON
#define HEADER_H_HEADERICON

int icn1, icn5;
//constent for all icon . Commone x position and hight, length
int icon_x = 655;
int icon_length = 316;
int icon_height = 62;

//for contron icon
int khela_suru_Y = 456; //y position of play button 
int exit_x = 950;// x position of exit button
int exit_y = 0;// y position of exit button
int score_y = 261;// y position of score button
int description_y = 361;// y position of description button(  KEMNE KHELMU)
int home_x = 0;// x position of home button
int home_y = 0;// y position of home button

// for Show immage

void icon()
{
  
		iShowImage(exit_x, exit_y, 50, 50, icn1);//exit icon
		iShowImage(home_x, home_y, 50, 50, icn5);//home icon

}




// for loading icon
void loadIcon()
{
	/*
	iLoadImage() will return an interger type id for each image you load.
	*/
	icn1 = iLoadImage("ICON\\exit2.png");//exit icon
	icn5 = iLoadImage("ICON\\home1.png");//home icon
}




#endif 