#include <stdio.h>
#include <SDL2/SDL.h>
#include "sdl_functions.h"

int main()
{
	SDL_Event event;
	SDL_Window *window;
	SDL_Renderer *renderer;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("Cannot intialize SDL lib : %s\n", SDL_GetError());
		return (0);
	}
	if (!(window = SDL_CreateWindow("Skyscraper", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0)))
	{
		printf("Cannot create window : %s\n", SDL_GetError());
		return (0);
	}
	if (!(renderer = SDL_CreateRenderer(window, -1, 0)))
	{
		printf("Cannot create renderer : %s\n", SDL_GetError());
		return (0);
	}
	if (SDL_SetBackgroundColor(renderer, 255, 255, 255) < 0)
	{
		printf("Cannot set background color : %s", SDL_GetError());
		return (0);
	}
	if (SDL_CreateTextInputBox(&event, "c'est moi") < 0)
	{
		printf("Cannot create text input box\n");
		return (0);
	}
	while (SDL_WaitEvent(&event))
		if (event.type == SDL_QUIT)
			break;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return (0);
}