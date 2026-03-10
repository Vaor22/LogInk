#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{

    RenderWindow win(VideoMode(1280, 720), L"LogInk: Побег со склада");

    Image icon;
    if (!icon.loadFromFile("Image/Bob.png"))
    {
        return 1;
    }

    while (win.isOpen())
    {
        Event event;
        while (win.pollEvent(event))
        {
            if (event.type == Event::Closed)
                win.close();
        }

        win.clear();
    
        win.display();
    }
    return 0;
}