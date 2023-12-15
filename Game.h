#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "BaseObject.h"

using namespace sf;

class Game
{
public:
    // Constructor de la clase Game
    Game();

    // Destructor de la clase Game
    ~Game();

    // M�todo principal para el bucle de juego
    void Loop();

private:
    // M�todos internos de la clase
    void _Draw();
    void _Update(float dt);
    void _ProcessEvents();

    // Variables miembro de la clase
    RenderWindow* _pWnd; // Puntero a la ventana de renderizaci�n
    BaseObject* _pBall;  // Puntero a un objeto BaseObject (una pelota, en este contexto)
};
