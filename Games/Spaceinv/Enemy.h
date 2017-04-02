#ifndef ENEMY_H_
#define ENEMY_H_

#include <SFML/Graphics.hpp>

class Enemy
{
public:
	Enemy(const float x = 0.0f, const float y = 0.0f, const int id = 0, const int row = 0, const int col = 0);
	const bool update(const int num, const sf::Texture& texture);
	sf::Sprite m_enemy;

	inline const int getCol() const { return m_col; };
	inline const bool Enemy::isDestroyed() const { return m_destroyed; }
	inline const bool Enemy::isBottom() const { return m_bottom; }
	inline void Enemy::setDestroyed() { m_destroyed = true; }
	inline void Enemy::setBottom() { m_bottom = true; }
	inline const int Enemy::getId() const { return m_id; }
	inline const int Enemy::isDead() const { return m_lives; }
	inline void Enemy::setLives() { --m_lives; }
	inline const float Enemy::x() const { return m_enemy.getPosition().x; }
	inline const float Enemy::y() const { return m_enemy.getPosition().y; }

private:
	sf::Vector2f velocity;
	sf::IntRect left;
	sf::IntRect front;
	sf::IntRect right;
	sf::IntRect explo1;
	sf::IntRect explo2;
	sf::IntRect explo3;
	int m_lives;
	int m_id;
	int m_row;
	int m_col;
	bool m_destroyed;
	bool m_bottom;
};

#endif // ENEMY_H_
