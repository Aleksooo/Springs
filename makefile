PATH = src
SFML_PATH = /opt/homebrew/Cellar/sfml/2.6.0
CC = g++
VERSION = -std=c++2a
FLAGS = -Wall

FILES = $(PATH)/main.cpp  $(PATH)/handler.cpp $(PATH)/Point.cpp

all:
	$(CC) $(VERSION) $(FLAGS) $(FILES) -o main -I$(SFML_PATH)/include -L$(SFML_PATH)/lib -lsfml-graphics -lsfml-window -lsfml-system
