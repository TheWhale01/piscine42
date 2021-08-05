#include <string.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int SDL_SetBackgroundColor(SDL_Renderer *renderer, int red, int green, int blue)
{
	if (SDL_SetRenderDrawColor(renderer, red, green, blue, SDL_ALPHA_OPAQUE) < 0)
		return (-1);
	if (SDL_RenderClear(renderer) < 0)
		return (-1);
	SDL_RenderPresent(renderer);
	return (0);
}