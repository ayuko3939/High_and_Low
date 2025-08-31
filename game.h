#ifndef GAME_H
#define GAME_H

class Game {
private:
    int currentCard;   // 現在のカード
    int score;         // 現在のスコア
    bool isGameOver;   // ゲーム終了フラグ

public:
    Game();            // コンストラクタ
    void start();      // ゲーム開始
    void playTurn();   // 1ターン進行
    void showCard() const;  // 現在のカード表示
    void showScore() const; // スコア表示
    int getScore() const;   // スコア取得
};

#endif // GAME_H
