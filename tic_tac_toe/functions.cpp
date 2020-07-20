#include <iostream>
#include <vector>

void greeting() {
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "Welcome to Tic-Tac-Toe!\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    std::cout << "Players will take turns placing X's or O's in open spots. The first to three in a row wins!\n";
    std::cout << "Use number to place your tokens. 1 - 9 going left to right on the board. For example, 3 would place a token in the top right space.\n";
}

void show_board(std::vector<char> board) {
    std::cout << "   |   |   \n";
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    std::cout << "___|___|___\n";
    std::cout << "   |   |   \n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    std::cout << "___|___|___\n";
    std::cout << "   |   |   \n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    std::cout << "   |   |   \n";
}

bool check_win(std::vector<char> win) {
    if (win[0] == win[1] && win[0] == win[2]) {
        return true;
    } else {
        return false;
    }
}

void game_over(bool locked, bool player1) {
    if (locked) {
        std::cout << "Stalemate! No one wins this round.\n";
    } else {
        player1 ? std::cout << "Player 1 wins!\n" : std::cout << "Player 2 wins!\n";
    }
}