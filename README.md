# Hello OpenGL Ubuntu
Minta OpenGL projekt a DE IK PTI Bevezetés a számítógépi grafikába tárgy feladataihoz.

A repository tartalma felhasználható kiindulásként különböző projektek elkészítéséhez Ubuntu (15.10) operációs rendszeren.

## Használat
1. Klónozzuk a repository tartalmát a
  ``
  git clone https://github.com/battila7/hello-opengl-ubuntu
  ``
  parancs segítségével.

2. Lépjünk a ``hello-opengl-ubuntu`` mappába és használjuk a ``make`` parancsot a fordításhoz.
3. A Make sikeres futását követően a ``./hello.out`` paranccsal futtathatjuk a projektet.

![Használat](https://2tiscg-bn1306.files.1drv.com/y3mXixk4pfhs_fB2Lq8mxG8_JJXXqbFaIuRm5buxw5MApkHGfQmXbiPc-suW4ELO9cNGQoNKF5v6Rqga6Ln1zUiZysn0-D13pl1QQfF6J8Hg0V-slG9Se0ERCiiCIpnC-zFXCEcDfs25DmwBVsSGlvAdb9Ss6ZbupjOWbVlHVKnNkY?width=660&height=495&cropmode=none)

# Előkövetelmények
A sikeres fordítás-futtatás előtt telepítenünk kell a megfelelő library-ket, valamint szükségünk van a GLFW-re. 

1. Telepítsük a CMake-et.
   ~~~~
   sudo apt-get install cmake
   ~~~~

  ![CMake](https://cxv6mq-bn1306.files.1drv.com/y3mkFfFXaQZQ3crAAjTmVLsWZvAK8YsQZvk2VpazG0eKA8M_gM5vfUKSFrqwK8xow0Ycpv1n-sQbCSBUxc0sDY9y_4s5TbldjfdYUpL6H_z-54fYKfk2S3v7zFSZztcsoxP_GFv59C426uBpk2AhAxo3p4XQ4eR2c9Yconf48SYQNc?width=660&height=495&cropmode=none)
  
2. Klónozzuk a GLFW repository-t.
   ~~~~
   git clone https://github.com/glfw/glfw
   ~~~~

  ![GLFW](https://2tky3a-bn1306.files.1drv.com/y3mStvKaO0hOJASpz49YgSSWEMH534qnKSO6A2x1svlozia8TTgtuUhdOrkl_ojn6S9xITUtpHW1jVKtriO56s4ST9Ake2tNmj2irn-d4ziCF1w5bv60g3n8slVVQb_BiidDclskSLeoBsdhebgrVTTU4lgx0ZgNSbKTzv231AMUPg?width=660&height=495&cropmode=none)
  
3. Telepítsük a szükséges csomagokat.
   ~~~~
   sudo apt-get install xorg-dev
   sudo apt-get install libglu1-mesa-dev
   ~~~~

  ![Csomagok](https://2tizuq-bn1306.files.1drv.com/y3mUX8oSwFMt31nC8Owf7TQzPc0s8VWTW5pBJccdczPBh2NDyDVM6hBkMrbMEMxltW2ssSR1CRWa5BHU32nuycR7VXLMp2wIXLfAVMtuztidD3Xab5ZB_w6kbKGA2oHnVi4EC8xle65aaZOtducNMFdcQXO4apHW_ZfaecrrD7KHf0?width=660&height=495&cropmode=none)

4. Lépjünk a GLFW-t tartalmazó mappába és használjuk a CMake-et.
   ~~~~
   cd glfw
   cmake .
   ~~~~

  ![GLFW-CMake](https://2tjpog-bn1306.files.1drv.com/y3mE3tvHmHP6v1QPq_-h5HHOv8Cwm8yAZCzB-T8YaCuu4nS-qqvWrgGCcRXMjMfZVdKJ_bu1Flg3BKhqFFfqK9rTaHa9HfmqHyQcTlGFa-GL3Enz5rNnsCTtTVpm3m9-LOHp4ARiY-X9QliECGqxfD9Kd9TRa0XJ5R3_JmxdFzwHH0?width=660&height=495&cropmode=none)
  
5. A Make segítségével fordítsuk le a GLFW-t.
   ~~~~
   make
   ~~~~

  ![Make](https://2tloxq-bn1306.files.1drv.com/y3meX3ppDZ6bc_vT5lSWkqJNzcxNkJkl_BiUxDyv__oMe-iIKHycKq3chS11tiHkHogOpWJDV6y2nRhLIsaGZ7Rr6RkG9EtA4Qy5FqhudZURqO_N6nfWJ9gbxUQxKiZ8Nqq2uk3ACPCntFJYKNE_dbjys2o6ChmtjMTEvrnEXYQXf4?width=660&height=495&cropmode=none)
  
6. A Make-et használva telepítsük (másoljuk a megfelelő helyre) a könyvtárat.
   ~~~~
   make install
   ~~~~

  ![Make Install](https://2tlhfg-bn1306.files.1drv.com/y3mEvLuLbNOB607KOgk9Y0SWx6bxAk1H-YiC1R-fhPy8Qw8sisdieNFZFzS2p3iJpC3kw8C-hKxIF9WH0Q8s6bhIuhbYsWaIRa5AWhncEzfgZLwXDA7YtC_3fe93d2vn82I_y8rjbgNoNQOhQ5uDRjlVxSvCyO_DDKjY4pW_71A0eU?width=660&height=495&cropmode=none)

7. Kész! Most már képesek vagyunk OpenGL-t és GLFW-t használó programok fordítására és futtatására.

## Bővítés
További `.cpp` fájlokkal történő bővítés esetén a megfelelő `.cpp` fájlhoz tartozó `.o` fájlt hozzá kell adni a `Makefile` `OBJS` változójához. Ezen kívül nincs más teendőnk.
