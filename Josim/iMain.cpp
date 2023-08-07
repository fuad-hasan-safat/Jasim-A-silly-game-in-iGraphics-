#include<iostream>
//#include <ctime>

using namespace std;

#include "iGraphics.h"
#include "Homepage.h"
#include "Icon.h"
#include "Description.h"
#include "rendaring.h"
#include "move.h"
#include "collision.h"
#include "roundChange.h"
#include "score.h"
#include "ourcharacter.h" 




/*
function iDraw() is called again and again by the system.
*/
void screen(bool h, bool s, bool d, bool p, bool hc)//for control screen
{
	 homescreen = h;
	 scorescreen = s;
	 discriptionscreen = d;
	 playscreen = p;
	 homecondition = hc;
}

void iDraw()
{


	iClear();


	home();
	icon();
	if(discriptionscreen)
	chardec();
	/*if(discriptionscreen)
	{
		if(a || b1 || c)
			crim1();
	}*/
	if (playscreen && !gameoverscreen)
	{
		moves_joshim();
		moves_dipjol();
	}
	iSetColor(0, 0, 0);
	
}



void iMouseMove(int mx, int my)
{
	
	
}


void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON)
	{
		//place your codes here

		// go back to manue page from any other page
		if (mx <= 60 && my <= 60)// for home screen
		{
			gameoverscreen = false;
			screen(true, false, false, false, true);
		}


		// to go manue page
		else if (mx >= 100 && mx >=0)
		{
			screen(true, false, false, false, true);//h,s,d,p,hc // to show manu screen
		}





		// to exit WINDOW
		if (mx >= exit_x && my <= exit_y+50) // to exit by clickin exit button
		{
			if (homecondition)
			exit(0);
		}



	//SCORE BOARD
			if (mx >= icon_x && mx <= icon_x + icon_length)
				{
				   if (my >= score_y && my <= score_y + icon_height)
						{
							screen(false, true, false, false,false);
						}
			    
				}





			//DESCRIPTION PAGE
		
		   if (mx >= icon_x && mx <= icon_x + icon_length)
			{
			   if (my >= description_y && my <= description_y + icon_height)
				{
					screen(false, false, true, false,false);
					home();	// for showing discription screen
				
				}

			}


		 // condition for play
		  
		   if (mx >= icon_x && mx <= icon_x + icon_length)
			{
			   if (my >= khela_suru_Y && my < khela_suru_Y + icon_height)
				{
					screen(false, false, false, true,false);
				}
			}

	}



	if(button == GLUT_LEFT_BUTTON )
	{
	
		if(discriptionscreen)
		{
			if(mx >=200 && mx<= 300)
			{   
				if(my >=350 && my <= 450)
				{
					/*a= true;
					b1= false;
					c= false;
					*/
					c1();
				}
			}
			if(mx >=450 && mx<= 550)
			{
				if(my >=350 && my <= 450)
				{
					/*a= false;
					b1= true;
					c= false;*/

					c2();
				}
			}
			if(mx >=700 && mx<= 800)
			{
				if(my >=350 && my <= 450)
				{
					/*a= false;
					b1= false;
					c= true;*/
					c3();
				}
					
			}
		}

	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}





/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 't')
	{

		josimPunch();
	}
	if (key == 'u')
	{

		josimKick();
	}
	if (key == 'w')
	{
		josimJump();
	}
	if (key == 'z')
	{
		josimDown();
	}
	if (key == 'a')
	{
		josimBack();
	}
	if (key == 's')
	{
		josimFront();
	}



	//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_UP)//
	{
		dipjolJump();
	}
	if (key == GLUT_KEY_DOWN)
	{
		dipjoldown();
	}
	if (key == GLUT_KEY_LEFT)
	{
		dipjolFront();
	}
	if (key == GLUT_KEY_RIGHT)
	{
		dipjolBack();
	}

	if (key == GLUT_KEY_INSERT)
	{
		dipjolpunch();
	}
	if (key == GLUT_KEY_PAGE_UP)
	{
		dipjolkick();
	}


	/*.........temporary for showing different background to teacher...........*/

	if (key == GLUT_KEY_F1)
	{
		round1 = true;
		round2 = false;
		round3 = false;
		gameoverscreen = false;
	}

	if (key == GLUT_KEY_F2)
	{
		round1 = false;
		round2 = true;
		round3 = false;
		gameoverscreen = false;
	}

	if (key == GLUT_KEY_F3)
	{
		round1 = false;
		round2 = false;
		round3 = true;
		gameoverscreen = false;
	}

	if (key == GLUT_KEY_F4)
	{
		round1 = false;
		round2 = false;
		round3 = false;
		gameoverscreen = true;
	}
	
}
//


int main()
{
	iSetTimer(100, change);
	iSetTimer(100, home);
	iInitialize(screenwidth, screenheight, "Animation with image");
	//place your own initialization codes here.


	/* iLoadImage() will return an interger type id
	   for each image you load.
	*/
	
	loadHomeImage();
	loadIcon();
	//crload();

	iStart(); // it will start drawing

	return 0;
}

