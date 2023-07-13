# D-Bus Native project
>This project demonstates how to write a native D-Bus in C++ programming language

### What does this project do
* Communication between two application to control the color of rectangle through `On` and `Off` buttons

![The communication between 2 applications](docs/assets/Image.png)

* Log out the message with logging's severity and the application name
* Redirect the qt logging system to our custom one

## Prerequistes
    * Qt 
    * GNU/C++
## CLONE Project
* This project is using the form of submodule project. Thus, you need to clone all the submodule to build the project
> git submodule update --init --recursive
## Build and Run process
* Execute  `build.sh` for building and running `run.sh` to observe the interacing between 2 processes