
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "button.h"
#include "bank.h"
#include <iostream>
#include <vector>
#include "unistd.h"
#include <windows.h>


int main(int argc, char* argv[]){
    const SDL_Color Grey = { 128, 128, 128, 255 };
    bool temp = true;


        button view = button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks");

        
        view.text = "Changed";

        std::cout << view.text << std::endl;
    


    return 0;


}