# Hello OpenGL Ubuntu

## Előkészületek

A `GLUT` használatához telepíteni kell néhány csomagot, a következő parancs segítségével:

~~~~
sudo apt-get install freeglut3 freeglut3-dev libgl1-mesa-dev libglu1-mesa-dev
~~~~

Esetleg szükséges lehet egy további csomag is:

~~~~
sudo apt-get install binutils-gold
~~~~

## Fordítás

A fordításhoz használd a `make.sh` állományt. Ennek egy paramétert kell megadni, a kimeneti futtatható fájl nevét.
Amennyiben ez a paraméter elhagyásra kerül, az alapértelmezett érték, a `bevgraf` lesz felhasználva.

Például:
~~~
./make.sh circle
~~~

Ennek eredményeként egy `circle.out` futtatható állomány fog a `bin` mappába kerülni.

## Könyvtárstruktúra

A példaprojektet alkotó fájlok a következő elv szerint kerültek elhelyezésre.

### bin
Bináris állományok, mint például a fordítás eredményeként előálló fájl és esetlegesen futáshoz szükséges dinamikusan linkelt könyvtárak.

### include
A fordításhoz szükséges header állományok. További információért lásd a `g++` `-I` kapcsolóját.

### lib
Linkeléshez használt libraryket tartalmazó könyvtár. Lásd a `-L` és `-l` kapcsolókat.

### src
A forrásfájlokat tartalmazó mappa. Ide kell elhelyezni a `.c`, `.cpp` vagy `.cc` fájlokat. Fontos, hogy a `make.sh` **kizárólag** a `.cpp` fájlokat veszi figyelembe!
