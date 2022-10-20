#ifndef Game_h
#define Game_h

#include "SDL.h"
#include <iostream>

class Game {
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int hight, bool fullscreen);

	void handleEvent();
	void update();
	void render();
	void clean();

	void running() { return isRunning; }

private:
	bool isRunning();
	SDL_Window *window;
	SDL_Renderer*renderer;
};

#endif // 0
