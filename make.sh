#!/bin/sh

executable=$1

if [ -z "$executable" ]; then
  echo "Nincs megadva kimeneti fajl! Az alapertelmezett ertek lesz hasznalva: bevgraf"

  executable="bevgraf"
fi

# output the command with substituted variable
set -x

g++ src/*.cpp -I"./include/" -L"./lib/" -lGL -lglut -lGLU -o ./bin/${executable}.out
