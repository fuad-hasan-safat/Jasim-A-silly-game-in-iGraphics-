#ifndef HEADER_H_HEADERMOVE
#define HEADER_H_HEADERMOVE


#define JUMPLIMIT 50
int jx = joshim.x, dx = dipjol.x;

void josimPunch()
{
	joshim.punch = true;
	joshim.index++;
	if (joshim.index >= 5)
		joshim.index = 0;
	joshim.standPosition = false;
}


void josimKick()
{
	joshim.kick = true;
	joshim.index++;
	if (joshim.index >= 5)
		joshim.index = 0;
	joshim.standPosition = false;
}

void josimJump()
{
	if (!joshim.jump)
	{
		joshim.jump = true;
		joshim.jumpUp = true;
	}
}

void josimDown()
{
	joshim.down = true;
	joshim.standPosition = false;
}

void josimBack()
{
	joshim.x -= 10;
	joshim.index--;
	if (joshim.index <= 0)
		joshim.index = 4;

	joshim.standPosition = false;
}



void josimFront()
{
	if (joshim.x + 40 == dipjol.x)
	{
		joshim.x = jx;
	}
	else if (joshim.x < dipjol.x - 40)
	{
		joshim.x += 10;
	}
	
	joshim.index++;
	if (joshim.index >= 5)
		joshim.index = 0;

	joshim.standPosition = false;
}





//dipjol..........................

void dipjolJump()
{
	if (!dipjol.jump)
	{
		dipjol.jump = true;
		dipjol.jumpUp = true;
	}
}


void dipjolkick()
{
	dipjol.kick = true;
	dipjol.index++;
	if (dipjol.index >= 5)
		dipjol.index = 0;
	dipjol.standPosition = false;
}

void dipjolpunch()
{
	dipjol.punch = true;
	dipjol.index++;
	if (dipjol.index >= 5)
		dipjol.index = 0;
	dipjol.standPosition = false;
}

void dipjoldown()
{
	dipjol.down = true;
	dipjol.standPosition = false;
}

void dipjolBack()
{
	dipjol.x += 10;
	dipjol.index++;
	if (dipjol.index >= 5)
		dipjol.index = 0;

	dipjol.standPosition = false;
}



void dipjolFront()
{
	dipjol.x -= 10;
	dipjol.index--;
	if (dipjol.index <= 0)
		dipjol.index = 4;

	dipjol.standPosition = false;
}





//change thorow iSETTIMER

void change()
{
	if (joshim.jump)
	{
		if (joshim.jumpUp)
		{
			joshim.jumpY += 5;
			if (joshim.jumpY >= JUMPLIMIT)
			{
				joshim.jumpUp = false;

			}
		}
		else
		{
			joshim.jumpY -= 5;
			if (joshim.jumpY<0)
			{
				joshim.jump = false;
				joshim.jumpY = 0;
			}
		}
	}



	if (dipjol.jump)
	{
		if (dipjol.jumpUp)
		{
			dipjol.jumpY += 5;
			if (dipjol.jumpY >= JUMPLIMIT)
			{
				dipjol.jumpUp = false;

			}
		}
		else
		{
			dipjol.jumpY -= 5;
			if (dipjol.jumpY<0)
			{
				dipjol.jump = false;
				dipjol.jumpY = 0;
			}
		}
	}




}




#endif 