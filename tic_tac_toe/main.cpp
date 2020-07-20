#include <iostream>
#include <vector>
#include "functions.hpp"

int main() {
    bool game               = true;
    bool player1            = true;
    bool locked             = true;
    int placement;
    std::vector<char> board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    std::vector<char> win1 = {' ', ' ', ' '};
    std::vector<char> win2 = {' ', ' ', ' '};
    std::vector<char> win3 = {' ', ' ', ' '};
    std::vector<char> win4 = {' ', ' ', ' '};
    std::vector<char> win5 = {' ', ' ', ' '};
    std::vector<char> win6 = {' ', ' ', ' '};
    std::vector<char> win7 = {' ', ' ', ' '};
    std::vector<char> win8 = {' ', ' ', ' '};

    greeting();

    while (game) {
        show_board(board);
        std::cout << "Where would you like to play? \n";
        std::cin >> placement;
        switch(placement) {
            case 1:
                if (board[0] == ' ') {
                    board[0] = player1 ? 'X' : 'O';
                    win1[0] = player1 ? 'X' : 'O';
                    win4[0] = player1 ? 'X' : 'O';
                    win7[0] = player1 ? 'X' : 'O';
                    if (check_win(win1) || check_win(win4) || check_win(win7)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
                
            case 2:
                if (board[1] == ' ') {
                    board[1] = player1 ? 'X' : 'O';
                    win1[1] = player1 ? 'X' : 'O';
                    win5[0] = player1 ? 'X' : 'O';
                    if (check_win(win1) || check_win(win5)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            case 3:
                if (board[2] == ' ') {
                    board[2] = player1 ? 'X' : 'O';
                    win1[3] = player1 ? 'X' : 'O';
                    win6[0] = player1 ? 'X' : 'O';
                    win8[0] = player1 ? 'X' : 'O';
                    if (check_win(win1) || check_win(win6) || check_win(win8)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            case 4:
                if (board[3] == ' ') {
                    board[3] = player1 ? 'X' : 'O';
                    win2[0] = player1 ? 'X' : 'O';
                    win4[1] = player1 ? 'X' : 'O';
                    if (check_win(win2) || check_win(win4)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            case 5:
                if (board[4] == ' ') {
                    board[4] = player1 ? 'X' : 'O';
                    win2[1] = player1 ? 'X' : 'O';
                    win5[1] = player1 ? 'X' : 'O';
                    win7[1] = player1 ? 'X' : 'O';
                    win8[1] = player1 ? 'X' : 'O';
                    if (check_win(win2) || check_win(win5) || check_win(win7) || check_win(win8)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            case 6:
                if (board[5] == ' ') {
                    board[5] = player1 ? 'X' : 'O';
                    win2[2] = player1 ? 'X' : 'O';
                    win6[1] = player1 ? 'X' : 'O';
                    if (check_win(win2) || check_win(win6)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            case 7:
                if (board[6] == ' ') {
                    board[6] = player1 ? 'X' : 'O';
                    win4[2] = player1 ? 'X' : 'O';
                    win3[0] = player1 ? 'X' : 'O';
                    win8[2] = player1 ? 'X' : 'O';
                    if (check_win(win4) || check_win(win3) || check_win(win8)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            case 8:
                if (board[7] == ' ') {
                    board[7] = player1 ? 'X' : 'O';
                    win5[2] = player1 ? 'X' : 'O';
                    win3[1] = player1 ? 'X' : 'O';
                    if (check_win(win5) || check_win(win3)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            case 9:
                if (board[8] == ' ') {
                    board[8] = player1 ? 'X' : 'O';
                    win6[2] = player1 ? 'X' : 'O';
                    win3[2] = player1 ? 'X' : 'O';
                    win7[2] = player1 ? 'X' : 'O';
                    if (check_win(win6) || check_win(win3) || check_win(win7)) {
                        game = false;
                    } else {
                        player1 = !player1;
                    }
                    break;
                } else {
                    std::cout << "That spot is already taken! Please choose another: \n";
                    std::cin >> placement;
                    break;
                }
            default:
                std::cout << "Please enter a valid board location\n";
                std::cin >> placement;
                break;
        }
        
        for (int i = 0; i < board.size(); i++) {
            if (board[i] == ' ') {
                locked = false;
            }
        }
    }
    game_over(locked, player1);
    show_board(board);
}
