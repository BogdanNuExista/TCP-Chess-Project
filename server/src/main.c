#include "networking.h"
#include "game_logic.h"
#include <stdio.h>

int main() {
    int server_socket = start_server(8080);
    if (server_socket == -1) {
        printf("Failed to start the server.\n");
        return 1;
    }

    while (1) {
        int player1 = wait_for_connection(server_socket);
        int player2 = wait_for_connection(server_socket);

        if (player1 != -1 && player2 != -1) {
            // Handle a game session between two players
            printf("Starting a new game session.\n");
            handle_game_session(player1, player2);
        }
    }

    return 0;
}
