#ifndef HEADER_H_HEADER_ROUNDCHANGE
#define HEADER_H_HEADER_ROUNDCHANGE


int life = 3;
int mx, my;

bool round1 = true;// for round1 control
bool round2 = false;// for round2 control
bool round3 = false; // for round 3 comtrol
bool endround1 = false;// for round end1
bool endround2 = false;//for round end2
bool endround3 = false;//for round end3

void roundChange(bool r1, bool e1, bool r2, bool e2, bool r3, bool e3) // to control boolean value of play screen
{
	round1 = r1;
	endround1 = e1;
	round2 = r2;
	endround2 = e2;
	round3 = r3;
	endround3 = e3;
}




void playBackground()
{
	
		if (round1){
			iShowImage(0, 0, screenwidth, screenheight, roundBC1);//play
		}
		if (endround1)
		{
			//need a background
		}
		 if (round2)
		{
			iShowImage(0, 0, screenwidth, screenheight, roundBC2);//play
		}
		if (endround2)
		{
			//need a background
		}
		 if (round3)
		{
			iShowImage(0, 0, screenwidth, screenheight, roundBC3);//play
		}
	    if (endround3)
		{
			//need a background
		}
	

}


#endif