#ifndef BUTTON_H
#define BUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <string>

// enum class ScreenState{
//     MainMenu,
//     ViewAccounts,
//     CreatingAccount,
//     DeletingAccount,
// };

enum class ScreenState{
    MainMenu,
    ViewBanks,
    AddBank,
    DeleteBank,
    ViewAccounts,
    AddAccount,
    AddAccount2,
    DeleteAccount,
    Deposit,
    Withdraw,
    Next,
    Prev,
    NextAcc,
    PrevAcc,
    Idle
};

class button{

    public:
        
        button(int x, int y, int width, int height, SDL_Color color, ScreenState assign, std::string text);
        void RenderButton(SDL_Renderer* renderer);
        bool isClicked(int mouseX, int mouseY);
        // void HandleMBDown(SDL_Event& windowEvent, std::vector<button> input);


        int button_x;
        int button_y;
        int button_height;
        int button_width;
        SDL_Color ButtonColor = {0,0,0, 255}; 
        bool clicked;
        ScreenState Screen;
        std::string text; 

};

#endif 