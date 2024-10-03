# Sample SFML Game

This is a basic SFML (Simple and Fast Multimedia Library) project demonstrating how to handle focus loss and gain events, as well as rendering frames and updating game logic based on delta time. The project sets up a basic game loop where the window can pause and resume based on the user's interaction with the window focus.

## Features
- **SFML Window**: A 1280x720 window with the title "Sample" is created for rendering.
- **Focus Handling**: 
  - The game is automatically paused when the window loses focus (e.g., when the user clicks away or switches applications).
  - The game resumes when the window regains focus.
- **Delta Time**: The time between frames is tracked to allow smooth frame updates (used for animations, movement, etc.).
- **Basic Game Loop**: The game continues running as long as the window is open.

## Prerequisites
- **SFML Library**: Make sure you have SFML installed on your machine. You can download it from the official [SFML website](https://www.sfml-dev.org/).
- **C++ Compiler**: You need a C++ compiler like g++, clang++, or MSVC to compile the project.

## How to Build and Run

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/sample-sfml-game.git
    cd sample-sfml-game
    ```

2. **Build the Project**:
    If you have SFML installed properly, you can compile the project using g++:
    ```bash
    g++ -c main.cpp
    g++ main.o -o sample -lsfml-graphics -lsfml-window -lsfml-system
    ```

    Make sure to replace the SFML library path if it's located in a different directory.

3. **Run the Executable**:
    ```bash
    ./sample
    ```

## File Structure

- `main.cpp`: Contains the main game loop, event handling (for focus loss and gain), and window rendering logic.

## License
This project is open source under the MIT License. Feel free to use, modify, and distribute the code.

## Additional Notes
- This project is intended as a starting point for handling window events and delta time in an SFML project.
- You can expand upon this by adding game objects, player input handling, and rendering logic.

