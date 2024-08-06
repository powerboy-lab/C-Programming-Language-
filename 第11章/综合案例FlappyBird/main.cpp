#include <graphics.h>

#define WINDOWWIDTH  600
#define WINDOWHEIGHT 480

#define PIPIMAGWIDTH 52
#define PIPIMAGHEIGHT 320


#define BIRDIMAGWIDTH 35
#define BIRDIMAGHEIGHT 25

#define PIPINTERVALWIDTH 120
#define PIPINTERVALHEIGHT 100

#define BIRDDOWNSPEED 4
#define BIRDUPSPEED 10

#define PIPSPEED 3
#define PIPNUM 5


typedef struct {
  int x;
  int y;
  PIMAGE pimag;
  int alive;
} bird;


typedef struct {
    int x;
    int upy;
    int downy;
    int upHeight;
    PIMAGE pUpimag;
    PIMAGE pDownimag;

} pip;



void initBird(bird * pBird){
    pBird->pimag = newimage();
	  getimage(pBird->pimag, "res/bird.png");

    pBird->x = 10;
    pBird->y =  180;
    pBird->alive = 1;

}

void initPip(pip *pPipArray){
    pip * pPip;
    int i = 0;
    for(i = 0; i < PIPNUM; i++){
        pPip = pPipArray + i;
        pPip->pUpimag = newimage();
        getimage( pPip->pUpimag, "res/pipe_up.png ");
        pPip->pDownimag = newimage();
        getimage(pPip->pDownimag, "res/pipe_down.png ");

        pPip->upHeight = rand() % 100 + 100;

        pPip->x =  PIPINTERVALWIDTH * i + 30;
        pPip->upy = pPip->upHeight - PIPIMAGHEIGHT;
        pPip-> downy = pPip->upHeight +PIPINTERVALHEIGHT ;

    }


}

void showBird(bird * pBird){
   putimage_withalpha(NULL,pBird->pimag,pBird->x, pBird->y);
}

void showPip(pip *pPipArray){
    int i = 0;
    for(i = 0; i < PIPNUM; i++){
            putimage_withalpha(NULL,pPipArray[i].pUpimag,pPipArray[i].x, pPipArray[i].upy);
            putimage_withalpha(NULL,pPipArray[i].pDownimag,pPipArray[i].x, pPipArray[i].downy);

    }

}



int isBirdLive(bird * pBird,pip *pPipArray){

    int i ;
    int pipEndx,birdEndx;
    for(i = 0; i < PIPNUM; i++){
         pipEndx =  pPipArray[i].x + PIPIMAGWIDTH;
         birdEndx = pBird->x + BIRDIMAGWIDTH;
         if((pBird->x > pPipArray[i].x  &&  pBird->x < pipEndx) ||(birdEndx > pPipArray[i].x  &&  birdEndx < pipEndx)){
                if((pBird->y <  pPipArray[i].upHeight)  || (pBird->y + BIRDIMAGHEIGHT >  pPipArray[i].downy)){
                     return 0;
                }
         }
    }
    return 1;
}


void updateBirdLive(bird * pBird,pip *pPipArray){

     pBird->alive = isBirdLive(pBird,pPipArray);
}

void updateBirdImage(bird * pBird){
        if (kbhit()) {
			if (getch() == 32){
                pBird->y = pBird->y - BIRDUPSPEED;
			}
		}
		else{
                pBird->y = pBird->y + BIRDDOWNSPEED;
       }

}


void updatePip(pip *pPipArray){
    int i = 0;
    for(i = 0; i < PIPNUM; i++){
      pPipArray[i].x = pPipArray[i].x - PIPSPEED;


      if(pPipArray[i].x < -PIPIMAGWIDTH){
        pPipArray[i].x = WINDOWWIDTH;

      }
    }

}


void initMap(PIMAGE pbgimg){
	getimage(pbgimg, "res/bg.png");
}
void  showMap(PIMAGE pbgimg){
    putimage(0, 0,pbgimg);
}

void showGameOver(){
    PIMAGE  poverimg;
    poverimg = newimage();
    getimage(poverimg, "res/game_over.png");
    putimage_withalpha(NULL,poverimg,200, 200);
    delimage(poverimg);
}

int main()
{
        initgraph(WINDOWWIDTH, WINDOWHEIGHT);

        PIMAGE  pbgimg;
        pbgimg = newimage();

        bird  flappyBird;
        pip   piplist[PIPNUM];

        initMap(pbgimg);
        initBird(&flappyBird);
        initPip(piplist);



       while(flappyBird.alive){
           Sleep(50);
           cleardevice();
           showMap(pbgimg);
           showBird(&flappyBird);
           showPip(piplist);
           updateBirdLive(&flappyBird,piplist);
           updateBirdImage(&flappyBird);

           updatePip(piplist);

       }


        showGameOver();

        delimage(pbgimg);
        delimage(flappyBird.pimag);

        int i = 0;
        for(i = 0; i < PIPNUM; i++){
            delimage(piplist[i].pUpimag);
            delimage(piplist[i].pDownimag);
        }


        while(getch() != 'a'){
        };


        closegraph();
        return 0;
}

