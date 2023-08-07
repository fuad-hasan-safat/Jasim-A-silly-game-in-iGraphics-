#ifndef HEADER_H_HEADER
#define HEADER_H_HEADER



void playBackground();//control play screen background
void description();
void score();
void start();



int start1, menu, scoreBC,descriptionBC,roundBC1,roundBC2,roundBC3,gameover;
int screenwidth = 1000;//control screen width
int screenheight = 600;// control screen height


int time_counter;
tm t1;
int msec;

// to control background screen 
bool homescreen = true;
bool scorescreen = false;
bool discriptionscreen = false;
bool playscreen = false;
bool homecondition = false;
bool gameoverscreen = false;



void home()
{
	
	if (homescreen)
	{

		if (!homecondition)
		{
			iShowImage(0, 0, screenwidth, screenheight, start1);// start
			start();// text massage
		}


	   if(homecondition)
		{
			iShowImage(0, 0, screenwidth, screenheight, menu);// start
		}

	}
	
	 if (scorescreen)
	{
		iShowImage(0, 0, screenwidth, screenheight, scoreBC);//score board
		score();//to show score
		
	}


	if (discriptionscreen)
	{
		iShowImage(0, 0, screenwidth, screenheight, descriptionBC);//description
		description();//to show description
	}


	 if (playscreen)
	{	
		playBackground();
	}

	 if (gameoverscreen)
	 {
		 iShowImage(0, 0, screenwidth, screenheight, gameover);
	 }

	

	
}

void loadHomeImage()
{
	/*
	iLoadImage() will return an interger type id for each image you load.
	*/
	start1 = iLoadImage("images\\starting.jpg");// home star background
	menu = iLoadImage("images\\Menu.jpg");// home manu background
	scoreBC = iLoadImage("images\\scorej.jpg");// scoreboard background
	descriptionBC = iLoadImage("images\\description1.jpg");// descriptionbord background
	roundBC1 = iLoadImage("images\\background1.jpg");//play background
	roundBC2 = iLoadImage("images\\background2.jpg");//play background
	roundBC3 = iLoadImage("images\\1.jpg");//play background
	gameover = iLoadImage("images\\gameover.jpg");//play background
	
}


#endif // !HEADER_H_HEADER