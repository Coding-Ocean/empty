#include"libOne.h"
void gmain()
{
	window(800, 800);
	while (notQuit)
	{
		clear(200,200,200);

		for (int i = 0; i < 8; i++) {
			if (i % 2)fill(0, 100, 0);
			else fill(0);
			rect(100*i, 0, 100, 100);
		}
	}
}