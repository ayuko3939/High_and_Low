#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time
#include "game.h"

// コンストラクタ
Game::Game() {
    srand(static_cast<unsigned int>(time(0)));  // 乱数初期化
    currentCard = rand() % 13 + 1;  // 1〜13のカード
    score = 0;
    isGameOver = false;
}

// ゲーム開始
void Game::start() {
    std::cout << "ゲーム開始！" << std::endl;
    
    while (!isGameOver) {
        showCard();
        playTurn();
    }
}

// 1ターン進行
void Game::playTurn() {
    char guess;
    std::cout << "次のカードは高い(H)か低い(L)か？: ";
    std::cin >> guess;

    int nextCard = rand() % 13 + 1;
    std::cout << "次のカードは " << nextCard << " でした。" << std::endl;

    bool correct = (guess == 'H' || guess == 'h') ? nextCard > currentCard
                  : (guess == 'L' || guess == 'l') ? nextCard < currentCard
                  : false;

    if (correct) {
        std::cout << "正解！" << std::endl;
        score++;
        currentCard = nextCard;
    } else {
        std::cout << "不正解！" << std::endl;
        isGameOver = true;
    }

    showScore();
}

// 現在のカード表示
void Game::showCard() const {
    std::cout << "現在のカード: " << currentCard << std::endl;
}

// スコア表示
void Game::showScore() const {
    std::cout << "現在のスコア: " << score << std::endl;
}

// スコア取得
int Game::getScore() const {
    return score;
}
