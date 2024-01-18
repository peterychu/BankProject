#ifndef TEXT_H
#define TEXT_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>


TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/fonts/Roboto-Regular.tff", 8);

class text{
    
    void text::renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y);
    

};






#endif; 