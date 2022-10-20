#include "Game.h"

Game::Game()
{}
Game::~Game()
{}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if(fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SubSytems Initialised!.." << std::endl;

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if(window)
		{
			std::cout << "Window Created" << std::endl;c
		}

		renderer = SDL_CreateRenderer(windows, -1, -0);
		if (renderer)
		{
			std::cout << "Renderer Created!" << std::endl;
		}
		
		isRunning = true;
		else
		{
			isRunning false;
		}

}

void Game::handleEvent()
{}

void Game::update()
{}

void Game::render()
{}

void Game::clean()
{}