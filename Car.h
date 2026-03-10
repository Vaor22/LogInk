#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

//класс для авттомобиля
class Car {
private:
	Vector2f m_Position;

	Sprite m_Sprite;
	Texture m_Texture;

	bool m_LeftPressed;
	bool m_RightPressed;

	float m_Speed;
public:
	Car();

};

