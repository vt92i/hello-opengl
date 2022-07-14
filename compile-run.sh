#!/bin/bash

gcc -Wall -lglfw -I ./include/ src/glad.c main.c -o hello-gl &&
./hello-gl &&
rm hello-gl