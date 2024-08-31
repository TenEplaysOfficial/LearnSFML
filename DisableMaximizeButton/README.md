# SFML Window Style Modification

This project demonstrates how to modify the window style of an SFML application to remove the maximize button from the window frame using the Windows API.

## Overview

In this project, we create a simple SFML application and use the Windows API to manipulate the window style. Specifically, we remove the maximize button by adjusting the window style flags. This example serves as a demonstration of integrating SFML with native Windows functionality.

## Features

- Create a window using SFML with a resolution of 1920x1080.
- Remove the maximize button from the window frame using the Windows API.
- Handle basic window events, such as closing the window.

## Dependencies

- SFML (Simple and Fast Multimedia Library)
- Windows API (for style modification)

## Prerequisites

Ensure you have the SFML library and a suitable C++ compiler installed. On Windows, you'll also need the Windows API headers, which are typically available with most standard C++ development environments.

## Compilation

To compile this project, use a C++ compiler with SFML linked. Here's a general guide:

1. **Install SFML:** Download and install SFML from [SFML's official website](https://www.sfml-dev.org/download.php).
2. **Set Up Your Build Environment:** Configure your project to link against SFML libraries. Ensure that you also link against the Windows API.

   For example, using g++, the compilation command might look like:

   ```sh
   g++ -o WindowStyleModification main.cpp -lsfml-graphics -lsfml-window -lsfml-system
