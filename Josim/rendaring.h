#ifndef HEADER_H_HEADERREND
#define HEADER_H_HEADERREND


int r = 255;
int g = 255;
int b = 255;


typedef struct Fighter Fighter;
struct Fighter

{
	int x;
	int y;
	int index;

	bool jump;
	bool jumpUp;
	bool jumpDown;

	int jumpY;
	bool punch;
	bool kick;

	bool standPosition;
	int  standCounter;
	bool down;

	Fighter()
	{

	}
	Fighter(int _x, int _y, int _index, bool _jump, bool _jumpUp, bool _jumpDown, int _jumpY, bool _punch, bool _kick, bool _standPosition, int _standCounter, bool _down)
	{
		x = _x;
		y = _y;
		index = _index;
		jump = _jump;
		jumpUp = _jumpUp;
		jumpDown = _jumpDown;
		jumpY = _jumpY;
		punch = _punch;
		kick = _kick;
		standPosition = _standPosition;
		standCounter = _standCounter;
		down = _down;
	}


} joshim(200, 0, 0, false, false, false, 0, false, false, true, 0, false), dipjol(600, 0, 0, false, false, false, 0, false, false, true, 0, false);



char joshimRun[5][20] = { "run\\1.bmp", "run\\2.bmp", "run\\3.bmp", "run\\4.bmp", "run\\5.bmp" };
char joshimUpDown[1][20] = { "upDown\\1.bmp" };
char joshimDown[1][20] = { "down\\1.bmp" };
char joshimPunch[5][20] = { "punch\\1.bmp", "punch\\2.bmp", "punch\\3.bmp", "punch\\4.bmp", "punch\\5.bmp" };
char joshimKick[5][20] = { "kick\\1.bmp", "kick\\2.bmp", "kick\\3.bmp", "kick\\4.bmp", "kick\\5.bmp" };

char joshimStand[50] = "stand\\2.bmp";




char dipjolRun[8][20] = { "RUN2\\1.bmp", "RUN2\\2.bmp", "RUN2\\3.bmp", "RUN2\\4.bmp", "RUN2\\5.bmp", "RUN2\\6.bmp", "RUN2\\7.bmp", "RUN2\\8.bmp" };
char dipjolUpDown[1][20] = { "UP2\\1.bmp" };
char dipjolDown[1][20] = { "DOWN2\\1.bmp" };
char dipjolPunch[8][20] = { "PNCH2\\1.bmp", "PNCH2\\2.bmp", "PNCH2\\3.bmp", "PNCH2\\4.bmp", "PNCH2\\5.bmp", "PNCH2\\6.bmp", "PNCH2\\7.bmp", "PNCH2\\8.bmp" };
char dipjolKick[8][20] = { "KICK2\\1.bmp", "KICK2\\2.bmp", "KICK2\\3.bmp", "KICK2\\4.bmp", "KICK2\\5.bmp", "KICK2\\6.bmp", "KICK2\\7.bmp", "KICK2\\8.bmp" };
char dipjolStand[15] = "STAND2\\2.bmp";

//int start1, menu, image2,image3,roundBC1,roundBC2,roundBC3;
//iShowImage(0, 0, screenwidth, screenheight, start1);
//start1 = iLoadImage("images\\starting.jpg");



int joshimStand2 = iLoadImage("stand\\2.png");


void change();

/*
void background()
{

int bcIndex = 0;
char bc[1][20] = { "bc\\1.bmp" };
iShowBMP(0, 0, bc[bcIndex]);
}
*/
void moves_joshim()
{
	if (joshim.jump && !joshim.down)
	{
		if (joshim.jumpUp)
		{
			iShowBMP2(joshim.x, joshim.y + joshim.jumpY, joshimUpDown[0], 255);
		}
		else
		{
			iShowBMP2(joshim.x, joshim.y + joshim.jumpY, joshimUpDown[0], 255);
		}

	}
	else
	{
		if (!joshim.standPosition)
		{

			if (joshim.down)
			{
				iShowBMP2(joshim.x, joshim.y, joshimDown[0], 255);
				joshim.standCounter++;
				if (joshim.standCounter>60)
				{
					joshim.standCounter = 0;
					joshim.index = 0;
					joshim.standPosition = true;
					joshim.down = false;
				}
			}


			else{
				iShowBMP2(joshim.x, joshim.y, joshimRun[joshim.index], 255);
				joshim.standCounter++;
				if (joshim.standCounter>20)
				{
					joshim.standCounter = 0;
					joshim.index = 0;
					joshim.standPosition = true;
				}
			}

		}
		else
		{
			iShowBMP2(joshim.x, joshim.y, joshimStand, 255);
			//iShowImage(100, 100, 50, 100, joshimStand2);

		}

		if (joshim.punch)
		{
			iShowBMP2(joshim.x, joshim.y, joshimPunch[joshim.index], 255);
			joshim.standCounter++;
			if (joshim.standCounter>20)
			{
				joshim.standCounter = 0;
				joshim.index = 0;
				joshim.standPosition = true;
				joshim.punch = false;
			}
		}

		if (joshim.kick)
		{
			iShowBMP2(joshim.x, joshim.y, joshimKick[joshim.index], 255);
			joshim.standCounter++;
			if (joshim.standCounter>20)
			{
				joshim.standCounter = 0;
				joshim.index = 0;
				joshim.standPosition = true;
				joshim.kick = false;
			}
		}



	}

}





void moves_dipjol()
{
	if (dipjol.jump && !dipjol.down)
	{
		if (dipjol.jumpUp)
		{
			iShowBMP2(dipjol.x, dipjol.y + dipjol.jumpY, dipjolUpDown[0], 255);
		}
		else
		{
			iShowBMP2(dipjol.x, dipjol.y + dipjol.jumpY, dipjolUpDown[0], 255);
		}

	}
	else
	{
		if (!dipjol.standPosition)
		{

			if (dipjol.down)
			{
				iShowBMP2(dipjol.x, dipjol.y, dipjolDown[0], 255);
				dipjol.standCounter++;
				if (dipjol.standCounter>60)
				{
					dipjol.standCounter = 0;
					dipjol.index = 0;
					dipjol.standPosition = true;
					dipjol.down = false;
				}
			}


			else{
				iShowBMP2(dipjol.x, dipjol.y, dipjolRun[dipjol.index], 255);
				dipjol.standCounter++;
				if (dipjol.standCounter>20)
				{
					dipjol.standCounter = 0;
					dipjol.index = 0;
					dipjol.standPosition = true;
				}
			}

		}
		else
		{
			iShowBMP2(dipjol.x, dipjol.y, dipjolStand, 255);
		}

		if (dipjol.punch)
		{
			iShowBMP2(dipjol.x, dipjol.y, dipjolPunch[dipjol.index], 255);
			dipjol.standCounter++;
			if (dipjol.standCounter>20)
			{
				dipjol.standCounter = 0;
				dipjol.index = 0;
				dipjol.standPosition = true;
				dipjol.punch = false;
			}
		}

		if (dipjol.kick)
		{
			iShowBMP2(dipjol.x, dipjol.y, dipjolKick[dipjol.index], 255);
			dipjol.standCounter++;
			if (dipjol.standCounter>20)
			{
				dipjol.standCounter = 0;
				dipjol.index = 0;
				dipjol.standPosition = true;
				dipjol.kick = false;
			}
		}



	}

}


#endif