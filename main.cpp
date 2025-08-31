#include <iostream>
#include "game.h"

int main() {
    std::cout << "=== ハイアンドローゲーム ===" << std::endl;

    Game game;  // Gameクラスのインスタンス生成
    game.start();  // ゲーム開始

    std::cout << "ゲーム終了！" << std::endl;
    std::cout << "最終スコア: " << game.getScore() << std::endl;

    return 0;
}
