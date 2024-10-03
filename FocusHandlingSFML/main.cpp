#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main() {
    // Create the main application window with a resolution of 1280x720 and the title
    RenderWindow window(VideoMode(1280, 720), "Sample");

    // Clock to keep track of time for deltaTime calculation (used for smooth animation)
    Clock clock;
    // Event object to capture window events like close, focus, etc.
    Event event;

    // Set the initial game state to MainMenu (Assuming this is an enum or constant)
    gameState = MainMenu;

    // Variable to track whether the game is paused (true = paused, false = running)
    bool isPaused = false;

    // Main game loop: Runs as long as the window is open
    while (window.isOpen()) {

        // Calculate the time elapsed since the last frame (delta time)
        float deltaTime = clock.restart().asSeconds();

        // Event handling loop: Process all events in the window's event queue
        while (window.pollEvent(event)) {
            // If the close button is clicked, close the window
            if (event.type == Event::Closed) 
                window.close();

            // Check if the window loses focus (e.g., the user switches to another window)
            if (event.type == Event::LostFocus) {
                // Pause the game when the window loses focus
                isPaused = true;
            }

            // Check if the window gains focus (e.g., the user switches back to this window)
            if (event.type == Event::GainedFocus) {
                // Resume the game when the window regains focus
                isPaused = false;
            }
        }

        // If the game is not paused, update and render the game
        if (!isPaused) {
            // Clear the window before rendering the next frame
            window.clear();

            // (Game updates and rendering would go here, such as drawing the buddy, GUI, etc.)

            // Display the rendered frame
            window.display();
        }
    }

    return 0;
}
