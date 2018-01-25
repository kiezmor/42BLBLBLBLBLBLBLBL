# include "rtv1.h"

int    init_sdl(t_sdl *win)
{
    if (win)
    {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0)
    {
        ft_printf("%s\n", "Error SDL");
        return (-1);
    }
    win->win = SDL_CreateWindow("RTV_1", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, X_WIN, Y_WIN, SDL_WINDOW_RESIZABLE);
    if (win->win == NULL)
    {
        ft_printf("%s\n", "Error SDL Window");
        return (-1);
    }
    win->rndr = SDL_CreateRenderer(win->win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (win->rndr == NULL)
    {
        ft_printf("%s\n", "Error SDL Renderer");
        return (-1);
    }
    SDL_RenderPresent(win->rndr);
    SDL_Delay(10000);
    // a revoir l'emplacement de DestroyWindow et DestroyRenderer
    SDL_DestroyRenderer(win->rndr); 
    SDL_DestroyWindow(win->win);
}
    return (0);
}