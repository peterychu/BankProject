#include <SDL2/SDL.h>
#include "text.h"
#include <SDL2/SDL_ttf.h>
#include <iostream>

void text::renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y){

    SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
    if(textSurface == nullptr){
        std::cout << "Error rendering text surface" << std::endl;
        return;
    }

    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
    if(textTexture == nullptr){
        std::cout << "Error rendering text tecture" << std::endl;
        return;
    }

    SDL_Rect dstRect = {x, y, textSurface->w, textSurface->h};

    SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
    SDL_FreeSurface(textSurface);
    SDL_DestroyTexture(textTexture);
    
}