# SFML Window with Hidden Console

This project demonstrates how to create a simple SFML (Simple and Fast Multimedia Library) application that initializes a graphical window while hiding the console window on a Windows system. The example application creates a full-screen window and performs basic event handling.

## Overview

The project showcases:
- Creating a full-screen SFML window with a resolution of 1920x1080 pixels.
- Hiding the console window that appears by default when running a console application on Windows.
- Basic event handling to close the window when the user requests it.

## Features

- **Full-Screen Window**: The application opens a window with a resolution of 1920x1080 pixels.
- **Hidden Console**: The console window is hidden using the Windows API.
- **Event Handling**: The application handles window close events to allow graceful shutdown.

## Prerequisites

To build and run this project, ensure you have the following installed:

- **SFML**: Simple and Fast Multimedia Library for graphics and window management.
  - Install SFML by following the [official installation guide](https://www.sfml-dev.org/download.php).
- **Windows Operating System**: The `HideConsole()` function relies on the Windows API.
- **C++ Compiler**: A compiler that supports C++11 or higher (e.g., g++, MSVC).
- **CMake** (optional): If using CMake for build configuration.
