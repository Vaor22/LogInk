#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

//класс для автoмобиля
class Car {
private:
	Vector2f m_Position;

	Sprite m_Sprite;
	Texture m_Texture;

	bool m_UpPressed;
	bool m_DownPressed;
	bool m_RightPressed;
	bool m_LeftPressed;

	float m_Speed;
public:
	Car();

	Sprite getSprite();

	void moveUp();
	void moveDown();

	void stopUp();
	void stopDown();

	void moveRight();
	void moveLeft();

	void stopRight();
	void stopLeft();

	void update(float elapsedTime);
};

