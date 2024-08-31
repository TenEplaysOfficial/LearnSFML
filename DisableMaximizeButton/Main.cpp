#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Windows.h>
#include <iostream>

using namespace sf;
using namespace std;

// Window mid Button
void setWindowStyle(RenderWindow& window) {
	HWND hwnd = window.getSystemHandle(); // Get the native handle

	// Get the current window style
	LONG style = GetWindowLong(hwnd, GWL_STYLE);

	// Remove the maximize button by clearing the WS_MAXIMIZEBOX flag
	style &= ~WS_MAXIMIZEBOX;

	// Set the new style
	SetWindowLong(hwnd, GWL_STYLE, style);

	// Redraw the window with the new style
	SetWindowPos(hwnd, nullptr, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_NOACTIVATE | SWP_FRAMECHANGED);
}


int main() {

	RenderWindow window(VideoMode(1920, 1080), "Sample");

	// window style
	setWindowStyle(window);

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

