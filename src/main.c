#include <stdio.h>
#include "../include/SDL2/SDL.h"

int WinMain(int argc, char** argv) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow(
        "CHIP8 Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640, 320, SDL_WINDOW_SHOWN
    );
    printf("I am a chip8 emulator!\n");

    while(1){}
    SDL_DestroyWindow(window);    
    return 0;
}