#include "Engine.h"

void Engine::input()
{
    
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    
    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        m_Car.moveUp();
    }
    else
    {
        m_Car.stopUp();
    }

    if (Keyboard::isKeyPressed(Keyboard::S))
    {
        m_Car.moveDown();
    }
    else
    {
        m_Car.stopDown();
    }

    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Car.moveLeft();
    }
    else
    {
        m_Car.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Car.moveRight();
    }
    else
    {
        m_Car.stopRight();
    }
}