// cc game.c libraylib.a -framework cocoa -framework IOKit

#include "raylib.h"

int main(){
    InitWindow (800, 600, "live jump!");    
    SetTargetFPS(60);

    int y = 300;
    int ys = 20;        
    int tx = 800;






    while( !WindowShouldClose() ){
     BeginDrawing();
            y = y - ys;
            if (IsKeyPressed(KEY_SPACE)){
                ys = 30;
            }

        if (600-40 < y){
            y = 600-40;
            ys = 0;
        }else{
            ys = ys - 1;
        }
        tx = tx - 2;

        int 😇 = CheckCollisionCircles(
        (Vector2){400,y}, 40, 
        (Vector2){tx, 600-40}, 40);
        if(😇){
            break;
        }

        ClearBackground((Color){40, 255, 180, 255});
        DrawCircle(tx, 600-40, 40, RED);
        DrawCircle(400, y, 40, BLUE);
        EndDrawing();   
    }

    CloseWindow();
    return 0;

    


}
