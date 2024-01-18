// #include <SDL2/SDL.h>
// #include <SDL2/SDL_ttf.h>
// #include "button.h"
// #include "bank.h"
// #include <iostream>
// #include <vector>
// #include "unistd.h"

// TTF_Font* globalFont = nullptr;

// void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y){ 

//     if(font == nullptr){
//         std::cout << "Error loading font \n";
//     }

//     SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
//     if(textSurface == nullptr){
//         std::cout << "Error rendering text surface" << std::endl;
//         return;
//     }

//     SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
//     if(textTexture == nullptr){
//         std::cout << "Error rendering text texture" << std::endl;
//         return;
//     }

//     SDL_Rect dstRect = {x, y, textSurface->w, textSurface->h};

//     SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
//     SDL_FreeSurface(textSurface);
//     SDL_DestroyTexture(textTexture);
// }

// void clearText(SDL_Renderer* renderer, int x, int y, int textWidth, int textHeight, SDL_Color backgroundColor) {
//     SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//     SDL_Rect clearRect = { x, y, textWidth, textHeight }; // Define the area to clear
//     SDL_RenderFillRect(renderer, &clearRect);
//     SDL_RenderPresent(renderer);
// }



//                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &LeftSide);

//                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &RightSide);

// void HandleMBDown(int mouseX, int mouseY, std::vector<button>& input){

//     for(auto& button : input){
//         if(button.isClicked(mouseX, mouseY)){
//             button.ButtonColor = { 0, 0, 0, 255 };
//             button.clicked = true;
//         }
//     }
// }

// const SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
// const SDL_Color Grey = { 128, 128, 128, 255 };
// const SDL_Color Black = { 0, 0, 0, 255 };
// const SDL_Color White = { 255, 255, 255, 255};


// constexpr const int WINDOW_WIDTH = 800;
// constexpr const int WINDOW_HEIGHT = 475;
// constexpr const int BUTTON_WIDTH = 200;
// constexpr const int BUTTON_HEIGHT = 50; 

// void renderBackground(SDL_Renderer* renderer){
//     SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//     SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//     SDL_RenderFillRect(renderer, &LeftSide);

//     SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//     SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//     SDL_RenderFillRect(renderer, &RightSide);
// }

// bank* banks = bank::BankHead;
// std::string bankName; 
// int TextHeight;
// int TextWidth;
// int i = 0;
// bool TextBoxRendered = false;
// bool renderOnce = false;
// // bank* curr = bank::BankHead;


// int main(int argc, char* argv[]) {
    
//     createBank("Test1");
//     createBank("Test2");
//     createBank("Test3");
    
//     bank* curr = bank::BankHead;
//     // bank boa;
//     // boa.createAccount(100, "Bob"); 

//     if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
//         std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
//         return 1;
//     }

//     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

//     if (window == nullptr) {
//         std::cerr << "SDL window creation failed: " << SDL_GetError() << std::endl;
//         SDL_Quit();
//         return 1;
//     }

//     SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

//     if (renderer == nullptr) {
//         std::cerr << "SDL renderer creation failed: " << SDL_GetError() << std::endl;
//         SDL_DestroyWindow(window);
//         SDL_Quit();
//         return 1;
//     }

//     if (TTF_Init() != 0) {
//     std::cout << "this bitch dont work" << std::endl;
//         return 1;
//     }

//     TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);

//     bool quit = false;

//     std::vector<button> allButtons;

//     ScreenState currentScreen = ScreenState::ViewBanks;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }
//             // if(renderOnce == false){
//             //     renderBackground(renderer);
//             //     renderOnce = true;
//             // }

//             renderBackground(renderer);
//             if(currentScreen == ScreenState::ViewBanks){

//                 // button One = button(100,100,200,50, Grey, ScreenState::ViewBanks, "View Bank Accounts");
//                 // allButtons.push_back(One);
//                 // button Two = button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank Account");

//                 button One = button(100, 100, 200, 50, Grey, ScreenState::MainMenu, "Back");
//                 button Two = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Account");
//                 button Three = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Acc");

//                 allButtons.push_back(One);
//                 allButtons.push_back(Two);
//                 allButtons.push_back(Three);

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);

//                     // for(auto& button: allButtons){
//                     //     std::cout << button.text << i << std::endl;
//                     //     i++;
//                     // }
//                     if(Two.isClicked(mouseX, mouseY) == true){
//                         TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                         clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                         curr = curr->next;
//                         renderText(renderer, globalFont, curr->name, White, 500, 100);
//                         Two.clicked = false;
//                     }
//                 }
                

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }


//             }

            

//         }

//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
    
// }



// #include <iostream>
// #include "bank.h"

// int main(){

//     createBank("Test1");
//     createBank("Test2");
//     // createBank("Test3");

//     bank* curr = bank::BankHead;

//     curr->createAccount(100,"AccTest1");
//     curr->createAccount(100, "AccTest2");
//     account* Test1 = nullptr;

//     Test1 = curr->AccHead;

//     std::cout << Test1->acc_name << std::endl;
//     // std::cout << Test1->next->acc_name << std::endl;
//     Test1 = Test1->next;
//     std::cout << Test1->prev->acc_name << std::endl;

//     // std::cout << "Error2" << std::endl;
//     //Test1 = Test1->next;

//     //std::cout << Test1 << std::endl;


//     return 0;


// }

// #include <SDL2/SDL.h>
// #include <SDL2/SDL_ttf.h>
// #include "button.h"
// #include "bank.h"
// #include <iostream>
// #include <vector>
// #include "unistd.h"
// #include <windows.h>

// TTF_Font* globalFont = nullptr;

// void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y){ 

//     if(font == nullptr){
//         std::cout << "Error loading font \n";
//     }

//     SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
//     if(textSurface == nullptr){
//         std::cout << "Error rendering text surface" << std::endl;
//         return;
//     }

//     SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
//     if(textTexture == nullptr){
//         std::cout << "Error rendering text texture" << std::endl;
//         return;
//     }

//     SDL_Rect dstRect = {x, y, textSurface->w, textSurface->h};

//     SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
//     SDL_FreeSurface(textSurface);
//     SDL_DestroyTexture(textTexture);
// }

// const SDL_Color Black = { 0, 0, 0, 255 };

// void clearText(SDL_Renderer* renderer, int x, int y, int textWidth, int textHeight, SDL_Color backgroundColor) {
//     SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//     SDL_Rect clearRect = { x, y, textWidth, textHeight }; // Define the area to clear
//     SDL_RenderFillRect(renderer, &clearRect);
//     SDL_RenderPresent(renderer);
// }

// void clearAllText(SDL_Renderer* renderer){
//     clearText(renderer, 400, 0, 400, 475, Black);
// }



//                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &LeftSide);

//                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &RightSide);

// void HandleMBDown(int mouseX, int mouseY, std::vector<button>& input){

//     for(auto& button : input){
//         if(button.isClicked(mouseX, mouseY)){
//             button.ButtonColor = { 0, 0, 0, 255 };
//             button.clicked = true;
//         }
//     }
// }

// const SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
// const SDL_Color Grey = { 128, 128, 128, 255 };
// const SDL_Color White = { 255, 255, 255, 255};


// constexpr const int WINDOW_WIDTH = 800;
// constexpr const int WINDOW_HEIGHT = 475;
// constexpr const int BUTTON_WIDTH = 200;
// constexpr const int BUTTON_HEIGHT = 50; 

// void renderBackground(SDL_Renderer* renderer){
//     SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//     SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//     SDL_RenderFillRect(renderer, &LeftSide);

//     SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//     SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//     SDL_RenderFillRect(renderer, &RightSide);
// }

// bank* banks = bank::BankHead;
// std::string bankName; 
// std::string AccName;
// std::string AccBal;
// std::string IOcash;
// std::string temp = "";
// int TextHeight;
// int TextWidth;
// int i = 0;
// bool TextBoxRendered = false;
// bool renderOnce = false;
// bool AccNameEntered = false;
// bool Switch = true;

// button viewBanks = button(100,100,200,50, Grey, ScreenState::Idle, "View All Banks");

//                 // int mouseX;
//                 // int mouseY;
// // TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);
// // bank* curr = bank::BankHead;

// void HandleInputText(SDL_Renderer* renderer, SDL_Event window, std::string &name, TTF_Font* font, ScreenState &temp, int x, int y){
//     if(window.type == SDL_TEXTINPUT){
//         if(name.length() < 10){
//             name += window.text.text;
//             std::cout << name << "\n";
//             TTF_SizeText(font, name.c_str(), &TextWidth, &TextHeight);
//             clearText(renderer, x, y, TextWidth, TextHeight, White);
//             renderText(renderer, font, name, Black, x, y);
//         }
//     }
// }


// void HandleKeyDown(SDL_Renderer* renderer, SDL_Event window, std::string &name, ScreenState &temp, bool &one, TTF_Font* font, bank* &curr){
//     if(window.type == SDL_KEYDOWN){
//         if(window.key.keysym.sym == SDLK_RETURN || window.key.keysym.sym == SDLK_RETURN2){
//             if(name.length() != 0){
//                 if(name == "bankName"){
//                     createBank(name);
//                 }
//             }

//             temp = ScreenState::MainMenu;
//             name = "";
//             one = false;
//         }

//         if(window.key.keysym.sym == SDLK_BACKSPACE){
//             if(name.length() < 10){
//                 clearText(renderer, 100, 200, 200, 30, backgroundColor);
//             }

//             if(!name.empty()){
//                 name.pop_back();
//                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                 renderText(renderer, font, name, Black, 100 , 150);
//             }
//         }


//     }
// }
// // int mouseX;
// // int mouseY;
// bool flag = false;

// int main(int argc, char* argv[]) {
//     button viewBanks = button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks");
//     createBank("Test1");
//     createBank("Test2");
//     createBank("Test3");
    
//     bank* curr = bank::BankHead;
   
//     curr->createAccount(100, "TestAcc1");
//     curr->createAccount(200, "SKEEP");
//     account*  currAcc = curr->AccHead;  
//     // std::cout << currAcc->acc_name << std::endl;
//     // currAcc = curr->AccHead; 

//     curr = curr->next;
//     curr->createAccount(100, "TestAcc2");
//     curr = bank::BankHead;
//     // account* currAcc = nullptr;
//     // bank boa;
//     // boa.createAccount(100, "Bob"); 

//     if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
//         std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
//         return 1;
//     }

//     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

//     if (window == nullptr) {
//         std::cerr << "SDL window creation failed: " << SDL_GetError() << std::endl;
//         SDL_Quit();
//         return 1;
//     }

//     SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

//     if (renderer == nullptr) {
//         std::cerr << "SDL renderer creation failed: " << SDL_GetError() << std::endl;
//         SDL_DestroyWindow(window);
//         SDL_Quit();
//         return 1;
//     }

//     if (TTF_Init() != 0) {
//     std::cout << "this bitch dont work" << std::endl;
//         return 1;
//     }

//     TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);
//     TTF_Font* smallFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 20);

//     bool quit = false;

//     std::vector<button> allButtons;

//     ScreenState currentScreen = ScreenState::MainMenu;
//     //

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
//                 SDL_RenderClear(renderer);
//                 int mouseX = 900;
//                 int mouseY = 900;

//                 allButtons.push_back(viewBanks);

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     mouseX = windowEvent.button.x;
//                     mouseY = windowEvent.button.y;

//                     for(auto& button : allButtons){
                        
//                         button.text = "Changed \n";
//                         std::cout << viewBanks.text << std::endl;
                        
//                     }
//                 }





//                 if(windowEvent.type == SDL_MOUSEBUTTONUP){
//                     if(viewBanks.clicked == true){
//                         std::cout << "Clicked 1\n";
//                         currentScreen = ScreenState::Idle;
//                     }
//                 }

//                 renderBackground(renderer);

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }
            
//                 SDL_RenderPresent(renderer);
//                 // allButtons.clear();
                
//             }

//             if(currentScreen == ScreenState::Idle){
//                 button test = button(100,100,200,50, Grey, ScreenState::Idle, "View All Banks");
//                 allButtons.push_back(test);
                
//                 int mouseX = 900;
//                 int mouseY = 900;

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     mouseX = windowEvent.button.x;
//                     mouseY = windowEvent.button.y;

//                     HandleMBDown(mouseX, mouseY, allButtons);
//                 }

//                 if(windowEvent.type == SDL_MOUSEBUTTONUP){
//                     if(test.clicked == true){
//                         std::cout << "Error Accident 1\n";
//                     }

//                     else{
//                         std::cout << "No Error 1\n";
//                     }
//                 }
//                 renderBackground(renderer);

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }
            
//                 SDL_RenderPresent(renderer);
//                 allButtons.clear();

//             }

//             if(currentScreen == ScreenState::ViewBanks){
//                 int mouseX = WINDOW_WIDTH;
//                 int mouseY = WINDOW_HEIGHT;
//                 button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
//                 button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "View Accounts");
//                 button NextBank = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Bank");
//                 button PrevBank = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Bank");

//                 allButtons.push_back(Back);
//                 allButtons.push_back(SelectAcc);
//                 allButtons.push_back(NextBank);
//                 allButtons.push_back(PrevBank);

//                 if(curr == nullptr){
//                     std::cout << "Bank head is null \n";
//                     currentScreen = ScreenState::MainMenu;
//                     break;
//                 }

//                 renderText(renderer, globalFont, curr->name, White, 500 , 100);
//                 // std::cout << mouseX << " " << mouseY << std::endl;
//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     mouseX = windowEvent.button.x;
//                     mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);
//                 }

//                 // std::cout << mouseX << " " << mouseY << std::endl;

//                 // if(SelectAcc.clicked == true){
//                 //     std::cout << "Clicked1\n";
//                 // }

//                 if(SelectAcc.isClicked(mouseX, mouseY)){
//                     std::cout << "Clicked2\n";
//                 }

//                     // for(auto& button: allButtons){
//                     //     std::cout << button.text << i << std::endl;
//                     //     i++;
//                     // }

//                     // std::cout << "Test";
//                     if(Back.isClicked(mouseX, mouseY)){
//                         currentScreen = ScreenState::MainMenu;
//                         allButtons.clear();
//                         curr = bank::BankHead;
//                     }
                    
//                     if(NextBank.isClicked(mouseX, mouseY)){
//                         if(curr->next != nullptr){
//                             TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             curr = curr->next;
//                             renderText(renderer, globalFont, curr->name, White, 500, 100);
//                         }
//                     }

//                     if(PrevBank.isClicked(mouseX, mouseY)){
//                         if(curr->prev != nullptr){
//                             TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             curr = curr->prev;
//                             renderText(renderer, globalFont, curr->name, White, 500, 100);
//                         }
//                     }
                
//                 if(windowEvent.type == SDL_MOUSEBUTTONUP && SelectAcc.clicked == true){
                    
//                         if(curr->AccHead == nullptr){
//                             std::string temp = "Error: No Accounts Found";
//                             renderText(renderer, globalFont, temp, White, 500, 200);
//                             TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight);
//                             // SDL_Delay(5000);
//                             clearText(renderer, 500, 200, TextWidth, TextHeight, Black);
//                         }
                        

//                         else{
//                             currentScreen = ScreenState::ViewAccounts;
//                             // SDL_RenderClear(renderer);
//                             clearAllText(renderer);
//                             allButtons.clear();
//                             currAcc = curr->AccHead;
//                             // std::cout << currAcc->acc_name;
//                         }
//                 }
//     //g++ -I src/include -o test testing.cpp button.cpp bank.cpp -static-libstdc++ -L src/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf
//                 // }

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }
//             }

//             if(currentScreen == ScreenState::ViewAccounts){
//                 //  renderBackground(renderer);
//                                 int mouseX = WINDOW_WIDTH;
//                 int mouseY = WINDOW_HEIGHT;
//                 button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
//                 // button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "Select");
//                 button NextAcc = button(100, 100, 200, 50, Grey, ScreenState::NextAcc, "Next");
//                 button PrevAcc = button(100, 175, 200, 50, Grey, ScreenState::PrevAcc, "Previous");
//                 button Deposit = button(100, 250, 200, 50, Grey, ScreenState::Idle, "Deposit Funds");
//                 button Withdraw = button (100, 325, 200, 50, Grey, ScreenState::Idle, "Withdraw Funds");
//                 button CreateAccount = button(100, 400, 200, 50, Grey, ScreenState::AddAccount, "Create Account"); 

//                 allButtons.push_back(Back);
//                 allButtons.push_back(NextAcc);
//                 allButtons.push_back(PrevAcc);
//                 allButtons.push_back(Deposit);
//                 allButtons.push_back(Withdraw);
//                 allButtons.push_back(CreateAccount);

                
//                 if(renderOnce == false){
//                     //std::cout << currAcc->acc_name << " 1\n";
//                     temp = std::to_string(currAcc->balance);
//                     renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                     //std::cout << currAcc->acc_name << " 2\n";
//                     renderText(renderer, globalFont, temp, White, 500, 130);
//                     //std::cout << currAcc->acc_name << " 3\n";
//                     renderOnce = true;
//                 }

//                 // std::cout << 
//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     mouseX = windowEvent.button.x;
//                     mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);

//                     if(Back.isClicked(mouseX, mouseY)){
//                         currentScreen = ScreenState::ViewBanks;
//                         allButtons.clear();
//                         clearAllText(renderer);
//                     }

//                     if(CreateAccount.isClicked(mouseX, mouseY)){
//                         currentScreen = ScreenState::AddAccount;
//                         allButtons.clear();
//                         clearAllText(renderer);
//                     }
// // FIX MAKE SURE MBUP CAUSES CHANGE NOT HOLD SHIT DOWN TY TY
//                     if(NextAcc.isClicked(mouseX,mouseY)){
//                         if(currAcc->next != nullptr){
//                             TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

//                             TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight );
//                             clearText(renderer, 500, 130, TextWidth, TextHeight, Black );

//                             currAcc = currAcc->next;
//                             temp = std::to_string(currAcc->balance);

//                             renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                             renderText(renderer, globalFont, temp, White, 500, 130);
//                             // std::cout << "Accident";
//                         }
//                     }

//                     if(PrevAcc.isClicked(mouseX,mouseY) && currAcc->prev != nullptr){
//                         if(currAcc->prev != nullptr){   
//                             TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             currAcc = currAcc->prev;
//                             renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                         }
//                     }

//                     if(Deposit.isClicked(mouseX, mouseY)){
//                         currentScreen = ScreenState::Deposit;
//                         allButtons.clear();
//                         clearAllText(renderer);
//                     }

//                     if(Withdraw.isClicked(mouseX, mouseY)){
//                         currentScreen = ScreenState::Withdraw;
//                         allButtons.clear();
//                         clearAllText(renderer);
//                     }

//                 }

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }



//             }

//         }

//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
    
// }


// #include <SDL2/SDL.h>
// #include <SDL2/SDL_ttf.h>
// #include "button.h"
// #include "bank.h"
// #include <iostream>
// #include <vector>
// #include "unistd.h"
// #include <windows.h>

// TTF_Font* globalFont = nullptr;

// void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string& text, SDL_Color color, int x, int y){ 

//     if(font == nullptr){
//         std::cout << "Error loading font \n";
//         return;
//     }

//     SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
//     if(textSurface == nullptr){
//         std::cout << "Error rendering text surface" << std::endl;
//         return;
//     }

//     SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
//     if(textTexture == nullptr){
//         std::cout << "Error rendering text texture" << std::endl;
//         return;
//     }

//     SDL_Rect dstRect = {x, y, textSurface->w, textSurface->h};

//     SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
//     SDL_FreeSurface(textSurface);
//     SDL_DestroyTexture(textTexture);
// }

// const SDL_Color Black = { 0, 0, 0, 255 };






//                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &LeftSide);

//                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &RightSide);

// void HandleMBDown(int mouseX, int mouseY, std::vector<button>& input){

//     for(auto& button : input){
//         if(button.isClicked(mouseX, mouseY)){
//             button.ButtonColor = { 0, 0, 0, 255 };
//             button.clicked = true;
//         }
//     }
// }

// const SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
// const SDL_Color Grey = { 128, 128, 128, 255 };
// const SDL_Color White = { 255, 255, 255, 255};


// constexpr const int WINDOW_WIDTH = 800;
// constexpr const int WINDOW_HEIGHT = 475;
// constexpr const int BUTTON_WIDTH = 200;
// constexpr const int BUTTON_HEIGHT = 50; 

// void renderBackground(SDL_Renderer* renderer){
//     SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//     SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//     SDL_RenderFillRect(renderer, &LeftSide);

//     SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//     SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//     SDL_RenderFillRect(renderer, &RightSide);
// }


// // TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);
// // bank* curr = bank::BankHead;

// void clearText(SDL_Renderer* renderer, int x, int y, int textWidth, int textHeight, SDL_Color backgroundColor) {
//     SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//     SDL_Rect clearRect = { x, y, textWidth, textHeight }; // Define the area to clear
//     SDL_RenderFillRect(renderer, &clearRect);
//     SDL_RenderPresent(renderer);
// }



// button view = button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks");
// button SelectAcc = button(100,100,200,50, Grey, ScreenState::ViewAccounts, "View Accounts");
// button NextAcc = button(100, 100, 200, 50, Grey, ScreenState::NextAcc, "Next");

// // int mouseX;
// // int mouseY;
// bool flag = true;
// bool renderOnce = false;

// bank* banks = bank::BankHead;
// int TextHeight;
// int TextWidth;


// int main(int argc, char* argv[]) {
    
//     createBank("Test1");
//     createBank("Test2");
//     createBank("Test3");
    
//     bank* curr = bank::BankHead;
   
//     curr->createAccount(100, "TestAcc1");
//     curr->createAccount(200, "SKEEP");
//     account*  currAcc = curr->AccHead;  
//     // std::cout << currAcc->acc_name << std::endl;
//     // currAcc = curr->AccHead; 

//     curr = curr->next;
//     curr->createAccount(100, "TestAcc2");
//     curr = bank::BankHead;

//     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
//     SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

//     if (TTF_Init() != 0) {
//     std::cout << "this bitch dont work" << std::endl;
//         return 1;
//     }

//     TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);

//     if(globalFont == nullptr){
//         std::cout << "Error loading font \n";
//     }
//     TTF_Font* smallFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 20);

//     bool quit = false;
//     std::cout << view.button_x << std::endl;
//     std::cout << view.button_x + view.button_width << std::endl;
//     std::cout << view.button_y << std::endl;
//     std::cout << view.button_y + view.button_height << std::endl;
//     std::vector<button*> allButtons;

//     ScreenState currentScreen = ScreenState::MainMenu;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             // SDL_RenderClear(renderer);  
//                 // bname =

//                 if(currentScreen == ScreenState::MainMenu){

//                     if(flag){
//                         allButtons.push_back(&view);
//                         flag = false;
//                     }
                
//                     if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                         int mouseX = windowEvent.button.x;
//                         int mouseY = windowEvent.button.y;

//                     // std::cout << mouseX << " " << mouseY << " ";
//                         if(view.isClicked(mouseX, mouseY)){
//                             view.ButtonColor = Black;
//                             view.clicked = true;
//                         }

//                     }

//                 if(windowEvent.type == SDL_MOUSEBUTTONUP && view.clicked == true){
//                     currentScreen = ScreenState::Idle;
//                     allButtons.clear();
//                     flag = true;
//                     view.clicked = false;
//                 }

//                 //std::cout << view.text << std::endl;
            
//                 renderBackground(renderer);
//                 for(auto& button : allButtons){
//                     button->RenderButton(renderer);
//                     renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
//                 }
//                 // renderText(renderer, globalFont, view.text, Black, view.button_x, view.button_y);
//             }


//             if(currentScreen == ScreenState::Idle){
//                 if(flag){
//                         allButtons.push_back(&SelectAcc);
//                         flag = false;
//                     }
                
//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                         int mouseX = windowEvent.button.x;
//                         int mouseY = windowEvent.button.y;

                    
//                         for(auto& button : allButtons){
//                             if(button->isClicked(mouseX, mouseY)){
//                                 button->clicked = true;
//                                 button->ButtonColor = Black;
//                             }
                        
//                         }   

//                     }

//                 if(windowEvent.type == SDL_MOUSEBUTTONUP){
//                     if(SelectAcc.clicked){
//                         SelectAcc.clicked = false;
//                         SelectAcc.ButtonColor = Grey;
//                         std::cout << "TRUE";

//                     }
//                     // currentScreen = ScreenState::ViewAccounts;
//                     // allButtons.clear();
//                     // flag = true;
//                     // SelectAcc.clicked = false;
//                     // currAcc = curr->AccHead;
//                 }

//                 //std::cout << view.text << std::endl;
            
//                 renderBackground(renderer);
//                 for(auto& button : allButtons){
//                     button->RenderButton(renderer);
//                     renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
//                 }
//             }


//             if(currentScreen == ScreenState::ViewAccounts){
//                     // std::cout << "View Accs";

//                     if(flag){
//                         allButtons.push_back(&NextAcc);
//                         flag = false;
//                     }
//                     std::string temp = "";

//                     if(renderOnce == false){
//                         //std::cout << currAcc->acc_name << " 1\n";
//                         temp = std::to_string(currAcc->balance);
//                         renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                         //std::cout << currAcc->acc_name << " 2\n";
//                         renderText(renderer, globalFont, temp, White, 500, 130);
//                         //std::cout << currAcc->acc_name << " 3\n";
//                         renderOnce = true;
//                     }
                
//                     if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                         int mouseX = windowEvent.button.x;
//                         int mouseY = windowEvent.button.y;

//                     // std::cout << mouseX << " " << mouseY << " ";
//                         if(NextAcc.isClicked(mouseX, mouseY)){
//                             NextAcc.ButtonColor = Black;
//                             NextAcc.clicked = true;
//                         }

//                     }



//                 if(windowEvent.type == SDL_MOUSEBUTTONUP && NextAcc.clicked == true){
//                     // currentScreen = ScreenState::ViewAccounts;
//                             temp = std::to_string(currAcc->balance);
//                             TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight );
//                             clearText(renderer, 500, 130, TextWidth, TextHeight, Black );
//                             currAcc = currAcc->next;
//                             temp = std::to_string(currAcc->balance);
//                             renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                             renderText(renderer, globalFont, temp, White, 500, 130);
//                         // allButtons.clear();
//                             flag = true;
//                             NextAcc.clicked = false;
//                             NextAcc.ButtonColor = Grey;
//                     }

//                 //std::cout << view.text << std::endl;
            
//                 // renderBackground(renderer);
//                 for(auto& button : allButtons){
//                     button->RenderButton(renderer);
//                     renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
//                 }
//             }
        
//             //  for(auto& button : allButtons){
//             //      button.RenderButton(renderer);
//             //      renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//             // // }

//             SDL_RenderPresent(renderer);
            
            
//         }

//     }
//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
// }
    
    
// #include <iostream>
// #include <fstream>
// #include <istream>
// #include <sstream>
// #include <string>
// #include "bank.h";

// bank* curr = bank::BankHead;
// account* currAcc = curr->AccHead;

// int main(int argc, char* argv[]){


//     std::ifstream file("testing.txt"); 

//     if(file.is_open()){
//         // std::string line;


//         std::string line;

//         while(std::getline(file, line)){
//             std::stringstream linestream(line);
//             std::string token; 

//             while(std::getline(linestream, token, ',')){

//             }
//         }

//     }
// 
// 
// 
//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>
// #include <string>

// // Function to perform 'create' operation
// void create(const std::string& data) {
//     std::cout << "Creating: " << data << std::endl;
//     // Implement the 'create' operation here
// }

// // Function to perform 'delete' operation
// void remove(const std::string& data) {
//     std::cout << "Deleting: " << data << std::endl;
//     // Implement the 'delete' operation here
// }

// // Function to perform 'move' operation
// void move(const std::string& data) {
//     std::cout << "Moving: " << data << std::endl;
//     // Implement the 'move' operation here
// }

// int main() {
//     std::ifstream file("testing.txt"); // Open the file
//     if (file.is_open()) {
//         std::string line;
//         while (std::getline(file, line)) { // Read lines from the file
//             std::istringstream ss(line);
//             std::string token;
//             while (std::getline(ss, token, ',')) { // Split by comma
//                 // Process each value (token)
//                 // Here, you might call your functions with each token
//                 // Assuming the operations are performed based on these tokens
//                 // For example:
//                 if (token == "test") {
//                     create(token);
//                 } else if (token == "test1") {
//                     remove(token);
//                 } else if (token == "test2") {
//                     move(token);
//                 }
//             }
//         }
//         file.close(); // Close the file
//     } else {
//         std::cout << "Unable to open file." << std::endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>
// // #include <sstream>

// int main(){

//     std::cout << "?";

//     std::ifstream file("testing.txt");
    
//     return 0;
    
// }
// C:/Users/peter/Desktop/CsProj/Test Environment/

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <sstream>
// #include "bank.h"

// int main() {
//     std::ifstream inputFile("testing.txt"); // Replace "example.txt" with your file name
//     std::string bankName, accountName;
//     int bal; 
//     bank* curr = bank::BankHead;
//     while(getline(inputFile >>  std::ws, bankName, ',') &&
//           getline(inputFile >> std::ws, accountName, ',') &&
//           inputFile >> bal) {

//             if(curr != nullptr){
//                 if(bankName != curr->name){
//                     createBank(bankName);
//                     curr = curr->next;
//                 }

//                 curr->createAccount(bal,accountName);
//             }

//             if(curr == nullptr){
//                 createBank(bankName);
//                 curr = bank::BankHead;
//                 curr->createAccount(bal, accountName);
//             }





//         }

//         // inputFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

//     std::cout << "\n";
//     std::cout << "\nstart \n";
//     curr = bank::BankHead;
//     for(bank* temp = bank::BankHead; temp != nullptr; temp = temp->next){
//         std::cout << temp->name << " ";
//     }

    
//     return 0;
// }


// #include <iostream>

// using namespace std;

// int main(){
    

//     string a = "Hello";
//     string b = "Hello";


//     if(a != b){
//         cout << "Diff \n";
//     }

//     if(a == b){
//         cout << "Not Diff \n";
//     }


//     return 0; 
// }

// g++ -o testing  testing.cpp -static-libstdc++ 


#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "button.h"
#include "bank.h"
#include <iostream>
#include <fstream>
#include <vector>
#include "unistd.h"
#include <windows.h>
#include <sstream>

TTF_Font* globalFont = nullptr;

void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y){ 

    if(font == nullptr){
        std::cout << "Error loading font \n";
    }

    SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
    if(textSurface == nullptr){
        std::cout << "Error rendering text surface" << std::endl;
        return;
    }

    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
    if(textTexture == nullptr){
        std::cout << "Error rendering text texture" << std::endl;
        return;
    }

    SDL_Rect dstRect = {x, y, textSurface->w, textSurface->h};

    SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
    SDL_FreeSurface(textSurface);
    SDL_DestroyTexture(textTexture);
}

const SDL_Color Black = { 0, 0, 0, 255 };

void clearText(SDL_Renderer* renderer, int x, int y, int textWidth, int textHeight, SDL_Color backgroundColor) {
    SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
    SDL_Rect clearRect = { x, y, textWidth, textHeight }; // Define the area to clear
    SDL_RenderFillRect(renderer, &clearRect);
    SDL_RenderPresent(renderer);
}

void clearAllText(SDL_Renderer* renderer){
    clearText(renderer, 400, 0, 400, 475, Black);
}



                // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
                // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
                // SDL_RenderFillRect(renderer, &LeftSide);

                // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
                // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
                // SDL_RenderFillRect(renderer, &RightSide);

const SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
const SDL_Color Grey = { 128, 128, 128, 255 };
const SDL_Color White = { 255, 255, 255, 255};


constexpr const int WINDOW_WIDTH = 800;
constexpr const int WINDOW_HEIGHT = 475;
constexpr const int BUTTON_WIDTH = 200;
constexpr const int BUTTON_HEIGHT = 50; 

void renderBackground(SDL_Renderer* renderer){
    SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
    SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
    SDL_RenderFillRect(renderer, &LeftSide);

    SDL_SetRenderDrawColor(renderer, 0,0,0,225);
    SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
    SDL_RenderFillRect(renderer, &RightSide);
}

// bank* banks = bank::BankHead;
std::string bankName; 
std::string AccName;
std::string AccBal;
std::string IOcash;
std::string bname;
int TextHeight;
int TextWidth;
int i = 0;
bool TextBoxRendered = false;
bool renderOnce = false;
bool AccNameEntered = false;
bool Switch = true;
bool flag = true;
// TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);
bank* curr = bank::BankHead;

// all buttons

button ViewBanks = button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks");
button AddBank = button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank");
// button DeleteBank = button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank");
std::vector<button*> MainMenuB = {&ViewBanks, &AddBank};

button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");

button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "View Accounts");
button NextBank = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Bank");
button PrevBank = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Bank");
button DeleteBank = button(100, 325,200,50, Grey, ScreenState::DeleteBank, "Delete Bank");
std::vector<button*> ViewBanksB = {&Back, &SelectAcc, &NextBank, &PrevBank, &DeleteBank};

button NextAcc = button(100, 100, 200, 50, Grey, ScreenState::NextAcc, "Next");
button PrevAcc = button(100, 175, 200, 50, Grey, ScreenState::PrevAcc, "Previous");
button Deposit = button(100, 250, 200, 50, Grey, ScreenState::Idle, "Deposit Funds");
button Withdraw = button (100, 325, 200, 50, Grey, ScreenState::Idle, "Withdraw Funds");
button CreateAccount = button(100, 400, 200, 50, Grey, ScreenState::AddAccount, "Create Account"); 
std::vector<button*> ViewAccsB = {&Back, &NextAcc, &PrevAcc, &Deposit, &Withdraw, &CreateAccount};



void HandleInputText(SDL_Renderer* renderer, SDL_Event window, std::string &name, TTF_Font* font, ScreenState &temp, int x, int y){
    if(window.type == SDL_TEXTINPUT){
        if(name.length() < 10){
            name += window.text.text;
            std::cout << name << "\n";
            TTF_SizeText(font, name.c_str(), &TextWidth, &TextHeight);
            clearText(renderer, x, y, TextWidth, TextHeight, White);
            renderText(renderer, font, name, Black, x, y);
        }
    }
}


void HandleKeyDown(SDL_Renderer* renderer, SDL_Event window, std::string &name, ScreenState &temp, bool &one, TTF_Font* font, bank* &curr){
    if(window.type == SDL_KEYDOWN){
        if(window.key.keysym.sym == SDLK_RETURN || window.key.keysym.sym == SDLK_RETURN2){
            if(name.length() != 0){
                if(name == "bankName"){
                    createBank(name);
                }
            }

            temp = ScreenState::MainMenu;
            name = "";
            one = false;
        }

        if(window.key.keysym.sym == SDLK_BACKSPACE){
            if(name.length() < 10){
                clearText(renderer, 100, 200, 200, 30, backgroundColor);
            }

            if(!name.empty()){
                name.pop_back();
                clearText(renderer, 100, 150, TextWidth, TextHeight, White);
                renderText(renderer, font, name, Black, 100 , 150);
            }
        }


    }
}

void loadData(std::string fileName, std::fstream file){
    std::ifstream inputFile(fileName);

    if(inputFile.is_open()){
        std::string line;

        while(std::getline(inputFile,line)){
            std::istringstream ss(line);
            std::string token;

            while(std::getline(ss, token, ',')){
                std::string bankName = bankName;
                
            }
        }
    }
}
// g++ -I src/include -o main main.cpp button.cpp bank.cpp -static-libstdc++ -L src/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf
int main(int argc, char* argv[]) {
    

    // std::ifstream inputFile("empty.txt"); // Replace "example.txt" with your file name
    std::ifstream inputFile("testing.txt"); // Replace "example.txt" with your file name
    std::string bankName, accountName;
    int bal; 
    // bank* curr = bank::BankHead;
    account* currAcc = nullptr;
    while(getline(inputFile >>  std::ws, bankName, ',') &&
          getline(inputFile >> std::ws, accountName, ',') &&
          inputFile >> bal) {

            if(curr != nullptr){
                if(bankName != curr->name){
                    createBank(bankName);
                    curr = curr->next;
                }

                curr->createAccount(bal,accountName);
            }

            if(curr == nullptr){
                createBank(bankName);
                curr = bank::BankHead;
                curr->createAccount(bal, accountName);
            }
    }
        
    curr = bank::BankHead;


    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

    if (window == nullptr) {
        std::cerr << "SDL window creation failed: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer == nullptr) {
        std::cerr << "SDL renderer creation failed: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    if (TTF_Init() != 0) {
    std::cout << "this bitch dont work" << std::endl;
        return 1;
    }

    TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);
    TTF_Font* smallFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 20);

    bool quit = false;

    std::vector<button*> allButtons;

    ScreenState currentScreen = ScreenState::MainMenu;

    while (!quit) {
        SDL_Event windowEvent;

        while (SDL_PollEvent(&windowEvent)) {
            if (windowEvent.type == SDL_QUIT) {
                quit = true;
            }

            if(currentScreen == ScreenState::MainMenu){

                if(flag){
                    SDL_RenderClear(renderer);
                    renderBackground(renderer);\

                    flag = false;
                }

                if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
                    int mouseX = windowEvent.button.x;
                    int mouseY = windowEvent.button.y;

                    for(auto& button : MainMenuB){
                        if(button->isClicked(mouseX, mouseY)){
                                button->clicked = true;
                                button->ButtonColor = Black;
                        }
                        
                    }   
                }

                if(windowEvent.type == SDL_MOUSEBUTTONUP){
                    if(ViewBanks.clicked == true){
                        currentScreen = ScreenState::ViewBanks;
                        ViewBanks.clicked = false;
                        ViewBanks.ButtonColor = Grey;
                        // allButtons.clear();
                        flag = true;
                        // ViewBanks.clicked = false;
                    }

                    if(AddBank.clicked == true){
                        currentScreen = ScreenState::AddBank;
                        AddBank.clicked = false;
                        AddBank.ButtonColor = Grey;
                        // AddBank.clicked = false;
                    }

                }

                renderBackground(renderer);

                for(auto& button : MainMenuB){
                    button->RenderButton(renderer);
                    renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
                }

                // SDL_RenderPresent(renderer);
                
            }

            if(currentScreen == ScreenState::ViewBanks){

                if(flag){
                    SDL_RenderClear(renderer);
                    renderBackground(renderer);

                    if(curr != nullptr){
                        renderText(renderer, globalFont, curr->name, White, 500 , 100);
                    }

                    flag = false;
                }
            
    

                if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
                    int mouseX = windowEvent.button.x;
                    int mouseY = windowEvent.button.y; 
                    
                    for(auto& button : ViewBanksB){
                        if(button->isClicked(mouseX, mouseY)){
                            button->clicked = true;
                            button->ButtonColor = Black;
                        }
                    }
                        
                        
                }

                if(windowEvent.type == SDL_MOUSEBUTTONUP){
                    if(Back.clicked == true){
                        Back.clicked = false;
                        Back.ButtonColor = Grey;
                        allButtons.clear();
                        curr = bank::BankHead;
                        flag = true;
                        currentScreen = ScreenState::MainMenu;

                    }

                    if(NextBank.clicked){
                        if(curr->next != nullptr){
                            TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                            clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
                            curr = curr->next;
                            renderText(renderer, globalFont, curr->name, White, 500, 100);
                        }

                        NextBank.clicked = false;
                        NextBank.ButtonColor = Grey;
                    }

                    
                    if(PrevBank.clicked){
                        if(curr->prev != nullptr){
                            TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                            clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
                            curr = curr->prev;
                            renderText(renderer, globalFont, curr->name, White, 500, 100);
                        }
                        PrevBank.clicked = false;
                        PrevBank.ButtonColor = Grey;
                    }

                    if(SelectAcc.clicked){
                        if(curr->AccHead == nullptr){
                            std::string temp = "Error: No Accounts Found";
                            renderText(renderer, globalFont, temp, White, 500, 200);
                            TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight);
                            // SDL_Delay(5000);
                            clearText(renderer, 500, 200, TextWidth, TextHeight, Black);
                        }
                        
                
                        else{
                            currentScreen = ScreenState::ViewAccounts;
                            clearAllText(renderer);
                            currAcc = curr->AccHead;
                            flag = true;

                        }

                        SelectAcc.clicked = false;
                        SelectAcc.ButtonColor = Grey;
                    } 

                    if(DeleteBank.clicked == true){
                        
                        if(curr == bank::BankHead){
                            
                            if(bank::BankHead->next == nullptr){
                                bank::BankHead = nullptr;
                                curr = nullptr;
                                currentScreen = ScreenState::MainMenu;
                                continue;
                            }

                            else{

                                TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                                clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                                bank* temp = curr;
                                bank::BankHead = bank::BankHead->next;
                                bank::BankHead->prev = nullptr;
                                curr = bank::BankHead;

                                delete  temp;

                                renderText(renderer,  globalFont, curr->name, White, 500, 100);

                            }

                        }


                        else if(curr->prev != nullptr && curr->next != nullptr){
                            // DELTE NON TAIL/HEAD NODE

                            TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                            clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                            bank* temp = curr; 
                            curr = curr->next;
                            curr->prev = temp->prev;
                            curr->prev->next = curr; 

                            delete temp;

                            renderText(renderer,  globalFont, curr->name, White, 500, 100);
                            

                        }

                        else if(curr->next == nullptr && curr->prev != nullptr){

                            TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                            clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                            bank* temp = curr;
                            curr = curr->prev; 
                            curr->next = nullptr;
                            
                            delete temp;

                            renderText(renderer,  globalFont, curr->name, White, 500, 100);
                        }

                        


                                
                        // if(curr->next == nullptr && curr->next == nullptr){
                        //     bank::BankHead = nullptr;
                        //     curr = nullptr;
                        //     currentScreen = ScreenState::ViewBanks;
                        //     break;
                        // }
                        // if(curr->prev == nullptr){
                        //     if(curr->next != nullptr){
                        //         TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                        //         clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                        //         bank* temp = bank::BankHead;
                        //         bank::BankHead = bank::BankHead->next;
                        //         curr = bank::BankHead;
                        //         delete temp;
                        //         curr->prev = nullptr;
                        //         bank::BankHead->prev = nullptr;
                            
                        //     // if(curr->next == nullptr){
                        //     //     std::cout << "bug";
                        //     // }

                        //         renderText(renderer, globalFont, curr->name, White, 500, 100);
                        //     }

                        //     if(curr->next == nullptr){
                        //         currentScreen = ScreenState::MainMenu;
                        //         bank::BankHead = nullptr;
                        //         continue;
                        //     }


                        // }

                        // if(curr->next == nullptr){

                        //     TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                        //     clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                        //     bank* temp = curr;
                        //     curr = curr->prev;
                        //     curr->next = nullptr;
                        //     delete temp;
                        //     renderText(renderer, globalFont, curr->name, White, 500, 100);
                        // }

                        // if(curr->next != nullptr && curr->prev != nullptr){
                        //     TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
                        //     clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                        //     bank* temp = curr;
                        //     curr = curr->next;
                        //     curr->prev = temp->prev;
                        //     curr->prev->next = curr;
                        //     delete temp;

                        //     renderText(renderer, globalFont, curr->name, White, 500, 100);

                        // }

                        DeleteBank.clicked = false;
                        DeleteBank.ButtonColor = Grey;
                        
                    }

                }

                for(auto& button : ViewBanksB){
                    button->RenderButton(renderer);
                    renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
                }
            }

            if(currentScreen == ScreenState::ViewAccounts){
                std::string temp = "";


                if(flag){
                    SDL_RenderClear;
                    renderBackground(renderer);

                    temp = std::to_string(currAcc->balance);
                    renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
                    renderText(renderer, globalFont, temp, White, 500, 130);

                    flag = false;
                }

                if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
                    int mouseX = windowEvent.button.x;
                    int mouseY = windowEvent.button.y; 
                    
                    for(auto& button : ViewAccsB){
                        if(button->isClicked(mouseX, mouseY)){
                            button->clicked = true;
                            button->ButtonColor = Black;
                        }
                    }
                }



                if(windowEvent.type == SDL_MOUSEBUTTONUP){
                    
                    if(Back.clicked){
                        currentScreen = ScreenState::ViewBanks;
                        Back.clicked = false;
                        Back.ButtonColor = Grey;
                        flag = true;
                        allButtons.clear();
                    }

                    if(CreateAccount.clicked){
                        currentScreen = ScreenState::AddAccount;
                        flag = true;
                        allButtons.clear();
                    }

                    if(NextAcc.clicked){
                        if(currAcc->next != nullptr){
                            TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
                            clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                            temp = std::to_string(currAcc->balance);
                            TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight );
                            clearText(renderer, 500, 130, TextWidth, TextHeight, Black );

                            currAcc = currAcc->next;
                            temp = std::to_string(currAcc->balance);

                            renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
                            renderText(renderer, globalFont, temp, White, 500, 130);
                        }

                        NextAcc.clicked = false;
                        NextAcc.ButtonColor = Grey;
                    }

                    if(PrevAcc.clicked){
                        if(currAcc->prev != nullptr){   
                            TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
                            clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

                            temp = std::to_string(currAcc->balance);
                            TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight );
                            clearText(renderer, 500, 130, TextWidth, TextHeight, Black );

                            currAcc = currAcc->prev;
                            temp = std::to_string(currAcc->balance);

                            renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
                            renderText(renderer, globalFont, temp, White, 500, 130);
                        }

                        PrevAcc.clicked = false;
                        PrevAcc.ButtonColor = Grey;
                    }

                    if(Deposit.clicked){
                        currentScreen = ScreenState::Deposit;
                        flag = true;
                        Deposit.clicked = false;
                        Deposit.ButtonColor = Grey;
                    }

                    if(Withdraw.clicked){
                        currentScreen = ScreenState::Withdraw;
                        flag = true;
                        Withdraw.clicked = false;
                        Withdraw.ButtonColor = Grey;
                    }
                }

                // renderBackground(renderer);
                for(auto& button : ViewAccsB){
                    button->RenderButton(renderer);
                    renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
                }



            }

            if(currentScreen == ScreenState::AddBank){
                
                if(flag){
                    SDL_RenderClear(renderer);
                    renderBackground(renderer);

                    SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
                    SDL_Rect TextBox = {100,150, 200, 29};
                    SDL_RenderFillRect(renderer, &TextBox);
                    flag = false;
                }

                std::string temp = "Enter Bank Name";
                renderText(renderer, globalFont, temp, Black, 100, 100);                

                HandleInputText(renderer, windowEvent, bankName, globalFont, currentScreen, 100, 150);
                // HandleKeyDown(renderer, windowEvent, bankName, currentScreen, TextBoxRendered, globalFont);

                if(windowEvent.type == SDL_KEYDOWN){
                    if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
                        if(bankName.length() != 0){
                            createBank(bankName);
                        }
                        currentScreen = ScreenState::MainMenu;
                        bankName = "";
                        flag = false;
                    }

                    if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
                        if(bankName.length() < 10){
                            clearText(renderer, 100, 200, 200, 30, backgroundColor);
                        }

                        if(!bankName.empty()){
                            bankName.pop_back();
                            clearText(renderer, 100, 150, TextWidth, TextHeight, White);
                            renderText(renderer, globalFont, bankName, Black, 100 , 150);
                            std::cout << bankName << "\n";
                        }
                    }
                }
                
            }

            if(currentScreen == ScreenState::AddAccount){

                if(flag){
                    SDL_RenderClear(renderer);
                    renderBackground(renderer);

                    flag = false;
                }
                

                if(Switch == true){
                    std::string temp = "Enter Account Name";
                    renderText(renderer, globalFont, temp, Black, 100, 100);

                    if(renderOnce == false){
                        SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
                        SDL_Rect TextBox = {100,150, 200, 29};
                        SDL_RenderFillRect(renderer, &TextBox);
                        renderOnce = true;
                    }
                
                HandleInputText(renderer, windowEvent, AccName, globalFont, currentScreen, 100, 150);        

                if(windowEvent.type == SDL_KEYDOWN){
                        if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
                            if(AccName.length() != 0){
                                TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight);
                                clearText(renderer, 100, 100, TextWidth, TextHeight, backgroundColor);
                                renderOnce = false;
                                Switch = false;
                                
                            }
                        }

                        if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
                            if(AccName.length() < 10){
                                clearText(renderer, 100, 200, 200, 30, backgroundColor);
                            }

                            if(!AccName.empty()){
                                AccName.pop_back();
                                clearText(renderer, 100, 150, TextWidth, TextHeight, White);
                                renderText(renderer, globalFont, AccName, Black, 100 , 150);
                            }
                        }
                    
                    }
                }

                if(Switch == false){
                    std::string temp = "Enter Account Balance";
                    renderText(renderer, globalFont, temp, Black, 100, 100);


                    if(renderOnce == false){
                        SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
                        SDL_Rect TextBox = {100,200, 200, 29};
                        SDL_RenderFillRect(renderer, &TextBox);
                        renderOnce = true;
                    }

                    HandleInputText(renderer, windowEvent, AccBal, globalFont, currentScreen, 100, 200);

                    if(windowEvent.type == SDL_KEYDOWN){
                        if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
                            if(AccBal.length() != 0){
                                int tempAccBal = std::stoi(AccBal);
                                std::cout << tempAccBal << " THE INT \n";
                                curr->createAccount(tempAccBal, AccName);
                                // curr->createAccount(1000, "TESTING IF WORK");
                                AccBal = "";
                                AccName = "";
                                renderOnce = false;
                                Switch = true;
                                currentScreen = ScreenState::ViewAccounts;
                                flag = true;
                                CreateAccount.clicked = false;
                                CreateAccount.ButtonColor = Grey;
                                
                                
                            }
                        }

                        if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
                            if(AccBal.length() < 10){
                                clearText(renderer, 100, 200, 200, 30, backgroundColor);
                            }

                            if(!AccBal.empty()){
                                AccBal.pop_back();
                                clearText(renderer, 100, 150, TextWidth, TextHeight, White);
                                renderText(renderer, globalFont, AccBal, Black, 100 , 200);
                            }
                        }
                    
                    }
                }
            }

            if(currentScreen == ScreenState::Deposit){

                if(flag){
                    SDL_RenderClear(renderer);
                    renderBackground(renderer);
                    SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
                    SDL_Rect TextBox = {100, 150, 200, 29};
                    SDL_RenderFillRect(renderer, &TextBox);
                    flag = false;
                }
                std::string temp = "Enter Deposit Amount";
                int tempNum = 0;
                renderText(renderer, globalFont, temp, Black, 100, 100);
                temp = "Format with no extra chars";
                renderText(renderer, smallFont, temp, Black, 100, 200);
                temp = "Ex: 1000 not 1,000";
                renderText(renderer, smallFont, temp, Black, 100, 230);

                HandleInputText(renderer, windowEvent, IOcash, globalFont, currentScreen, 100, 150);

                if(windowEvent.type == SDL_KEYDOWN){
                        if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
                            if(IOcash.length() != 0){
                               try{
                                tempNum = std::stoi(IOcash);
                                currAcc->balance += tempNum;

                               } catch(const std::invalid_argument& e){
                                    temp = "Error: Invalid Input Format";
                                    renderText(renderer, globalFont, temp, White, 475, 150);
                               }
                            }

                            currentScreen = ScreenState::ViewAccounts;
                            flag = true;
                            renderBackground(renderer);
                            IOcash = "";
                        }

                        if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
                            if(IOcash.length() < 10){
                                clearText(renderer, 100, 150, 200, 30, White);
                            }

                            if(!IOcash.empty()){
                                IOcash.pop_back();
                                clearText(renderer, 100, 150, TextWidth, TextHeight, White);
                                renderText(renderer, globalFont,IOcash , Black, 100 , 150);
                            }
                        }
                    
                    }

            }
 // here    

            if(currentScreen == ScreenState::Withdraw){

                if(flag){
                    SDL_RenderClear(renderer);
                    renderBackground(renderer);
                    SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
                    SDL_Rect TextBox = {100, 150, 200, 29};
                    SDL_RenderFillRect(renderer, &TextBox);
                    flag = false;
                }
                std::string temp = "Enter Withdraw Amount";
                int tempNum = 0;
                renderText(renderer, globalFont, temp, Black, 100, 100);
                temp = "Format with no extra chars";
                renderText(renderer, smallFont, temp, Black, 100, 200);
                temp = "Ex: 1000 not 1,000";
                renderText(renderer, smallFont, temp, Black, 100, 230);


                HandleInputText(renderer, windowEvent, IOcash, globalFont, currentScreen, 100, 150);

                if(windowEvent.type == SDL_KEYDOWN){
                        if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
                            if(IOcash.length() != 0){
                               try{
                                tempNum = std::stoi(IOcash);

                               } catch(const std::invalid_argument& e){
                                    temp = "Error: Invalid Input Format";
                                    renderText(renderer, globalFont, temp, White, 475, 150);
                               }
                            }

                            if(currAcc->balance - tempNum < 0){
                                temp = "Error: Can't drop below 0 balance";
                                renderText(renderer, globalFont, temp, White, 475, 150);
                                break;
                            }

                            else{
                                currAcc->balance -= tempNum;
                            }



                            currentScreen = ScreenState::ViewAccounts;
                            flag = true;
                            renderBackground(renderer);
                            IOcash = "";
                        }

                        if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
                            if(IOcash.length() < 10){
                                clearText(renderer, 100, 150, 200, 30, White);
                            }

                            if(!IOcash.empty()){
                                IOcash.pop_back();
                                clearText(renderer, 100, 150, TextWidth, TextHeight, White);
                                renderText(renderer, globalFont,IOcash , Black, 100 , 150);
                            }
                        }
                    
                    }

            }

            
        }

        SDL_RenderPresent(renderer);
    }

    // Cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
    
}


// g++ -o testing  testing.cpp bank.cpp -static-libstdc++

// #include <iostream>
// #include "bank.h"


// int main(){

//     int x = 1;
//     createBank("Bank1");
//     createBank("Bank2");
//     createBank("Bank3");

//     for(bank* temp = bank::BankHead; temp != nullptr; temp = temp->next){
//         std::cout << temp->name << " ";
//     }

//     bank* curr = bank::BankHead;
    

//     if(x == 1){
//         bank* temp = bank::BankHead;
//         bank::BankHead = bank::BankHead->next;
//         curr = curr->next;

//         delete temp;


//     }

//     for(bank* temp = bank::BankHead; temp != nullptr; temp = temp->next){
//         std::cout << temp->name << " ";
//     }



//     return 0;
// }