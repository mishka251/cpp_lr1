#include <iostream>
#include "lib/graphics.h"

int main() {
    initwindow(500, 600);

    setfillstyle(SOLID_FILL, WHITE);
    bar(0, 0, 500, 600); // белый фон

    setcolor(LIGHTGREEN);
    outtextxy(200, 10, "Tree.");


    setcolor(BROWN); // коричневый ствол
    rectangle(190, 450, 250, 490);
    moveto(190, 450);
    lineto(220, 150);
    lineto(250, 450);

    setfillstyle(LTSLASH_FILL, BROWN); // зальем крышу желтым
    floodfill(220, 440, BROWN);
    setfillstyle(XHATCH_FILL, BROWN);
    floodfill(220, 460, BROWN);

    //и ветки
    moveto(225, 200);
    lineto(280, 190);
    lineto(226, 220);

    setfillstyle(XHATCH_FILL, BROWN);
    floodfill(240, 200, BROWN);

    moveto(232, 300);
    lineto(320, 290);
    lineto(237, 320);

    setfillstyle(XHATCH_FILL, BROWN);
    floodfill(250, 300, BROWN);


    moveto(215, 200);
    lineto(160, 190);
    lineto(214, 220);

    setfillstyle(XHATCH_FILL, BROWN);
    floodfill(200, 200, BROWN);

    moveto(208, 300);
    lineto(120, 290);
    lineto(203, 320);

    setfillstyle(XHATCH_FILL, BROWN);
    floodfill(190, 300, BROWN);

    arc(220, 260, 278,262, 170);//листва

    setfillstyle(WIDE_DOT_FILL, LIGHTGREEN);
    floodfill(100, 260, BROWN);

    delay(1000 * 1);


    for(int i =0; i< 10; i++){
        void *image;
        int size = imagesize (0, 0, 500, 600);
        image = malloc(size);
        getimage(0, 0, 500, 600, image);

        putimage(10, 10, image, COPY_PUT);
        delay(1000 * 2);
    }



    closegraph(); // закрыть окно


    return 0;
}



















//#include <conio.h>
//#include "lib/graphics.h"
//#include <stdlib.h>
//
//void box (int, int, int, int, int);
//
//int main(void)
//{
////    int driver, mode;
//    unsigned size;
//    void *buf;
////    driver = DETECT; /* автоопределение */
////    mode = 0;
////    initgraph(&driver, &mode, "c:\\bc5\\bgi");
//initwindow(440, 500);
//    box(20, 20, 200, 200, 15);
//    setcolor(RED);
//    line (20, 20, 200, 200);
//    setcolor(GREEN);
//    line(20, 200, 200, 20);
//    getch ();
//
//    /* перемещение изображения */
//
//    /* сначала получение размера изображения */
//    size = imagesize (20, 20, 200, 200);
//    if(size != 0xffff) { /* выделение памяти для изображения */
//        buf = malloc(size);
//        if(buf) {
//            getimage(20, 20, 200, 200, buf);
//            putimage(100, 100, buf, COPY_PUT);
//            putimage(300, 50, buf, COPY_PUT);
//        }
//    }
//    outtext("press a key");
//    getch();
//    restorecrtmode();
//    return 0;
//}
//
///* вывод прямоугольника по координатам его двух углов */
//void box (int startx, int starty, int endx, int endy, int color)
//{
//    setcolor(color);
//    rectangle(startx, starty, endx, endy);
//}