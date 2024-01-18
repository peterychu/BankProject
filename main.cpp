// //
// // g++ -I src/include -o main main.cpp button.cpp bank.cpp -static-libstdc++ -L src/lib -lmingw32 -lSDL2main -lSDL2 
// // g++ -I src/include -o main main.cpp button.cpp -L src/lib -lmingw32 -lSDL2main -lSDL2 

// // g++ -I src/include -o main main.cpp button.cpp bank.cpp -static-libstdc++ -L src/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf


// // Each button -> 

// #include <SDL2/SDL.h>
// #include <iostream>


// const int WIDTH = 800, HEIGHT = 600;

// int main(int argc, char** argv){

// SDL_Init(SDL_INIT_EVERYTHING);
    
//     SDL_Window *window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

//     if(NULL == window){
//         std::cout << "FAIL" << SDL_GetError << std::endl;
//         return 1;
//     }

//     SDL_Event windowEvent;

//     while(true){
//         if(SDL_PollEvent(&windowEvent)){
//             if(SDL_QUIT == windowEvent.type){
//                 break;
//             }
//         }
//     }


//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return EXIT_SUCCESS;
// }

// //------------------------------------------------ CREATE BUTTON--------------------------------------------------------
// // g++ -I src/include -o main main.cpp -L src/lib -lmingw32 -lSDL2main -lSDL2

// #include <SDL2/SDL.h>
// #include <iostream>

// const int WIDTH = 800;
// const int HEIGHT = 600;

// int main(int argc, char* argv[]) {
//     if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
//         std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
//         return 1;
//     }

//     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

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

//     bool quit = false;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }
//         }

//         if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                 int mouseX = windowEvent.button.x;
//                 int mouseY = windowEvent.button.y;

//                 // Check if the mouse click is within the button's coordinates
//                 if (mouseX >= buttonX && mouseX < buttonX + BUTTON_WIDTH &&
//                     mouseY >= buttonY && mouseY < buttonY + BUTTON_HEIGHT) {
//                     buttonClicked = true;
//                     std::cout << "Button Clicked!" << std::endl;
//                 }
//             }
//         }

//         // Clear the renderer
//         SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
//         SDL_RenderClear(renderer);

//         // Render a simple button-like rectangle
//         SDL_Rect buttonRect = {300 , 275, 200, 50 }; // x, y, width, height
//         SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255); // Set color 
//         SDL_RenderFillRect(renderer, &buttonRect); // Render the button

//         // Present the renderer to display the changes
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
// }


// //------------------------------------- MAKE BUTTON CLICKABLE COUT BUTTON CLICKED--------------------------------------------------------

// #include <SDL2/SDL.h>
// #include <iostream>

// const int WIDTH = 800;
// const int HEIGHT = 600;
// const int BUTTON_WIDTH = 200;
// const int BUTTON_HEIGHT = 50;

// int main(int argc, char* argv[]) {
//     if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
//         std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
//         return 1;
//     }

//     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

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

//     bool quit = false;
//     bool buttonClicked = false;

//     int buttonX = (WIDTH - BUTTON_WIDTH) / 2;
//     int buttonY = (HEIGHT - BUTTON_HEIGHT) / 2;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             // Check for mouse button down event
//             if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                 int mouseX = windowEvent.button.x;
//                 int mouseY = windowEvent.button.y;

//                 // Check if the mouse click is within the button's coordinates
//                 if (mouseX >= buttonX && mouseX < buttonX + BUTTON_WIDTH &&
//                     mouseY >= buttonY && mouseY < buttonY + BUTTON_HEIGHT) {
//                     buttonClicked = true;
//                     std::cout << "Button Clicked!" << std::endl;
//                 }
//             }
//         }

//         // Clear the renderer
//         SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
//         SDL_RenderClear(renderer);

//         // Calculate the position to center the button
//         int buttonX = (WIDTH - BUTTON_WIDTH) / 2;
//         int buttonY = (HEIGHT - BUTTON_HEIGHT) / 2;

//         // Render a simple button-like rectangle
//         SDL_Rect buttonRect = { buttonX, buttonY, BUTTON_WIDTH, BUTTON_HEIGHT };
//         SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Set color (e.g., red)
//         SDL_RenderFillRect(renderer, &buttonRect); // Render the button

//         // Present the renderer to display the changes
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
// }


//  ----------------------------------------------MAKE BUTTON GO FROM WHITE TO GRAY TO WHITE--------------------------------------
// #include <SDL2/SDL.h>
// #include <iostream>

// const int WIDTH = 800;
// const int HEIGHT = 600;
// const int BUTTON_WIDTH = 200;
// const int BUTTON_HEIGHT = 50;

// int main(int argc, char* argv[]) {
//     if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
//         std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
//         return 1;
//     }

//     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

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

//     bool quit = false;
//     bool buttonClicked = false;

//     int buttonX = (WIDTH - BUTTON_WIDTH) / 2;
//     int buttonY = (HEIGHT - BUTTON_HEIGHT) / 2;

//     SDL_Color buttonColor = { 255, 255, 255, 255 }; // White color initially

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             // Check for mouse button down event
//             if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                 int mouseX = windowEvent.button.x;
//                 int mouseY = windowEvent.button.y;

//                 // Check if the mouse click is within the button's coordinates
//                 if (mouseX >= buttonX && mouseX < buttonX + BUTTON_WIDTH &&
//                     mouseY >= buttonY && mouseY < buttonY + BUTTON_HEIGHT) {
//                     buttonClicked = true;
//                     buttonColor = { 128, 128, 128, 255 }; // Change color to gray
//                 }
//             }

//             // Check for mouse button up event
//             if (windowEvent.type == SDL_MOUSEBUTTONUP && buttonClicked) {
//                 buttonClicked = false;
//                 buttonColor = { 255, 255, 255, 255 }; // Change color back to white
//             }
//         }

//         // Clear the renderer
//         SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
//         SDL_RenderClear(renderer);

//         // Render the button with the current color
//         SDL_SetRenderDrawColor(renderer, buttonColor.r, buttonColor.g, buttonColor.b, buttonColor.a);
//         SDL_Rect buttonRect = { buttonX, buttonY, BUTTON_WIDTH, BUTTON_HEIGHT };
//         SDL_RenderFillRect(renderer, &buttonRect);

//         // Present the renderer to display the changes
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
// }



// //-----------------------------------------Button clickable and background white, button gray-----------------------------------------


// #include <SDL2/SDL.h>
// #include <iostream>


// const int WIDTH = 800;
// const int HEIGHT = 600;
// const int BUTTON_WIDTH = 200;
// const int BUTTON_HEIGHT = 50;

// int main(int argc, char* argv[]) {
//     if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
//         std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
//         return 1;
//     }

//     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

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

//     bool quit = false;
//     bool buttonClicked = false;

//     //int buttonX = (WIDTH - BUTTON_WIDTH) / 2;
//     //int buttonY = (HEIGHT - BUTTON_HEIGHT) / 2;

//     SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
//     SDL_Color buttonColor = { 128, 128, 128, 255 }; // Gray button

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             // Check for mouse button down event
//             if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                 int mouseX = windowEvent.button.x;
//                 int mouseY = windowEvent.button.y;

//                 // Check if the mouse click is within the button's coordinates
//                 //if (mouseX >= buttonX && mouseX < buttonX + BUTTON_WIDTH &&
//                 //    mouseY >= buttonY && mouseY < buttonY + BUTTON_HEIGHT) {
//                 //    buttonClicked = true;
//                 //    buttonColor = { 0, 0, 0, 255 };
//                 //    std::cout << "Button Clicked" << std::endl;
//                 //}
//             }

//             // Check for mouse button up event
//             if (windowEvent.type == SDL_MOUSEBUTTONUP && buttonClicked) {
//                 buttonClicked = false;
//                 buttonColor = { 128, 128, 128, 255 };
//             }
//         }

//         // Clear the renderer with the background color
//         SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//         SDL_RenderClear(renderer);

//         // Render the first button with the current color
//         SDL_SetRenderDrawColor(renderer, buttonColor.r, buttonColor.g, buttonColor.b, buttonColor.a);
//         SDL_Rect buttonOne = { 100, 325, BUTTON_WIDTH, BUTTON_HEIGHT };
//         SDL_RenderFillRect(renderer, &buttonOne);

//         // Render the second button with the current color  
//         SDL_SetRenderDrawColor(renderer, buttonColor.r, buttonColor.g, buttonColor.b, buttonColor.a);
//         SDL_Rect buttonTwo = { 500, 325, BUTTON_WIDTH, BUTTON_HEIGHT };
//         SDL_RenderFillRect(renderer, &buttonTwo);

//         // Present the renderer to display the changes
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
// }




// //-----------------------------------------Started Encapsulation-----------------------------------------


// #include <SDL2/SDL.h>
// #include "button.h"
// #include <iostream>
// #include <vector>


// const int WINDOW_WIDTH = 800;
// const int WINDOW_HEIGHT = 600;

// int main(int argc, char* argv[]) {
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

//     bool quit = false;

//     SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
//     SDL_Color Grey = { 128, 128, 128, 255 };
//     SDL_Color Black = { 0, 0, 0, 255 };

//     std::vector<button> allButtons;

//     button button1 = button(100, 325, 200, 50, Grey);
//     button button2 = button(500, 325, 200, 50, Grey);

//     allButtons.push_back(button1);
//     allButtons.push_back(button2);
//     //std::cout << "button pushed back" << std::endl;
//     int i =0;

//     for(auto& button : allButtons){
//         std::cout << i << std::endl;
//         i++;
//     }
//     while (!quit) {
//         SDL_Event windowEvent;

    
//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                 int mouseX = windowEvent.button.x;
//                 int mouseY = windowEvent.button.y;

                
//                 if(button1.isClicked(mouseX, mouseY)){
//                     button1.ButtonColor = Black;
//                     std::cout << "Button 1 Clicked" << std::endl;
//                 }

//                 if(button2.isClicked(mouseX, mouseY)){
//                     button2.ButtonColor = Black;
//                     std::cout << "Button 2 Clicked" << std::endl;
//                 }
                


//                 for(auto& button : allButtons){
//                     if(button.isClicked(mouseX, mouseY)){
//                         button.ButtonColor = Black;
//                         button.clicked = true;
//                         std::cout << "button clicked true" << std::endl;
//                     }
//                 }
//             }

            
//             if (windowEvent.type == SDL_MOUSEBUTTONUP && button1.clicked == true) {
//                 button1.clicked = false;
//                 button1.ButtonColor = Grey;
//             }

//             if (windowEvent.type == SDL_MOUSEBUTTONUP && button2.clicked == true) {
//                 button2.clicked = false;
//                 button2.ButtonColor = Grey;
//             }
            

//            for(auto& button : allButtons){
//             if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                 button.ButtonColor = Grey;
//                 button.clicked = false;
//                 std::cout << "button released true";
//             }
//            }

//         }

//         // Clear the renderer with the background color
//         SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//         SDL_RenderClear(renderer);

        
//         button1.RenderButton(renderer);
//         button2.RenderButton(renderer);
        

//         for(auto& button : allButtons){
//             button.RenderButton(renderer);
//         }

//         // Present the renderer to display the changes
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
    
// }


// // g++ -o main main.o button.o -L src/lib -lmingw32 -lSDL2main -lSDL2


// // ---------------------------------------------- Partial encapsalation done, buttons clicking logic done

// #include <SDL2/SDL.h>
// #include "button.h"
// #include <iostream>
// #include <vector>

// enum class ScreenState{
//     MainMenu,
//     ViewAccounts,
//     CreatingAccount,
//     DeletingAccount
// };

// const int WINDOW_WIDTH = 800;
// const int WINDOW_HEIGHT = 475;
// const int BUTTON_WIDTH = 200;
// const int BUTTON_HEIGHT = 50; 

// int main(int argc, char* argv[]) {
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

//     bool quit = false;

//     SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
//     SDL_Color Grey = { 128, 128, 128, 255 };
//     SDL_Color Black = { 0, 0, 0, 255 };

//     std::vector<button> allButtons;

//     //button button1 = button(100, 425, 200, 50, Grey);
//     //button button2 = button(100, 325, 200, 50, Grey);

    
//     allButtons.push_back(button(100,100,200,50,Grey)); // VIEW ACC DETAILS 
//     allButtons.push_back(button(100,175,200,50,Grey)); // CREATE NEW ACC 
//     allButtons.push_back(button(100,250,200,50,Grey)); // DELETE ACC 
//     allButtons.push_back(button(100,325,200,50,Grey)); // TEMP
//     //allButtons.push_back(button2);
    


//     ScreenState currentScreen = ScreenState::MainMenu;
//     while (!quit) {
//         SDL_Event windowEvent;

    
//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
                
//                 button buttonTest = button(100,100,200,50,Grey);// VIEW BANKS
//                 allButtons.push_back(buttonTest);
//                 //allButtons.push_back(button(100,100,200,50,Grey)); // VIEW ACC DETAILS 
//                 //allButtons.push_back(button(100,175,200,50,Grey)); // CREATE NEW ACC 
//                 //allButtons.push_back(button(100,250,200,50,Grey)); // DELETE ACC 
//                 //allButtons.push_back(button(100,325,200,50,Grey)); // TEMP

                
//                 if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y;

//                     for(auto& button : allButtons){
//                         if(button.isClicked(mouseX, mouseY)){
//                             button.ButtonColor = Black;
//                             button.clicked = true;
//                             currentScreen = ScreenState::CreatingAccount;
//                         }
//                     }
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                     }
//                 }
                
//             }

//             if(currentScreen == ScreenState::CreatingAccount){
                
//             }

//         }

//         //FILL ENTIRE WINDOW, OBS 
//         // Clear the renderer with the background color
//         //SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//         //SDL_RenderClear(renderer);


//         // RENDERING BELOW ---------------------------------------------------------------------------------------------
        
//         if(currentScreen == ScreenState::MainMenu){
//             SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//             SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//             SDL_RenderFillRect(renderer, &LeftSide);

//             SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//             SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//             SDL_RenderFillRect(renderer, &RightSide);

//             for(auto& button : allButtons){
//                 button.RenderButton(renderer);
//             }
//         }
        
        

        
//         for(auto& button : allButtons){
//             button.RenderButton(renderer);
//         }
        

//         // Present the renderer to display the changes
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
    
    
// }



// // states MENU : show x buttons 1 to view accs, 1 to create new acc, 1 to delete acc 
// // make sure to add back button in the different states 
// // change password option 
// // add / withdraw funds option when you select an account 

// // start with menu part 

// // ----------------------------------- HANDLING SCREEN STATE CHANGES


// #include <SDL2/SDL.h>
// #include <SDL2/SDL_ttf.h>
// #include "button.h"
// #include "bank.h"
// #include <iostream>
// #include <vector>

// // enum class ScreenStates{
// //     MainMenu,
// //     ViewAccounts,
// //     CreatingAccount,
// //     DeletingAccount
// // };


// // void loadFont(){
// //     TTF_Font* globalFont = TTF_OpenFont("Roboto-Regular.tff", 12);
// //     if(globalFont == nullptr){
// //     cout << "Error loading font \n";
// //     }

// // }

// TTF_Font* globalFont = nullptr;

// void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y){ 

//     if(font == nullptr){
//         cout << "Error loading font \n";
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

// SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
// SDL_Color Grey = { 128, 128, 128, 255 };
// SDL_Color Black = { 0, 0, 0, 255 };
// SDL_Color White = { 255, 240, 200, 255};


// const int WINDOW_WIDTH = 800;
// const int WINDOW_HEIGHT = 475;
// const int BUTTON_WIDTH = 200;
// const int BUTTON_HEIGHT = 50; 

// int main(int argc, char* argv[]) {
    
//     //bank boa;
//     //boa.createAccount(100, "Bob"); 

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

//     //button button1 = button(100, 425, 200, 50, Grey);
//     //button button2 = button(100, 325, 200, 50, Grey);

    
//     //allButtons.push_back(button(100,100,200,50,Grey)); // VIEW ACC DETAILS 
//     //allButtons.push_back(button(100,175,200,50,Grey)); // CREATE NEW ACC 
//     //allButtons.push_back(button(100,250,200,50,Grey)); // DELETE ACC 
//     //allButtons.push_back(button(100,325,200,50,Grey)); // TEMP
//     //allButtons.push_back(button2);
    


//     ScreenState currentScreen = ScreenState::MainMenu;
//     while (!quit) {
//         SDL_Event windowEvent;

    
//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
                
//                 button buttonTest = button(100,100,200,50,Grey, ScreenState::CreatingAccount);// VIEW BANKS
//                 allButtons.push_back(buttonTest);
//                 //allButtons.push_back(button(100,100,200,50,Grey)); // VIEW ACC DETAILS 
//                 //allButtons.push_back(button(100,175,200,50,Grey)); // CREATE NEW ACC 
//                 //allButtons.push_back(button(100,250,200,50,Grey)); // DELETE ACC 
//                 //allButtons.push_back(button(100,325,200,50,Grey)); // TEMP

                
//                 if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y;

//                     for(auto& button : allButtons){
//                         if(button.isClicked(mouseX, mouseY)){
//                             button.ButtonColor = Black;
//                             button.clicked = true;
//                         }
//                     }
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                         currentScreen = button.Screen;
//                         allButtons.clear();
//                     }
//                 }

//                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 // SDL_RenderClear(renderer);

//                 SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//                 SDL_RenderFillRect(renderer, &LeftSide);

//                 SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 SDL_RenderFillRect(renderer, &RightSide);


//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                 }

//                 SDL_RenderPresent(renderer);
                
//             }

//             if(currentScreen == ScreenState::CreatingAccount){

//                 button BackTestButton = button(200,100,200,50,Grey, ScreenState::MainMenu);
//                 allButtons.push_back(BackTestButton);

//                 if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y;

//                     for(auto& button : allButtons){
//                         if(button.isClicked(mouseX, mouseY)){
//                             button.ButtonColor = Black;
//                             button.clicked = true;
//                         }
//                     }
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                         currentScreen = button.Screen;
//                         allButtons.clear();
//                     }
//                 }

//                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 // SDL_RenderClear(renderer);


//                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &LeftSide);

//                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &RightSide);

//                 string test = "testing";

//                 renderText(renderer, globalFont, test, White, 500, 100 );

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                 }

//                 SDL_RenderPresent(renderer);
//             }

//         }

//         //FILL ENTIRE WINDOW, OBS 
//         // Clear the renderer with the background color
//         //SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//         //SDL_RenderClear(renderer);


//         // RENDERING BELOW ---------------------------------------------------------------------------------------------
        
        
//         if(currentScreen == ScreenState::MainMenu){
//             SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//             SDL_RenderClear(renderer);


//             for(auto& button : allButtons){
//                 button.RenderButton(renderer);
//             }
//         }
        

//         // Present the renderer to display the changes
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
    
// }



// //------------------------------------------------ HAVE BASE CHANGE SCREEN DONE, ENCAPSULATE MB DOWN AND UP AND REMOVE OLD CODE


// #include <SDL2/SDL.h>
// #include <SDL2/SDL_ttf.h>
// #include "button.h"
// #include "bank.h"
// #include <iostream>
// #include <vector>

// TTF_Font* globalFont = nullptr;

// void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y){ 

//     if(font == nullptr){
//         cout << "Error loading font \n";
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

// // void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string text, SDL_Color color, int x, int y){ 

// //     if(font == nullptr){
// //         cout << "Error loading font \n";
// //     }

// //     SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
// //     if(textSurface == nullptr){
// //         std::cout << "Error rendering text surface" << std::endl;
// //         return;
// //     }

// //     SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
// //     if(textTexture == nullptr){
// //         std::cout << "Error rendering text texture" << std::endl;
// //         return;
// //     }

// //     SDL_Rect dstRect = {x, y, textSurface->w, textSurface->h};

// //     SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
// //     SDL_FreeSurface(textSurface);
// //     SDL_DestroyTexture(textTexture);
// // }


// const SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
// const SDL_Color Grey = { 128, 128, 128, 255 };
// const SDL_Color Black = { 0, 0, 0, 255 };
// const SDL_Color White = { 255, 240, 200, 255};


// constexpr const int WINDOW_WIDTH = 800;
// constexpr const int WINDOW_HEIGHT = 475;
// constexpr const int BUTTON_WIDTH = 200;
// constexpr const int BUTTON_HEIGHT = 50; 

// void HandleMBDown(int mouseX, int mouseY, std::vector<button>& input){
    
//     // int mouseX = windowEvent.button.x;
//     // int mouseY = windowEvent.button.y;

//     for(auto& button : input){
//         if(button.isClicked(mouseX, mouseY)){
//             button.ButtonColor = Black;
//             button.clicked = true;
//         }
//     }
// }


// int main(int argc, char* argv[]) {
    
//     bank boa;
//     boa.createAccount(100, "Bob"); 

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

//     //button button1 = button(100, 425, 200, 50, Grey);
//     //button button2 = button(100, 325, 200, 50, Grey);

    
//     //allButtons.push_back(button(100,100,200,50,Grey)); // VIEW ACC DETAILS 
//     //allButtons.push_back(button(100,175,200,50,Grey)); // CREATE NEW ACC 
//     //allButtons.push_back(button(100,250,200,50,Grey)); // DELETE ACC 
//     //allButtons.push_back(button(100,325,200,50,Grey)); // TEMP
//     //allButtons.push_back(button2);

//     ScreenState currentScreen = ScreenState::MainMenu;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
                
//                 // button buttonTest = button(100,100,200,50,Grey, ScreenState::CreatingAccount); // TEST 1 
//                 // button buttonTest2 = button(100,175,200,50,Grey, ScreenState::ViewAccounts); // TEST 2 
//                 // allButtons.push_back(buttonTest);
//                 // allButtons.push_back(buttonTest2);
//                 // allButtons.push_back(button(100,100,200,50,Grey)); // VIEW ACC DETAILS 
//                 // allButtons.push_back(button(100,175,200,50,Grey)); // CREATE NEW ACC 
//                 // allButtons.push_back(button(100,250,200,50,Grey)); // DELETE ACC 
//                 // allButtons.push_back(button(100,325,200,50,Grey)); // TEMP

//                 allButtons.push_back(button(100,100,200,50, Grey, ScreenState::ViewBanks, "View Bank Accounts"));
//                 allButtons.push_back(button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank Account"));
//                 allButtons.push_back(button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank Accounts"));
//                 // renderText(renderer, globalFont, aa, Black, 100,100 );
//                 // buttons should be 1. View bank acc 3. add bank account 4. delete bank account 2. Quit program 

                
//                 // if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                 //     int mouseX = windowEvent.button.x;
//                 //     int mouseY = windowEvent.button.y; 

//                 //     // FOR LOOOP vs IF STATEMENT LOGIC HANDLED BY BUTTON SCREENSTATE ATTRIBUTE. USE FOR LOOP

//                 //     for(auto& button : allButtons){
//                 //         if(button.isClicked(mouseX, mouseY)){
//                 //             button.ButtonColor = Black;
//                 //             button.clicked = true;
//                 //         }
//                 //     }
                    
//                 // }

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                         currentScreen = button.Screen;
//                         allButtons.clear();
//                     }
//                 }

//                 SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//                 SDL_RenderFillRect(renderer, &LeftSide);

//                 SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 SDL_RenderFillRect(renderer, &RightSide);

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }

//                 // renderText(renderer, globalFont, allButtons.at(0).text, Black, 100,100 );
//                 // renderText()
//                 SDL_RenderPresent(renderer);
                
//             }

//             if(currentScreen == ScreenState::ViewBanks){

//                 button BackTestButton = button(100,100,200,50,Grey, ScreenState::MainMenu, "Back");
//                 allButtons.push_back(BackTestButton);

//                 if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y;

//                     HandleMBDown(mouseX, mouseY, allButtons);
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                         currentScreen = button.Screen;
//                         allButtons.clear();
//                     }
//                 }

//                 string test = "first test"; 
//                 // string test = boa.head->getAccName();

//                 // renderText(renderer, globalFont, test, White, 500, 100 );

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }

//                 SDL_RenderPresent(renderer);
//             }

//             if(currentScreen == ScreenState::ViewAccounts){
//                 SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 SDL_RenderClear(renderer);

//                 SDL_RenderPresent(renderer);
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



// // --------------------------------- WORK ON MAKING ALL BUTTONS AND LINKING CORRECTLY-------------------------------------------

// // #include <SDL2/SDL.h>
// // #include <SDL2/SDL_ttf.h>
// // #include "button.h"
// // #include "bank.h"
// // #include <iostream>
// // #include <vector>

// // TTF_Font* globalFont = nullptr;

// // void renderText(SDL_Renderer* renderer, TTF_Font* font, std::string &text, SDL_Color color, int x, int y){ 

// //     if(font == nullptr){
// //         std::cout << "Error loading font \n";
// //     }

// //     SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
// //     if(textSurface == nullptr){
// //         std::cout << "Error rendering text surface" << std::endl;
// //         return;
// //     }

// //     SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
// //     if(textTexture == nullptr){
// //         std::cout << "Error rendering text texture" << std::endl;
// //         return;
// //     }

// //     SDL_Rect dstRect = {x, y, textSurface->w, textSurface->h};

// //     SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
// //     SDL_FreeSurface(textSurface);
// //     SDL_DestroyTexture(textTexture);
// // }



// //                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
// //                 // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
// //                 // SDL_RenderFillRect(renderer, &LeftSide);

// //                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
// //                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
// //                 // SDL_RenderFillRect(renderer, &RightSide);

// // void HandleMBDown(int mouseX, int mouseY, std::vector<button>& input){

// //     for(auto& button : input){
// //         if(button.isClicked(mouseX, mouseY)){
// //             button.ButtonColor = { 0, 0, 0, 255 };
// //             button.clicked = true;
// //         }
// //     }
// // }

// // const SDL_Color backgroundColor = { 255, 240, 200, 255  }; // White background
// // const SDL_Color Grey = { 128, 128, 128, 255 };
// // const SDL_Color Black = { 0, 0, 0, 255 };
// // const SDL_Color White = { 255, 240, 200, 255};


// // constexpr const int WINDOW_WIDTH = 800;
// // constexpr const int WINDOW_HEIGHT = 475;
// // constexpr const int BUTTON_WIDTH = 200;
// // constexpr const int BUTTON_HEIGHT = 50; 

// // void renderBackground(SDL_Renderer* renderer){
// //     SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
// //     SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
// //     SDL_RenderFillRect(renderer, &LeftSide);

// //     SDL_SetRenderDrawColor(renderer, 0,0,0,225);
// //     SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
// //     SDL_RenderFillRect(renderer, &RightSide);
// // }

// // bank banks;
// // std::string bankName; 

// // int main(int argc, char* argv[]) {
    
// //     // bank boa;
// //     // boa.createAccount(100, "Bob"); 

// //     if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
// //         std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
// //         return 1;
// //     }

// //     SDL_Window* window = SDL_CreateWindow("Test App", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

// //     if (window == nullptr) {
// //         std::cerr << "SDL window creation failed: " << SDL_GetError() << std::endl;
// //         SDL_Quit();
// //         return 1;
// //     }

// //     SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

// //     if (renderer == nullptr) {
// //         std::cerr << "SDL renderer creation failed: " << SDL_GetError() << std::endl;
// //         SDL_DestroyWindow(window);
// //         SDL_Quit();
// //         return 1;
// //     }

// //     if (TTF_Init() != 0) {
// //     std::cout << "this bitch dont work" << std::endl;
// //         return 1;
// //     }

// //     TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);

// //     bool quit = false;

// //     std::vector<button> allButtons;

// //     ScreenState currentScreen = ScreenState::MainMenu;

// //     while (!quit) {
// //         SDL_Event windowEvent;

// //         while (SDL_PollEvent(&windowEvent)) {
// //             if (windowEvent.type == SDL_QUIT) {
// //                 quit = true;
// //             }

// //             if(currentScreen == ScreenState::MainMenu){
// //                 SDL_RenderClear(renderer);

// //                 allButtons.push_back(button(100,100,200,50, Grey, ScreenState::ViewBanks, "View Bank Accounts"));
// //                 allButtons.push_back(button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank Account"));
// //                 allButtons.push_back(button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank Accounts"));
// //                 // renderText(renderer, globalFont, aa, Black, 100,100 );
// //                 // buttons should be 1. View bank acc 3. add bank account 4. delete bank account 2. Quit program 

// //                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
// //                     int mouseX = windowEvent.button.x;
// //                     int mouseY = windowEvent.button.y; 
// //                     HandleMBDown(mouseX, mouseY, allButtons);
// //                 }

// //                 for(auto& button : allButtons){
// //                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
// //                         button.ButtonColor = Grey;
// //                         button.clicked = false;
// //                         currentScreen = button.Screen;
// //                         allButtons.clear();
// //                     }
// //                 }

// //                 if(windowEvent.type == SDL_KEYDOWN){
// //                     if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
// //                         SDL_Log("Enter pressed");
// //                     }
// //                 }

// //                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
// //                 // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
// //                 // SDL_RenderFillRect(renderer, &LeftSide);

// //                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
// //                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
// //                 // SDL_RenderFillRect(renderer, &RightSide);

// //                 renderBackground(renderer);

// //                 for(auto& button : allButtons){
// //                     button.RenderButton(renderer);
// //                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
// //                 }

// //                 SDL_RenderPresent(renderer);
                
// //             }

// //             if(currentScreen == ScreenState::ViewBanks){
// //                 SDL_RenderClear(renderer);

// //                 if(banks.BankHead == nullptr){
// //                     currentScreen = ScreenState::MainMenu;
// //                 }

// //                 if(banks.next != nullptr){
                    
// //                 }

// //                 // button BackTestButton = button(100,100,200,50,Grey, ScreenState::MainMenu, "Back");
// //                 // allButtons.push_back(button(100, 100, 200, 50, Grey, );
// //                 // allButtons.push_back(b)

// //                 if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
// //                     int mouseX = windowEvent.button.x;
// //                     int mouseY = windowEvent.button.y;

// //                     HandleMBDown(mouseX, mouseY, allButtons);
// //                 }

// //                 for(auto& button : allButtons){
// //                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
// //                         button.ButtonColor = Grey;
// //                         button.clicked = false;
// //                         currentScreen = button.Screen;
// //                         allButtons.clear();
// //                     }
// //                 }

// //                 std::string test = "first test"; 
// //                 // string test = boa.head->getAccName();

// //                 // renderText(renderer, globalFont, test, White, 500, 100 );
// //                 renderBackground(renderer);

// //                 for(auto& button : allButtons){
// //                     button.RenderButton(renderer);
// //                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
// //                 }

// //                 SDL_RenderPresent(renderer);
// //             }

// //             if(currentScreen == ScreenState::AddBank){
                
// //                 // SDL_RenderClear(renderer);
// //                 // renderBackground(renderer);

// //                 std::string temp = "Enter Bank Name";
// //                 renderText(renderer, globalFont, temp, Black, 100, 100);
// //                 // while(SDL_PollEvent(&bankInput) != 0){
// //                 //     const Uint8* keyboardState = SDL_GetKeyboardState(NULL);
// //                 //     if(bankInput.type == SDL_TEXTINPUT){
                        
// //                 //         if(bankInput.text.text[0] == '\r'){
// //                 //             // currentScreen = ScreenState::MainMenu;
// //                 //             std::cout << "Transitioned to MainMenu" << std::endl;
// //                 //         }

// //                 //         bankName += bankInput.text.text;
// //                 //         std::cout << "Key Pressed" << std::endl;
// //                 //         renderText(renderer, globalFont, bankName, Black, 100, 200);
// //                 //     }
                    
// //                 // }
                
// //                 if(windowEvent.type == SDL_TEXTINPUT){
// //                     renderBackground(renderer);
// //                     bankName += windowEvent.text.text;
// //                     renderText(renderer, globalFont, bankName, Black, 100 , 150);
// //                 }

// //                 else if(windowEvent.type == SDL_KEYDOWN){
// //                     if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
// //                         currentScreen = ScreenState::MainMenu;
// //                         bankName = "";
// //                     }
// //                 }
                
// //             }

// //             // if(currentScreen == ScreenState::ViewAccounts){
// //             //     SDL_SetRenderDrawColor(renderer, 0,0,0,225);
// //             //     SDL_RenderClear(renderer);

// //             //     SDL_RenderPresent(renderer);
// //             // }

// //         }

// //         SDL_RenderPresent(renderer);
// //     }

// //     // Cleanup
// //     SDL_DestroyRenderer(renderer);
// //     SDL_DestroyWindow(window);
// //     SDL_Quit();

// //     return 0;
    
// // }


// -------------------------------------------- TESTING TO MAKE SURE BANK.CPP LISTS WORKS CORRECTLY

// #include "bank.h"
// #include <iostream>

// int main(){


//     createBank("Testing shit");
//     createBank("Yurt");

//     bank* curr = bank::BankHead->next;
    
//     std::cout << curr->name << "\n";
//     // createBank("Boa");

//     // std::cout << BankHead->name << "\n";


//     // std::cout << "HELLO WORLD";


//     // return 0;

// }

// g++ -I src/include -o main main.cpp button.cpp bank.cpp -static-libstdc++ -L src/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf

// ---------------------------------- FIXED BANK AND AUTO CREATE AND POINTERS. ONTO BUTTON FUNC

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
// bool TextBoxRendered = false;
// bool renderOnce = false;


// int main(int argc, char* argv[]) {
    
//     createBank("Test1");
//     createBank("Test2");
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

//     ScreenState currentScreen = ScreenState::MainMenu;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
//                 SDL_RenderClear(renderer);

//                 allButtons.push_back(button(100,100,200,50, Grey, ScreenState::ViewBanks, "View Bank Accounts"));
//                 allButtons.push_back(button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank Account"));
//                 allButtons.push_back(button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank Accounts"));
//                 // renderText(renderer, globalFont, aa, Black, 100,100 );
//                 // buttons should be 1. View bank acc 3. add bank account 4. delete bank account 2. Quit program 

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                         currentScreen = button.Screen;
//                         allButtons.clear();
//                     }
//                 }

//                 // if(windowEvent.type == SDL_KEYDOWN){
//                 //     if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                 //         SDL_Log("Enter pressed");
//                 //     }
//                 // }

//                 // SDL_SetRenderDrawColor(renderer, backgroundColor.r, backgroundColor.g, backgroundColor.b, backgroundColor.a);
//                 // SDL_Rect LeftSide = {0,0, WINDOW_WIDTH / 2, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &LeftSide);

//                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &RightSide);

//                 renderBackground(renderer);

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }

//                 SDL_RenderPresent(renderer);
                
//             }

//             if(currentScreen == ScreenState::ViewBanks){
//                 // SDL_RenderClear(renderer);
//                 allButtons.push_back(button(100, 100, 200, 50, Grey, ScreenState::MainMenu, "Back"));
//                 allButtons.push_back(button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Account"));
//                 allButtons.push_back(button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Acc"));
//                 bank* curr = bank::BankHead;
//                 if(curr == nullptr){
//                     std::cout << "Bank head is null \n";
//                     currentScreen = ScreenState::MainMenu;
//                     break;
//                 }
                
//                 if(!renderOnce){
//                     renderText(renderer, globalFont, curr->name, White, 500 , 100);
//                     renderOnce = true;
//                 }
                
//                 // renderText(renderer, globalFont, curr->name, White, 500 , 100);

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                         // currentScreen = button.Screen;
//                         if(button.Screen == ScreenState::MainMenu){
//                             renderOnce = false;
//                             currentScreen = button.Screen;
//                         }

//                         if(button.Screen == ScreenState::NextAcc){
//                             TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             renderText(renderer, globalFont, curr->next->name, White, 500, 100);
//                         }
//                         allButtons.clear();
//                     }
//                 }


            
//                 // else if(curr != nullptr && curr->next == nullptr){
//                 //     renderText(renderer, globalFont, curr->name, White, 500 , 100);
//                 //     // std::cout << curr->name;
//                 // }
                
//                 // if(banks->next != nullptr){
                    
//                 // }

//                 // button BackTestButton = button(100,100,200,50,Grey, ScreenState::MainMenu, "Back");
//                 // allButtons.push_back(button(100, 100, 200, 50, Grey, );
//                 // allButtons.push_back(b)

//                 // if (windowEvent.type == SDL_MOUSEBUTTONDOWN) {
//                 //     int mouseX = windowEvent.button.x;
//                 //     int mouseY = windowEvent.button.y;

//                 //     HandleMBDown(mouseX, mouseY, allButtons);
//                 // }

//                 // for(auto& button : allButtons){
//                 //     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                 //         button.ButtonColor = Grey;
//                 //         button.clicked = false;
//                 //         currentScreen = button.Screen;
//                 //         allButtons.clear();
//                 //     }
//                 // }

//                 // std::string test = "first test"; 
//                 // // string test = boa.head->getAccName();

//                 // // renderText(renderer, globalFont, test, White, 500, 100 );
//                 // renderBackground(renderer);

//                 // for(auto& button : allButtons){
//                 //     button.RenderButton(renderer);
//                 //     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 // }

//                 // SDL_RenderPresent(renderer);

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }
//             }

//             if(currentScreen == ScreenState::AddBank){
//                 // SDL_RenderClear(renderer);
//                 // renderBackground(renderer);

//                 std::string temp = "Enter Bank Name";
//                 renderText(renderer, globalFont, temp, Black, 100, 100);

//                 if(!TextBoxRendered){
//                     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                     SDL_Rect TextBox = {100,150, 200, 29};
//                     SDL_RenderFillRect(renderer, &TextBox);
//                     TextBoxRendered = true;
//                 }

//                 // SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//                 // SDL_Rect RightSide = {WINDOW_WIDTH /2 , 0, WINDOW_WIDTH, WINDOW_HEIGHT};
//                 // SDL_RenderFillRect(renderer, &RightSide);
//                 // while(SDL_PollEvent(&bankInput) != 0){
//                 //     const Uint8* keyboardState = SDL_GetKeyboardState(NULL);
//                 //     if(bankInput.type == SDL_TEXTINPUT){
                        
//                 //         if(bankInput.text.text[0] == '\r'){
//                 //             // currentScreen = ScreenState::MainMenu;
//                 //             std::cout << "Transitioned to MainMenu" << std::endl;
//                 //         }

//                 //         bankName += bankInput.text.text;
//                 //         std::cout << "Key Pressed" << std::endl;
//                 //         renderText(renderer, globalFont, bankName, Black, 100, 200);
//                 //     }
                    
//                 // }
                
//                 if(windowEvent.type == SDL_TEXTINPUT){
//                     // renderBackground(renderer);
//                     if(bankName.length() < 10){
//                         bankName += windowEvent.text.text;
//                         TTF_SizeText(globalFont, bankName.c_str(), &TextWidth, &TextHeight);
//                         clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                         // std::cout << TextWidth << " " << TextHeight << "\n";
//                         renderText(renderer, globalFont, bankName, Black, 100 , 150);
//                     }

//                     else{
//                         std::string temp = "Error, name length greater than 10";
//                         renderText(renderer, globalFont, temp, Black, 100, 200);
//                         // sleep(5);
//                         // clearText(renderer, 200, 200, 200, 30, backgroundColor);
//                     }
                    
                    
//                 }

//                 else if(windowEvent.type == SDL_KEYDOWN){
//                     if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                         createBank(bankName);
//                         currentScreen = ScreenState::MainMenu;
//                         bankName = "";
//                     }

//                     if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                         if(bankName.length() < 10){
//                             clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                         }

//                         if(!bankName.empty()){
//                             bankName.pop_back();
//                             clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                             renderText(renderer, globalFont, bankName, Black, 100 , 150);
//                             std::cout << bankName << "\n";
//                         }
//                     }
//                 }
                
//             }

//             // if(currentScreen == ScreenState::ViewAccounts){
//             //     SDL_SetRenderDrawColor(renderer, 0,0,0,225);
//             //     SDL_RenderClear(renderer);

//             //     SDL_RenderPresent(renderer);
//             // }

//         }

//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
    
// }

// --------------------------------------------------- clearn up redudntant code -----------------------------------------------------------------


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
//     account* currAcc = nullptr;
//     // currAcc = curr->AccHead;     
//     curr->createAccount(100, "TestAcc1");
//     currAcc = curr->AccHead; 

//     curr = curr->next;
//     curr->createAccount(100, "TestAcc2");
//     curr = bank::BankHead;
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

//     ScreenState currentScreen = ScreenState::MainMenu;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
//                 SDL_RenderClear(renderer);

//                 allButtons.push_back(button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks"));
//                 allButtons.push_back(button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank"));
//                 allButtons.push_back(button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank"));
//                 // renderText(renderer, globalFont, aa, Black, 100,100 );
//                 // buttons should be 1. View bank acc 3. add bank account 4. delete bank account 2. Quit program 

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);
//                 }

//                 for(auto& button : allButtons){
//                     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                         button.ButtonColor = Grey;
//                         button.clicked = false;
//                         currentScreen = button.Screen;
//                         allButtons.clear();
//                     }
//                 }

//                 renderBackground(renderer);

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }

//                 SDL_RenderPresent(renderer);
                
//             }

//             if(currentScreen == ScreenState::ViewBanks){
//                 // SDL_RenderClear(renderer);
//                 // bank* curr = bank::BankHead;

//                 // allButtons.push_back(button(100, 100, 200, 50, Grey, ScreenState::MainMenu, "Back"));
//                 // allButtons.push_back(button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Account"));
//                 // allButtons.push_back(button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Acc"));

//                 button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
//                 button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "View Accounts");
//                 button NextAcc = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Bank");
//                 button PrevAcc = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Bank");

//                 allButtons.push_back(Back);
//                 allButtons.push_back(SelectAcc);
//                 allButtons.push_back(NextAcc);
//                 allButtons.push_back(PrevAcc);

//                 if(curr == nullptr){
//                     std::cout << "Bank head is null \n";
//                     currentScreen = ScreenState::MainMenu;
//                     break;
//                 }
            
//                 renderText(renderer, globalFont, curr->name, White, 500 , 100);

//                 // renderText(renderer, globalFont, curr->name, White, 500, 100);

//                 // curr = curr->next;
                
//                 // renderText(renderer, globalFont, curr->name, White, 500 , 100);

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);

//                     // for(auto& button: allButtons){
//                     //     std::cout << button.text << i << std::endl;
//                     //     i++;
//                     // }
//                     if(Back.isClicked(mouseX, mouseY)){
//                         currentScreen = ScreenState::MainMenu;
//                         allButtons.clear();
//                     }
                    
//                     if(NextAcc.isClicked(mouseX, mouseY) == true){
//                         if(curr->next != nullptr){
//                             TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             curr = curr->next;
//                             renderText(renderer, globalFont, curr->name, White, 500, 100);
//                         }
//                     }

//                     if(PrevAcc.isClicked(mouseX, mouseY) == true){
//                         if(curr->prev != nullptr){
//                             TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             curr = curr->prev;
//                             renderText(renderer, globalFont, curr->name, White, 500, 100);
//                         }
//                     }

//                     if(SelectAcc.isClicked(mouseX, mouseY)){
//                         currentScreen = ScreenState::ViewAccounts;
//                         SDL_RenderClear(renderer);
//                         allButtons.clear();
//                     }
//                 }


//                 // if(windowEvent.type == SDL_MOUSEBUTTONUP){
//                 //         for(auto& button : allButtons){
//                 //             // if(button.clicked == true && button.Screen == ScreenState::NextAcc){
//                 //             //     button.clicked = false;
//                 //             //     if(curr != nullptr){
//                 //             //         // button.clicked = false;
//                 //             //         std::cout << curr->name << " " << i << std::endl;
//                 //             //     // std::cout << "clicked" << std::endl;
//                 //             //         curr = curr->next;
//                 //             //     }
//                 //             // }

//                 //             std::cout << button.text << i << std::endl;
//                 //             i++;
//                 //         }

//                 //         // button.clicked = false;
//                 // }
                        
                    
                


//                 // for(auto& button : allButtons){
//                 //     if(button.clicked){
//                 //         if(button.Screen == ScreenState::NextAcc){
//                 //             std::cout << "Button NextAcc" << std::endl;
//                 //         }
//                 //     }

//                 //     button.clicked = false;
//                 // }

//                 // for(auto& button : allButtons){
//                 //     if(windowEvent.type == SDL_MOUSEBUTTONUP && button.clicked == true){
//                 //         button.ButtonColor = Grey;
//                 //         button.clicked = false;
//                 //         // currentScreen = button.Screen;
//                 //         if(button.Screen == ScreenState::MainMenu){
//                 //             renderOnce = false;
//                 //             currentScreen = button.Screen;
                            
//                 //         }

//                 //         if(button.Screen == ScreenState::NextAcc){
//                 //             // TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                 //             // clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                 //             curr = curr->next;
//                 //             renderText(renderer, globalFont, curr->name, White, 500, 100);
//                 //         }

//                 //         // if(button.Screen == ScreenState::PrevAcc){
//                 //         //     TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                 //         //     clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                 //         //     // renderText(renderer, globalFont, curr->prev->name, White, 500, 100);
//                 //         // }

//                 //         // allButtons.clear();
//                 //     }
                    
//                 // }

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }
//             }

//             if(currentScreen == ScreenState::ViewAccounts){
//                 // SDL_RenderClear(renderer);
//                 renderBackground(renderer);

//                 button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
//                 // button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "Select");
//                 button NextAcc = button(100, 100, 200, 50, Grey, ScreenState::NextAcc, "Next");
//                 button PrevAcc = button(100, 175, 200, 50, Grey, ScreenState::PrevAcc, "Previous");
//                 button Deposit = button(100, 250, 200, 50, Grey, ScreenState::Idle, "Deposit Funds");
//                 button Withdraw = button (100, 325, 200, 50, Grey, ScreenState::Idle, "Withdraw Funds");
//                 button CreateAccount = button(100, 400, 200, 50, Grey, ScreenState::AddAccount, "Create Account"); 

//                 allButtons.push_back(Back);
//                 // allButtons.push_back(SelectAcc);
//                 allButtons.push_back(NextAcc);
//                 allButtons.push_back(PrevAcc);
//                 allButtons.push_back(Deposit);
//                 allButtons.push_back(Withdraw);
//                 allButtons.push_back(CreateAccount);

                
//                 currAcc = curr->AccHead; 
                
//                 renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
//                     HandleMBDown(mouseX, mouseY, allButtons);

//                     // for(auto& button: allButtons){
//                     //     std::cout << button.text << i << std::endl;
//                     //     i++;
//                     // }
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

                    
                    
//                     // if(NextAcc.isClicked(mouseX, mouseY) == true){
//                     //     if(curr->next != nullptr){
//                     //         TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                     //         clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                     //         curr = curr->next;
//                     //         renderText(renderer, globalFont, curr->name, White, 500, 100);
//                     //     }
//                     // }

//                     // if(PrevAcc.isClicked(mouseX, mouseY) == true){
//                     //     if(curr->prev != nullptr){
//                     //         TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                     //         clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                     //         curr = curr->prev;
//                     //         renderText(renderer, globalFont, curr->name, White, 500, 100);
//                     //     }
//                     // }

//                     // if(SelectAcc.isClicked(mouseX, mouseY)){
//                     //     currentScreen = ScreenState::ViewAccounts;
//                     //     SDL_RenderClear(renderer);
//                     //     allButtons.clear();
//                     // }
//                 }

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }



//             }

//             if(currentScreen == ScreenState::AddBank){
//                 // SDL_RenderClear(renderer);
//                 // renderBackground(renderer);

//                 std::string temp = "Enter Bank Name";
//                 renderText(renderer, globalFont, temp, Black, 100, 100);

//                 if(!TextBoxRendered){
//                     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                     SDL_Rect TextBox = {100,150, 200, 29};
//                     SDL_RenderFillRect(renderer, &TextBox);
//                     TextBoxRendered = true;
//                 }
                
//                 if(windowEvent.type == SDL_TEXTINPUT){
//                     // renderBackground(renderer);
//                     if(bankName.length() < 10){
//                         bankName += windowEvent.text.text;
//                         TTF_SizeText(globalFont, bankName.c_str(), &TextWidth, &TextHeight);
//                         clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                         // std::cout << TextWidth << " " << TextHeight << "\n";
//                         renderText(renderer, globalFont, bankName, Black, 100 , 150);
//                     }

//                     else{
//                         std::string temp = "Error, name length greater than 10";
//                         renderText(renderer, globalFont, temp, Black, 100, 200);
//                         // sleep(5);
//                         // clearText(renderer, 200, 200, 200, 30, backgroundColor);
//                     }
                    
                    
//                 }

//                 else if(windowEvent.type == SDL_KEYDOWN){
//                     if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                         if(bankName.length() == 0){
//                             currentScreen = ScreenState::MainMenu;
//                             bankName = "";
//                             TextBoxRendered = false;
//                             break;
//                         }
//                         createBank(bankName);
//                         // currAcc = bank::BankHead->AccHead;
//                         currentScreen = ScreenState::MainMenu;
//                         bankName = "";
//                         TextBoxRendered = false;
//                     }

//                     if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                         if(bankName.length() < 10){
//                             clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                         }

//                         if(!bankName.empty()){
//                             bankName.pop_back();
//                             clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                             renderText(renderer, globalFont, bankName, Black, 100 , 150);
//                             std::cout << bankName << "\n";
//                         }
//                     }
//                 }
                
//             }

//             if(currentScreen == ScreenState::AddAccount){
                
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

// USING FOR LOOP CAUSES IT TO DO MULTIPLE TIMES PER CLICK IDK WHY THIS IS FUCKING STUPID
// DO READ WRITGE TEXT FILE TO STORE ACCOUNTS AND INFO USE CSV


//----------------------------------------------------------------------------- REMOVE REDUNDANT CODE


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
// std::string bname;
// int TextHeight;
// int TextWidth;
// int i = 0;
// bool TextBoxRendered = false;
// bool renderOnce = false;
// bool AccNameEntered = false;
// bool Switch = true;
// bool flag = true;
// // TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);
// bank* curr = bank::BankHead;

// // all buttons

// button ViewBanks = button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks");
// button AddBank = button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank");
// button DeleteBank = button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank");

// button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
// button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "View Accounts");
// button NextBank = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Bank");
// button PrevBank = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Bank");



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

//     std::vector<button*> allButtons;

//     ScreenState currentScreen = ScreenState::MainMenu;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
//                 SDL_RenderClear(renderer);
//                 // bname =
//                 // allButtons.push_back(button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks"));
//                 // allButtons.push_back(button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank"));
//                 // allButtons.push_back(button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank"));
//                 // renderText(renderer, globalFont, aa, Black, 100,100 );
//                 // buttons should be 1. View bank acc 3. add bank account 4. delete bank account 2. Quit program 

//                 if(flag){
//                     allButtons.push_back(&ViewBanks);
//                     allButtons.push_back(&AddBank);
//                     allButtons.push_back(&DeleteBank);
//                     flag = false;
//                 }

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y;

//                     for(auto& button : allButtons){
//                         if(button->isClicked(mouseX, mouseY)){
//                                 button->clicked = true;
//                                 button->ButtonColor = Black;
//                         }
                        
//                     }   
//                 }

//                 if(windowEvent.type == SDL_MOUSEBUTTONUP){
//                     if(ViewBanks.clicked == true){
//                         currentScreen = ScreenState::ViewBanks;
//                         ViewBanks.clicked = false;
//                     }

//                     if(AddBank.clicked == true){
//                         currentScreen = ScreenState::AddBank;
//                         AddBank.clicked = false;
//                     }

//                     flag = true;
//                     allButtons.clear();

//                 }

//                 renderBackground(renderer);

//                 for(auto& button : allButtons){
//                     button->RenderButton(renderer);
//                     renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
//                 }

//                 // SDL_RenderPresent(renderer);
                
//             }

//             if(currentScreen == ScreenState::ViewBanks){

//                 button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
//                 button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "View Accounts");
//                 button NextBank = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Bank");
//                 button PrevBank = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Bank");

//                 if(flag){
//                     allButtons.push_back(&Back);
//                     allButtons.push_back(&SelectAcc);
//                     allButtons.push_back(&NextBank);
//                     allButtons.push_back(&PrevBank);

//                     if(curr == nullptr){
//                         std::cout << "Bank head is null \n";
//                         currentScreen = ScreenState::MainMenu;
//                         break;
//                     }

//                     renderText(renderer, globalFont, curr->name, White, 500 , 100);
//                 }
            
    

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
                    
//                     for(auto& button : allButtons){
//                         if(button->isClicked(mouseX, mouseY)){
//                             button->clicked = true;
//                             button->ButtonColor = Black;
//                         }
//                     }
                        
                        
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
                
//                 if(windowEvent.type == SDL_MOUSEBUTTONUP && SelectAcc.isClicked(mouseX, mouseY)){}
//                     if(SelectAcc.isClicked(mouseX, mouseY)){
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
//                     } 
//                 // }

//                 for(auto& button : allButtons){
//                     button.RenderButton(renderer);
//                     renderText(renderer, globalFont, button.text, Black, button.button_x, button.button_y);
//                 }
//             }

//             if(currentScreen == ScreenState::ViewAccounts){
//                 //  renderBackground(renderer);
//                 std::string temp = "";
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
//                     //temp = std::to_string(currAcc->balance);
//                     //renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                     //std::cout << currAcc->acc_name << " 2\n";
//                     //renderText(renderer, globalFont, temp, White, 500, 130);
//                     //std::cout << currAcc->acc_name << " 3\n";
//                     renderOnce = true;
//                 }

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
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
//                             // TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
//                             // clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             // TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight );
//                             // clearText(renderer, 500, 130, TextWidth, TextHeight, Black );
//                             // currAcc = currAcc->next;
//                             // temp = std::to_string(currAcc->balance);
//                             // renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                             // renderText(renderer, globalFont, temp, White, 500, 130);
//                             std::cout << "Accident";
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

//             if(currentScreen == ScreenState::AddBank){

//                 std::string temp = "Enter Bank Name";
//                 renderText(renderer, globalFont, temp, Black, 100, 100);

//                 if(!TextBoxRendered){
//                     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                     SDL_Rect TextBox = {100,150, 200, 29};
//                     SDL_RenderFillRect(renderer, &TextBox);
//                     TextBoxRendered = true;
//                 }
                
//                 // if(windowEvent.type == SDL_TEXTINPUT){
//                 //     // renderBackground(renderer);
//                 //     if(bankName.length() < 10){
//                 //         bankName += windowEvent.text.text;
//                 //         TTF_SizeText(globalFont, bankName.c_str(), &TextWidth, &TextHeight);
//                 //         clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                 //         renderText(renderer, globalFont, bankName, Black, 100 , 150);
//                 //     }

//                 //     else{
//                 //         std::string temp = "Error, name length greater than 10";
//                 //         renderText(renderer, globalFont, temp, Black, 100, 200);
//                 //     }
                    
                    
//                 // }

//                 HandleInputText(renderer, windowEvent, bankName, globalFont, currentScreen, 100, 150);
//                 // HandleKeyDown(renderer, windowEvent, bankName, currentScreen, TextBoxRendered, globalFont);

//                 if(windowEvent.type == SDL_KEYDOWN){
//                     if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                         if(bankName.length() != 0){
//                             createBank(bankName);
//                         }
//                         // currAcc = bank::BankHead->AccHead;
//                         currentScreen = ScreenState::MainMenu;
//                         bankName = "";
//                         TextBoxRendered = false;
//                     }

//                     if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                         if(bankName.length() < 10){
//                             clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                         }

//                         if(!bankName.empty()){
//                             bankName.pop_back();
//                             clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                             renderText(renderer, globalFont, bankName, Black, 100 , 150);
//                             std::cout << bankName << "\n";
//                         }
//                     }
//                 }
                
//             }

//             if(currentScreen == ScreenState::AddAccount){
                

//                 if(Switch == true){
//                     std::string temp = "Enter Account Name";
//                     renderText(renderer, globalFont, temp, Black, 100, 100);

//                     if(renderOnce == false){
//                         SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                         SDL_Rect TextBox = {100,150, 200, 29};
//                         SDL_RenderFillRect(renderer, &TextBox);
//                         renderOnce = true;
//                     }

//                 // if(AccNameEntered == true){
//                 //     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                 //     SDL_Rect TextBox2 = {100, 400, 200, 29};
//                 //     SDL_RenderFillRect(renderer, &TextBox2);
//                 // }
                
//                     HandleInputText(renderer, windowEvent, AccName, globalFont, currentScreen, 100, 150);        

//                     if(windowEvent.type == SDL_KEYDOWN){
//                         if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                             if(AccName.length() != 0){
//                                 TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight);
//                                 clearText(renderer, 100, 100, TextWidth, TextHeight, backgroundColor);
//                                 renderOnce = false;
//                                 Switch = false;
                                
//                             }
//                             // createBank(bankName);
//                             // currAcc = bank::BankHead->AccHead;
//                             // currentScreen = ScreenState::AddAccount2;
//                             // AccName = "";
//                             // TextBoxRendered = false;
//                         }

//                         if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                             if(AccName.length() < 10){
//                                 clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                             }

//                             if(!AccName.empty()){
//                                 AccName.pop_back();
//                                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                                 renderText(renderer, globalFont, AccName, Black, 100 , 150);
//                             }
//                         }
                    
//                     }
//                 }

//                 if(Switch == false){
//                     std::string temp = "Enter Account Balance";
//                     renderText(renderer, globalFont, temp, Black, 100, 100);


//                     if(renderOnce == false){
//                         SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                         SDL_Rect TextBox = {100,200, 200, 29};
//                         SDL_RenderFillRect(renderer, &TextBox);
//                         renderOnce = true;
//                     }

//                     HandleInputText(renderer, windowEvent, AccBal, globalFont, currentScreen, 100, 200);

//                     if(windowEvent.type == SDL_KEYDOWN){
//                         if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                             if(AccBal.length() != 0){
//                                 int tempAccBal = std::stoi(AccBal);
//                                 std::cout << tempAccBal << " THE INT \n";
//                                 curr->createAccount(tempAccBal, AccName);
//                                 // curr->createAccount(1000, "TESTING IF WORK");
//                                 AccBal = "";
//                                 AccName = "";
//                                 renderOnce = false;
//                                 Switch = true;
//                                 currentScreen = ScreenState::MainMenu;
                                
//                             }
//                             // createBank(bankName);
//                             // currAcc = bank::BankHead->AccHead;
//                             // currentScreen = ScreenState::AddAccount2;
//                             // AccName = "";
//                             // TextBoxRendered = false;
//                         }

//                         if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                             if(AccBal.length() < 10){
//                                 clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                             }

//                             if(!AccBal.empty()){
//                                 AccBal.pop_back();
//                                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                                 renderText(renderer, globalFont, AccBal, Black, 100 , 200);
//                             }
//                         }
                    
//                     }
//                 }
//             }

//             if(currentScreen == ScreenState::Deposit){
//                 std::string temp = "Enter Deposit Amount";
//                 int tempNum = 0;
//                 renderText(renderer, globalFont, temp, Black, 100, 100);
//                 temp = "Format with no extra chars";
//                 renderText(renderer, smallFont, temp, Black, 100, 200);
//                 temp = "Ex: 1000 not 1,000";
//                 renderText(renderer, smallFont, temp, Black, 100, 230);

//                 if(renderOnce == false){
//                     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                     SDL_Rect TextBox = {100, 150, 200, 29};
//                     SDL_RenderFillRect(renderer, &TextBox);
//                     renderOnce = true;
//                 }

//                 HandleInputText(renderer, windowEvent, IOcash, globalFont, currentScreen, 100, 150);

//                 if(windowEvent.type == SDL_KEYDOWN){
//                         if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                             if(IOcash.length() != 0){
//                                try{
//                                 tempNum = std::stoi(IOcash);
//                                 currAcc->balance += tempNum;

//                                } catch(const std::invalid_argument& e){
//                                     temp = "Error: Invalid Input Format";
//                                     renderText(renderer, globalFont, temp, White, 475, 150);
//                                }
//                             }
//                             // createBank(bankName);
//                             // currAcc = bank::BankHead->AccHead;
//                             // currentScreen = ScreenState::AddAccount2;
//                             // AccName = "";
//                             // TextBoxRendered = false;
//                         }

//                         if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                             if(IOcash.length() < 10){
//                                 clearText(renderer, 100, 150, 200, 30, backgroundColor);
//                             }

//                             if(!IOcash.empty()){
//                                 IOcash.pop_back();
//                                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                                 renderText(renderer, globalFont,IOcash , Black, 100 , 150);
//                             }
//                         }
                    
//                     }

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


///-----------------------------------------REWRITE CODE LOGIC TO AVOID DOUBLE CLICK


// #include <SDL2/SDL.h>
// #include <SDL2/SDL_ttf.h>
// #include "button.h"
// #include "bank.h"
// #include <iostream>
// #include <fstream>
// #include <vector>
// #include "unistd.h"
// #include <windows.h>
// #include <sstream>

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

// // void HandleMBDown(int mouseX, int mouseY, std::vector<button>& input){

// //     for(auto& button : input){
// //         if(button.isClicked(mouseX, mouseY)){
// //             button.ButtonColor = { 0, 0, 0, 255 };
// //             button.clicked = true;
// //         }
// //     }
// // }

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

// // bank* banks = bank::BankHead;
// std::string bankName; 
// std::string AccName;
// std::string AccBal;
// std::string IOcash;
// std::string bname;
// int TextHeight;
// int TextWidth;
// int i = 0;
// bool TextBoxRendered = false;
// bool renderOnce = false;
// bool AccNameEntered = false;
// bool Switch = true;
// bool flag = true;
// // TTF_Font* globalFont = TTF_OpenFont("C:/Users/peter/Desktop/CsProj/Test Environment/Roboto-Regular.ttf", 24);
// bank* curr = bank::BankHead;

// // all buttons

// button ViewBanks = button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks");
// button AddBank = button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank");
// button DeleteBank = button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank");
// std::vector<button*> MainMenuB = {&ViewBanks, &AddBank, &DeleteBank};

// button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");

// button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "View Accounts");
// button NextBank = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Bank");
// button PrevBank = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Bank");
// std::vector<button*> ViewBanksB = {&Back, &SelectAcc, &NextBank, &PrevBank};

// button NextAcc = button(100, 100, 200, 50, Grey, ScreenState::NextAcc, "Next");
// button PrevAcc = button(100, 175, 200, 50, Grey, ScreenState::PrevAcc, "Previous");
// button Deposit = button(100, 250, 200, 50, Grey, ScreenState::Idle, "Deposit Funds");
// button Withdraw = button (100, 325, 200, 50, Grey, ScreenState::Idle, "Withdraw Funds");
// button CreateAccount = button(100, 400, 200, 50, Grey, ScreenState::AddAccount, "Create Account"); 
// std::vector<button*> ViewAccsB = {&Back, &NextAcc, &PrevAcc, &Deposit, &Withdraw, &CreateAccount};



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

// // void loadData(std::string fileName, std::fstream file){
// //     std::ifstream inputFile(fileName);

// //     if(inputFile.is_open()){
// //         std::string line;

// //         while(std::getline(inputFile,line)){
// //             std::istringstream ss(line);
// //             std::string token;

// //             while(std::getline(ss, token, ',')){
// //                 std::string bankName = bankName;
                
// //             }
// //         }
// //     }
// // }
// // g++ -I src/include -o main main.cpp button.cpp bank.cpp -static-libstdc++ -L src/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf
// int main(int argc, char* argv[]) {
    
//     // createBank("Test1");
//     // createBank("Test2");
//     // createBank("Test3");
    
//     // bank* curr = bank::BankHead;
   
//     // curr->createAccount(100, "TestAcc1");
//     // curr->createAccount(200, "SKEEP");
//     // account*  currAcc = curr->AccHead;  
//     // // std::cout << currAcc->acc_name << std::endl;
//     // // currAcc = curr->AccHead; 

//     // curr = curr->next;
//     // curr->createAccount(100, "TestAcc2");
//     // curr = bank::BankHead;
//     // // account* currAcc = nullptr;
//     // // bank boa;
//     // // boa.createAccount(100, "Bob"); 

//     // std::ofstream outputFile("data.txt");

//     // if(!outputFile.is_open()){
//     //     std::cout << "File failed to open";
//     // }

//     std::ifstream inputFile("test.txt"); // Replace "example.txt" with your file name
//     std::string bankName, accountName;
//     int bal; 
//     // bank* curr = bank::BankHead;
//     account* currAcc = nullptr;
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
//     }
        
//     curr = bank::BankHead;


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

//     std::vector<button*> allButtons;

//     ScreenState currentScreen = ScreenState::MainMenu;

//     while (!quit) {
//         SDL_Event windowEvent;

//         while (SDL_PollEvent(&windowEvent)) {
//             if (windowEvent.type == SDL_QUIT) {
//                 quit = true;
//             }

//             if(currentScreen == ScreenState::MainMenu){
//                 // bname =
//                 // allButtons.push_back(button(100,100,200,50, Grey, ScreenState::ViewBanks, "View All Banks"));
//                 // allButtons.push_back(button(100,175,200,50, Grey, ScreenState::AddBank, "Add Bank"));
//                 // allButtons.push_back(button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank"));
//                 // renderText(renderer, globalFont, aa, Black, 100,100 );
//                 // buttons should be 1. View bank acc 3. add bank account 4. delete bank account 2. Quit program 

//                 if(flag){
//                     SDL_RenderClear(renderer);
//                     renderBackground(renderer);
//                     // allButtons.push_back(&ViewBanks);
//                     // allButtons.push_back(&AddBank);
//                     // allButtons.push_back(&DeleteBank);
//                     // flag = false;
//                 }

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y;

//                     for(auto& button : MainMenuB){
//                         if(button->isClicked(mouseX, mouseY)){
//                                 button->clicked = true;
//                                 button->ButtonColor = Black;
//                         }
                        
//                     }   
//                 }

//                 if(windowEvent.type == SDL_MOUSEBUTTONUP){
//                     if(ViewBanks.clicked == true){
//                         currentScreen = ScreenState::ViewBanks;
//                         ViewBanks.clicked = false;
//                         ViewBanks.ButtonColor = Grey;
//                         // allButtons.clear();
//                         flag = true;
//                         // ViewBanks.clicked = false;
//                     }

//                     if(AddBank.clicked == true){
//                         currentScreen = ScreenState::AddBank;
//                         AddBank.clicked = false;
//                         AddBank.ButtonColor = Grey;
//                         // AddBank.clicked = false;
//                     }

//                     // for(auto& button : allButtons){
//                     //     button->clicked = false;
//                     //     button->ButtonColor = Grey;
//                     // }

//                 }

//                 renderBackground(renderer);

//                 for(auto& button : MainMenuB){
//                     button->RenderButton(renderer);
//                     renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
//                 }

//                 // SDL_RenderPresent(renderer);
                
//             }

//             if(currentScreen == ScreenState::ViewBanks){

//                 // button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
//                 // button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "View Accounts");
//                 // button NextBank = button(100, 175, 200, 50, Grey, ScreenState::NextAcc, "Next Bank");
//                 // button PrevBank = button(100, 250, 200, 50, Grey, ScreenState::PrevAcc, "Previous Bank");

//                 if(flag){
//                     // allButtons.push_back(&Back);
//                     // allButtons.push_back(&SelectAcc);
//                     // allButtons.push_back(&NextBank);
//                     // allButtons.push_back(&PrevBank);

//                     // if(curr == nullptr){
//                     //     std::cout << "Bank head is null \n";
//                     //     currentScreen = ScreenState::MainMenu;
//                     //     break;
//                     // }
//                     SDL_RenderClear(renderer);
//                     renderBackground(renderer);
//                     renderText(renderer, globalFont, curr->name, White, 500 , 100);
//                 }
            
    

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
                    
//                     for(auto& button : ViewBanksB){
//                         if(button->isClicked(mouseX, mouseY)){
//                             button->clicked = true;
//                             button->ButtonColor = Black;
//                         }
//                     }
                        
                        
//                 }

//                 if(windowEvent.type == SDL_MOUSEBUTTONUP){
//                     if(Back.clicked == true){
//                         Back.clicked = false;
//                         Back.ButtonColor = Grey;
//                         allButtons.clear();
//                         curr = bank::BankHead;
//                         flag = true;
//                         currentScreen = ScreenState::MainMenu;

//                     }

//                     if(NextBank.clicked){
//                         if(curr->next != nullptr){
//                             TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             curr = curr->next;
//                             renderText(renderer, globalFont, curr->name, White, 500, 100);
//                         }

//                         NextBank.clicked = false;
//                         NextBank.ButtonColor = Grey;
//                     }

                    
//                     if(PrevBank.clicked){
//                         if(curr->prev != nullptr){
//                             TTF_SizeText(globalFont, curr->name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);
//                             curr = curr->prev;
//                             renderText(renderer, globalFont, curr->name, White, 500, 100);
//                         }
//                         PrevBank.clicked = false;
//                         PrevBank.ButtonColor = Grey;
//                     }

//                     if(SelectAcc.clicked){
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
//                             // allButtons.clear();
//                             currAcc = curr->AccHead;
//                             flag = true;
//                             // std::cout << currAcc->acc_name;
//                         }

//                         SelectAcc.clicked = false;
//                         SelectAcc.ButtonColor = Grey;
//                     } 

//                     // for(auto& button : allButtons){
//                     //     button->clicked = false;
//                     //     button->ButtonColor = Grey;
//                     // }
//                 }

//                 // }
//                 // renderBackground(renderer);
//                 for(auto& button : ViewBanksB){
//                     button->RenderButton(renderer);
//                     renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
//                 }
//             }

//             if(currentScreen == ScreenState::ViewAccounts){
//                 //  renderBackground(renderer);
//                 std::string temp = "";

//                 // if(Deposit.clicked == true){
//                 //     std::cout << "Clicked";
//                 // }
//                 // button Back = button(10, 10, 65, 35, Grey, ScreenState::MainMenu, "Back");
//                 // // button SelectAcc = button(100,100,200,50, Grey, ScreenState::Idle, "Select");
//                 // button NextAcc = button(100, 100, 200, 50, Grey, ScreenState::NextAcc, "Next");
//                 // button PrevAcc = button(100, 175, 200, 50, Grey, ScreenState::PrevAcc, "Previous");
//                 // button Deposit = button(100, 250, 200, 50, Grey, ScreenState::Idle, "Deposit Funds");
//                 // button Withdraw = button (100, 325, 200, 50, Grey, ScreenState::Idle, "Withdraw Funds");
//                 // button CreateAccount = button(100, 400, 200, 50, Grey, ScreenState::AddAccount, "Create Account"); 

//                 if(flag){
//                     SDL_RenderClear;
//                     renderBackground(renderer);
//                     // allButtons.push_back(&Back);
//                     // allButtons.push_back(&NextAcc);
//                     // allButtons.push_back(&PrevAcc);
//                     // allButtons.push_back(&Deposit);
//                     // allButtons.push_back(&Withdraw);
//                     // allButtons.push_back(&CreateAccount);

//                     temp = std::to_string(currAcc->balance);
//                     renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                     renderText(renderer, globalFont, temp, White, 500, 130);

//                     flag = false;
//                 }

                
//                 // if(renderOnce == false){
//                 //     //std::cout << currAcc->acc_name << " 1\n";
//                 //     temp = std::to_string(currAcc->balance);
//                 //     renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                 //     //std::cout << currAcc->acc_name << " 2\n";
//                 //     renderText(renderer, globalFont, temp, White, 500, 130);
//                 //     //std::cout << currAcc->acc_name << " 3\n";
//                 //     renderOnce = true;
//                 // }

//                 if(windowEvent.type == SDL_MOUSEBUTTONDOWN){
//                     int mouseX = windowEvent.button.x;
//                     int mouseY = windowEvent.button.y; 
                    
//                     for(auto& button : ViewAccsB){
//                         if(button->isClicked(mouseX, mouseY)){
//                             button->clicked = true;
//                             button->ButtonColor = Black;
//                         }
//                     }
//                 }



//                 if(windowEvent.type == SDL_MOUSEBUTTONUP){
                    
//                     if(Back.clicked){
//                         currentScreen = ScreenState::ViewBanks;
//                         Back.clicked = false;
//                         Back.ButtonColor = Grey;
//                         flag = true;
//                         // renderBackground(renderer);
//                         allButtons.clear();
//                     }

//                     if(CreateAccount.clicked){
//                         currentScreen = ScreenState::AddAccount;
//                         flag = true;
//                         allButtons.clear();
//                     }

//                     if(NextAcc.clicked){
//                         if(currAcc->next != nullptr){
//                             TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

//                             temp = std::to_string(currAcc->balance);
//                             TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight );
//                             clearText(renderer, 500, 130, TextWidth, TextHeight, Black );

//                             currAcc = currAcc->next;
//                             temp = std::to_string(currAcc->balance);

//                             renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                             renderText(renderer, globalFont, temp, White, 500, 130);
//                             // std::cout << "Accident";
//                         }

//                         NextAcc.clicked = false;
//                         NextAcc.ButtonColor = Grey;
//                     }

//                     if(PrevAcc.clicked){
//                         if(currAcc->prev != nullptr){   
//                             TTF_SizeText(globalFont, currAcc->acc_name.c_str(), &TextWidth, &TextHeight);
//                             clearText(renderer, 500, 100, TextWidth, TextHeight, Black);

//                             temp = std::to_string(currAcc->balance);
//                             TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight );
//                             clearText(renderer, 500, 130, TextWidth, TextHeight, Black );

//                             currAcc = currAcc->prev;
//                             temp = std::to_string(currAcc->balance);

//                             renderText(renderer, globalFont, currAcc->acc_name, White, 500, 100);
//                             renderText(renderer, globalFont, temp, White, 500, 130);
//                         }

//                         PrevAcc.clicked = false;
//                         PrevAcc.ButtonColor = Grey;
//                     }

//                     if(Deposit.clicked){
//                         currentScreen = ScreenState::Deposit;
//                         // allButtons.clear();
//                         // clearAllText(renderer);
//                         flag = true;
//                         Deposit.clicked = false;
//                         Deposit.ButtonColor = Grey;
//                         // renderBackground(renderer);
//                         // Deposit.clicked = false;
//                         // Deposit.ButtonColor = Grey;
//                     }

//                     if(Withdraw.clicked){
//                         currentScreen = ScreenState::Withdraw;
//                         flag = true;
//                         Withdraw.clicked = false;
//                         Withdraw.ButtonColor = Grey;
//                         // allButtons.clear();
//                         // clearAllText(renderer);
//                     }

//                     // for(auto& button : allButtons){
//                     //     button->clicked = false;
//                     //     button->ButtonColor = Grey;
//                     // }
//                 }

//                 // renderBackground(renderer);
//                 for(auto& button : ViewAccsB){
//                     button->RenderButton(renderer);
//                     renderText(renderer, globalFont, button->text, Black, button->button_x, button->button_y);
//                 }



//             }

//             if(currentScreen == ScreenState::AddBank){
                
//                 if(flag){
//                     SDL_RenderClear(renderer);
//                     renderBackground(renderer);

//                     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                     SDL_Rect TextBox = {100,150, 200, 29};
//                     SDL_RenderFillRect(renderer, &TextBox);
//                     flag = false;
//                 }

//                 std::string temp = "Enter Bank Name";
//                 renderText(renderer, globalFont, temp, Black, 100, 100);                

//                 HandleInputText(renderer, windowEvent, bankName, globalFont, currentScreen, 100, 150);
//                 // HandleKeyDown(renderer, windowEvent, bankName, currentScreen, TextBoxRendered, globalFont);

//                 if(windowEvent.type == SDL_KEYDOWN){
//                     if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                         if(bankName.length() != 0){
//                             createBank(bankName);
//                         }
//                         // currAcc = bank::BankHead->AccHead;
//                         currentScreen = ScreenState::MainMenu;
//                         bankName = "";
//                         // TextBoxRendered = false;
//                         flag = false;
//                     }

//                     if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                         if(bankName.length() < 10){
//                             clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                         }

//                         if(!bankName.empty()){
//                             bankName.pop_back();
//                             clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                             renderText(renderer, globalFont, bankName, Black, 100 , 150);
//                             std::cout << bankName << "\n";
//                         }
//                     }
//                 }
                
//             }

//             if(currentScreen == ScreenState::AddAccount){

//                 if(flag){
//                     SDL_RenderClear(renderer);
//                     renderBackground(renderer);

//                     flag = false;
//                 }
                

//                 if(Switch == true){
//                     std::string temp = "Enter Account Name";
//                     renderText(renderer, globalFont, temp, Black, 100, 100);

//                     if(renderOnce == false){
//                         SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                         SDL_Rect TextBox = {100,150, 200, 29};
//                         SDL_RenderFillRect(renderer, &TextBox);
//                         renderOnce = true;
//                     }
                

//                 // if(AccNameEntered == true){
//                 //     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                 //     SDL_Rect TextBox2 = {100, 400, 200, 29};
//                 //     SDL_RenderFillRect(renderer, &TextBox2);
//                 // }
                
//                 HandleInputText(renderer, windowEvent, AccName, globalFont, currentScreen, 100, 150);        

//                 if(windowEvent.type == SDL_KEYDOWN){
//                         if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                             if(AccName.length() != 0){
//                                 TTF_SizeText(globalFont, temp.c_str(), &TextWidth, &TextHeight);
//                                 clearText(renderer, 100, 100, TextWidth, TextHeight, backgroundColor);
//                                 renderOnce = false;
//                                 Switch = false;
                                
//                             }
//                             // createBank(bankName);
//                             // currAcc = bank::BankHead->AccHead;
//                             // currentScreen = ScreenState::AddAccount2;
//                             // AccName = "";
//                             // TextBoxRendered = false;
//                         }

//                         if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                             if(AccName.length() < 10){
//                                 clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                             }

//                             if(!AccName.empty()){
//                                 AccName.pop_back();
//                                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                                 renderText(renderer, globalFont, AccName, Black, 100 , 150);
//                             }
//                         }
                    
//                     }
//                 }

//                 if(Switch == false){
//                     std::string temp = "Enter Account Balance";
//                     renderText(renderer, globalFont, temp, Black, 100, 100);


//                     if(renderOnce == false){
//                         SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                         SDL_Rect TextBox = {100,200, 200, 29};
//                         SDL_RenderFillRect(renderer, &TextBox);
//                         renderOnce = true;
//                     }

//                     HandleInputText(renderer, windowEvent, AccBal, globalFont, currentScreen, 100, 200);

//                     if(windowEvent.type == SDL_KEYDOWN){
//                         if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                             if(AccBal.length() != 0){
//                                 int tempAccBal = std::stoi(AccBal);
//                                 std::cout << tempAccBal << " THE INT \n";
//                                 curr->createAccount(tempAccBal, AccName);
//                                 // curr->createAccount(1000, "TESTING IF WORK");
//                                 AccBal = "";
//                                 AccName = "";
//                                 renderOnce = false;
//                                 Switch = true;
//                                 currentScreen = ScreenState::ViewAccounts;
//                                 flag = true;
//                                 CreateAccount.clicked = false;
//                                 CreateAccount.ButtonColor = Grey;
                                
                                
//                             }
//                             // createBank(bankName);
//                             // currAcc = bank::BankHead->AccHead;
//                             // currentScreen = ScreenState::AddAccount2;
//                             // AccName = "";
//                             // TextBoxRendered = false;
//                         }

//                         if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                             if(AccBal.length() < 10){
//                                 clearText(renderer, 100, 200, 200, 30, backgroundColor);
//                             }

//                             if(!AccBal.empty()){
//                                 AccBal.pop_back();
//                                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                                 renderText(renderer, globalFont, AccBal, Black, 100 , 200);
//                             }
//                         }
                    
//                     }
//                 }
//             }

//             if(currentScreen == ScreenState::Deposit){

//                 if(flag){
//                     SDL_RenderClear(renderer);
//                     renderBackground(renderer);
//                     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                     SDL_Rect TextBox = {100, 150, 200, 29};
//                     SDL_RenderFillRect(renderer, &TextBox);
//                     flag = false;
//                 }
//                 std::string temp = "Enter Deposit Amount";
//                 int tempNum = 0;
//                 renderText(renderer, globalFont, temp, Black, 100, 100);
//                 temp = "Format with no extra chars";
//                 renderText(renderer, smallFont, temp, Black, 100, 200);
//                 temp = "Ex: 1000 not 1,000";
//                 renderText(renderer, smallFont, temp, Black, 100, 230);

//                 // if(renderOnce == false){
//                 //     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                 //     SDL_Rect TextBox = {100, 150, 200, 29};
//                 //     SDL_RenderFillRect(renderer, &TextBox);
//                 //     renderOnce = true;
//                 // }

//                 HandleInputText(renderer, windowEvent, IOcash, globalFont, currentScreen, 100, 150);

//                 if(windowEvent.type == SDL_KEYDOWN){
//                         if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                             if(IOcash.length() != 0){
//                                try{
//                                 tempNum = std::stoi(IOcash);
//                                 currAcc->balance += tempNum;

//                                } catch(const std::invalid_argument& e){
//                                     temp = "Error: Invalid Input Format";
//                                     renderText(renderer, globalFont, temp, White, 475, 150);
//                                }
//                             }
//                             // createBank(bankName);
//                             // currAcc = bank::BankHead->AccHead;
//                             // currentScreen = ScreenState::AddAccount2;
//                             // AccName = "";
//                             // TextBoxRendered = false;

//                             currentScreen = ScreenState::ViewAccounts;
//                             flag = true;
//                             renderBackground(renderer);
//                             IOcash = "";
//                         }

//                         if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                             if(IOcash.length() < 10){
//                                 clearText(renderer, 100, 150, 200, 30, White);
//                             }

//                             if(!IOcash.empty()){
//                                 IOcash.pop_back();
//                                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                                 renderText(renderer, globalFont,IOcash , Black, 100 , 150);
//                             }
//                         }
                    
//                     }

//             }
//  // here    

//             if(currentScreen == ScreenState::Withdraw){

//                 if(flag){
//                     SDL_RenderClear(renderer);
//                     renderBackground(renderer);
//                     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                     SDL_Rect TextBox = {100, 150, 200, 29};
//                     SDL_RenderFillRect(renderer, &TextBox);
//                     flag = false;
//                 }
//                 std::string temp = "Enter Withdraw Amount";
//                 int tempNum = 0;
//                 renderText(renderer, globalFont, temp, Black, 100, 100);
//                 temp = "Format with no extra chars";
//                 renderText(renderer, smallFont, temp, Black, 100, 200);
//                 temp = "Ex: 1000 not 1,000";
//                 renderText(renderer, smallFont, temp, Black, 100, 230);

//                 // if(renderOnce == false){
//                 //     SDL_SetRenderDrawColor(renderer, White.r, White.b, White.g, 225);
//                 //     SDL_Rect TextBox = {100, 150, 200, 29};
//                 //     SDL_RenderFillRect(renderer, &TextBox);
//                 //     renderOnce = true;
//                 // }

//                 HandleInputText(renderer, windowEvent, IOcash, globalFont, currentScreen, 100, 150);

//                 if(windowEvent.type == SDL_KEYDOWN){
//                         if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){
//                             if(IOcash.length() != 0){
//                                try{
//                                 tempNum = std::stoi(IOcash);

//                                } catch(const std::invalid_argument& e){
//                                     temp = "Error: Invalid Input Format";
//                                     renderText(renderer, globalFont, temp, White, 475, 150);
//                                }
//                             }
//                             // createBank(bankName);
//                             // currAcc = bank::BankHead->AccHead;
//                             // currentScreen = ScreenState::AddAccount2;
//                             // AccName = "";
//                             // TextBoxRendered = false;

//                             if(currAcc->balance - tempNum < 0){
//                                 temp = "Error: Can't drop below 0 balance";
//                                 renderText(renderer, globalFont, temp, White, 475, 150);
//                                 break;
//                             }

//                             else{
//                                 currAcc->balance -= tempNum;
//                             }



//                             currentScreen = ScreenState::ViewAccounts;
//                             flag = true;
//                             renderBackground(renderer);
//                             IOcash = "";
//                         }

//                         if(windowEvent.key.keysym.sym == SDLK_BACKSPACE){
//                             if(IOcash.length() < 10){
//                                 clearText(renderer, 100, 150, 200, 30, White);
//                             }

//                             if(!IOcash.empty()){
//                                 IOcash.pop_back();
//                                 clearText(renderer, 100, 150, TextWidth, TextHeight, White);
//                                 renderText(renderer, globalFont,IOcash , Black, 100 , 150);
//                             }
//                         }
                    
//                     }

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

//-------------------- FIXED DOUBLE CLICK LOGIC, ADDED TEXT FILE READING, TODO DELETE ACC AND BANK----------------------------------


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
#include <unordered_map>
#include <algorithm>

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
// std::string bankName; 
std::string AccName;
std::string AccBal;
std::string IOcash;
std::string bname;

std::unordered_map<std::string, bank> objMap; 

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
button DeleteBank = button(100,250,200,50, Grey, ScreenState::DeleteBank, "Delete Bank");
std::vector<button*> ViewBanksB = {&Back, &SelectAcc, &NextBank, &PrevBank, &DeleteBank};

button NextAcc = button(100, 100, 200, 50, Grey, ScreenState::NextAcc, "Next");
button PrevAcc = button(100, 175, 200, 50, Grey, ScreenState::PrevAcc, "Previous");
button Deposit = button(100, 250, 200, 50, Grey, ScreenState::Idle, "Deposit Funds");
button Withdraw = button (100, 325, 200, 50, Grey, ScreenState::Idle, "Withdraw Funds");
button CreateAccount = button(100, 400, 200, 50, Grey, ScreenState::AddAccount, "Create Account"); 
std::vector<button*> ViewAccsB = {&Back, &NextAcc, &PrevAcc, &Deposit, &Withdraw, &CreateAccount};

std::vector<std::string> BankNames; 



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

// void loadData(std::string fileName, std::fstream file){
//     std::ifstream inputFile(fileName);

//     if(inputFile.is_open()){
//         std::string line;

//         while(std::getline(inputFile,line)){
//             std::istringstream ss(line);
//             std::string token;

//             while(std::getline(ss, token, ',')){
//                 std::string bankName = bankName;
                
//             }
//         }
//     }
// }
// g++ -I src/include -o main main.cpp button.cpp bank.cpp -static-libstdc++ -L src/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_ttf
int main(int argc, char* argv[]) {
    

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
                    BankNames.push_back(bankName);
                }

                curr->createAccount(bal,accountName);
            }

            if(curr == nullptr){
                createBank(bankName);
                BankNames.push_back(bankName);
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
    bankName = "";

    while (!quit) {
        SDL_Event windowEvent;

        while (SDL_PollEvent(&windowEvent)) {
            if (windowEvent.type == SDL_QUIT) {
                quit = true;
            }

            if(currentScreen == ScreenState::MainMenu){

                if(flag){
                    SDL_RenderClear(renderer);
                    renderBackground(renderer);
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
                    renderText(renderer, globalFont, curr->name, White, 500 , 100);\

                    for(auto i = 0; i < BankNames.size(); i++){
                        std::cout << BankNames.at(i) << " ";
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
                std::string temp2 = "Error: Bank Name already in use";
                renderText(renderer, globalFont, temp, Black, 100, 100);                

                HandleInputText(renderer, windowEvent, bankName, globalFont, currentScreen, 100, 150);
                // HandleKeyDown(renderer, windowEvent, bankName, currentScreen, TextBoxRendered, globalFont);

                if(windowEvent.type == SDL_KEYDOWN){
                    if(windowEvent.key.keysym.sym == SDLK_RETURN || windowEvent.key.keysym.sym == SDLK_RETURN2){

                        auto i = std::find(BankNames.begin(), BankNames.end(), bankName);
                        
                        if(i != BankNames.end()){
                            renderText(renderer,  globalFont, temp2, White, 450, 100);
                        }

                        else{
                            if(bankName.length() != 0){
                                createBank(bankName);
                            }

                            currentScreen = ScreenState::MainMenu;
                            bankName = "";
                            flag = false;
                        }
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