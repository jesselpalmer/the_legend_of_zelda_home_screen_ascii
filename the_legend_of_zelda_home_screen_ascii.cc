#include <iostream>

struct Game {
    public:
        void drawScreen();
};

void Game::drawScreen() {
    std::cout << "__                                                      __"<< std::endl;
    std::cout << "| |                                                    | |"<< std::endl;
    std::cout << "| |       *************************************        | |"<< std::endl;
    std::cout << "| |_      *         **--------------          *        | |"<< std::endl;
    std::cout << "|   |     *      THE LEGEND OF    /           *       _| |"<< std::endl;
    std::cout << "|   |     *    Z    E    L    D    A          *      |   |"<< std::endl;
    std::cout << "|   |     *              \\    /               *      |   |"<< std::endl;
    std::cout << "|   |     *  <=========================:::::  *      |   |"<< std::endl;
    std::cout << "|   |___  *                \\/          `---´  *   ___|   |"<< std::endl;
    std::cout << "|      |  *************************************   |      |"<< std::endl;
    std::cout << "|      |                 © 1986 NINTENDO          |      |"<< std::endl;
    std::cout << "|      |                                          |      |"<< std::endl;
    std::cout << "|      |__          PUSH START BUTTON           __|      |"<< std::endl;
    std::cout << "|         |_                                  _|         |"<< std::endl;
    std::cout << "|           |___          _____           __|            |"<< std::endl;
    std::cout << "|               |~~~~~~~~|     |___   ____|              |"<< std::endl;
    std::cout << "|               |~~~~~~~~|         |_|                   |"<< std::endl;
    std::cout << "|               |~~~~~~~~|                               |"<< std::endl;
    std::cout << "|               |~~~~~~~~|                               |"<< std::endl;
    std::cout << "|               |~~~~~~~~|                               |"<< std::endl;
}

int main() {
    Game g;
    g.drawScreen();
    return 0;
}
