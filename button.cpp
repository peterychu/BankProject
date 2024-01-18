#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "button.h"




button::button(int x, int y, int width, int height, SDL_Color color, ScreenState assign, std::string text){
    button_x = x;
    button_y = y;
    button_width = width;
    button_height = height; 
    ButtonColor = color;
    this->clicked  = false;
    this->Screen = assign;
    this->text = text;
}

void button::RenderButton(SDL_Renderer* renderer){
    SDL_SetRenderDrawColor(renderer, ButtonColor.r, ButtonColor.g, ButtonColor.b, ButtonColor.a);
    SDL_Rect ButtonToDraw = {button_x, button_y, button_width, button_height};
    SDL_RenderFillRect(renderer, &ButtonToDraw);
}

bool button::isClicked(int mouseX, int mouseY){
    if(mouseX >= this->button_x && mouseX <= (this->button_x + this->button_width) &&
        mouseY >= this->button_y && mouseY <= (this->button_y + this->button_height) ){
            //this->ButtonColor = { 0, 0, 0, 255 };
            //this->clicked = true;
            return true;
        }

    return false;
}
