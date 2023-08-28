#include "handler.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Drawable.hpp>

#ifndef POINT

class Point : public sf::Drawable {
public:
    Point();
    Point(vec pos_, std::string type_, double radius_, sf::Color color_);

private:
    vec pos;
    std::string type;
    double radius;
    sf::Color color;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif
