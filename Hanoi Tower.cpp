#include "Hanoi Tower.h"

int main()
{
	setKeyboardCallback(keyboardCallback);
	setMouseCallback(mouseCallback);
	setTimerCallback(timerCallback);

	SceneID scene = createScene("하노이 타워", "Images/background.png");

	char path[64];
	for (int i = 0; i < N; i++)
	{
		sprintf_s(path, "Images/%d.png", i + 1);
		plates[i] = createObject(path);
		stack(0, i);
		showObject(plates[i]);
	}

	start = createObject("Images/start.png");
	locateObject(start, scene, 590, 100);
	showObject(start);

	startGame(scene);
	return 0;
}