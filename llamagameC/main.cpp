#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Llama Game v0.001");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen()){

		sf::Event event;
		while (window.pollEvent(event)){
			// check the type of the event...
			switch (event.type){
				// window closed
				case sf::Event::Closed:
					window.close();
					break;
				// mouse button pressed
				case sf::Event::MouseButtonPressed:
					if (event.mouseButton.button == sf::Mouse::Left){
						break;
					}
					if (event.mouseButton.button == sf::Mouse::Right){
						break;
					}
				// key pressed
				case sf::Event::KeyPressed:
					break;
				// joystick button pressed
				case sf::Event::JoystickButtonPressed:
					std::cout << "joystick button pressed!" << std::endl;
					std::cout << "joystick id: " << event.joystickButton.joystickId << std::endl;
					std::cout << "button: " << event.joystickButton.button << std::endl;
					break;
				// we don't process other types of events
				default:
					break;
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}