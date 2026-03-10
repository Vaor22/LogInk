#include "Car.h"

//Реализация класса автомобиля
Car::Car() {
	m_Speed = 400;

	m_Texture.loadFromFile("Image/Car.png");
	m_Sprite.setTexture(m_Texture);

	m_Position.x = 10;
	m_Position.y = 25;
}

Sprite Car::getSprite() {
	return m_Sprite;
};

void Car::moveUp() {
	m_UpPressed = true;
};
void Car::moveDown() {
	m_DownPressed = true;
};

void Car::stopUp() {
	m_UpPressed = false;
};
void Car::stopDown() {
	m_DownPressed = false;
};
void Car::moveRight() {
	m_RightPressed = true;
};
void Car::moveLeft() {
	m_LeftPressed = true;
};

void Car::stopRight() {
	m_RightPressed = false;
};
void Car::stopLeft() {
	m_LeftPressed = false;
};

void Car::update(float elapsedTime)
{
	if (m_UpPressed)
	{
		m_Position.y -= m_Speed * elapsedTime;
	}

	if (m_DownPressed)
	{
		m_Position.y += m_Speed * elapsedTime;
	}

	if (m_LeftPressed)
	{
		m_Position.x -= (m_Speed * elapsedTime)/2;
	}

	if (m_RightPressed)
	{
		m_Position.x += (m_Speed * elapsedTime)*1.25;
	}
	
	m_Sprite.setPosition(m_Position);

}