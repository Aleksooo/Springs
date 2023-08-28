#include "Point.hpp"

Point::Point() : pos(0, 0), type("static"), radius(10) {}
Point::Point(vec pos_, std::string type_, double radius_, sf::Color color_) : pos(pos_), type(type_), radius(radius_), color(color_) {}

void Point::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    sf::CircleShape point(radius);
    point.setPosition(pos);
    point.setFillColor(color);

    target.draw(point, states);
}
