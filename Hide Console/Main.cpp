#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Windows.h>
#include <iostream>

using namespace sf;
using namespace std;

// Hide Console
void HideConsole() {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
}

int main() {

	RenderWindow window(VideoMode(1920, 1080), "Sample");

	HideConsole(); // Hide console

	while (window.isOpen()){
		
		Event event;
		
		while (window.pollEvent(event)) {

			if (event.type == Event::Closed) window.close();

		}

		window.clear();

		window.display();

	}

	return 0;

}

