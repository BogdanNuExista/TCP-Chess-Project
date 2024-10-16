#ifndef __UI_H__
#define __UI_H__

#include <raylib.h>

typedef struct Position Position;
typedef struct Piece Piece;
typedef struct Square Square;
typedef struct PossibleMoves PossibleMoves;

void run_ui(int socket);
void move_pawn(int from_x, int from_y, int to_x, int to_y);
void deserialize_board(char* game_state);

#endif // __UI_H__