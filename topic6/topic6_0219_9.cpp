/*
    상속이 필요한 이유를 생각해보자
*/

#include <iostream>

class Player {
private :  
    int x, y;
    int speed;

public :
    Player(int x, int y, int speed)
        : x(x), y(y), speed(speed) {  }

    void Move (int dx, int dy) {
        this->x += dx * speed;
        this->y += dy * speed;
    }

    void ShowPosition() {
        std::cout << x << ", " << y << std::endl;
    }
};

class PlayerHandler { // Player 관리를 위한 클래스이다 (이런 클래스를 컨트롤/매니저 클래스라고 부른다)
private :
    Player* playerList[50]; // 주소를 50개 저장할 수 있는 배열
    int playerNum;

public :
    PlayerHandler()
        : playerNum(0) { }

    void AddPlayer (Player* p) {
        playerList[playerNum++] = p; // 리스트에 플레이어 주소 저장하고 num 늘림
    }

    void ShowAllPlayerPosition() const {
        for (int i = 0; i < playerNum; i++) {
            playerList[i]->ShowPosition();
        }
    }

    ~PlayerHandler(){
        for (int i = 0; i < playerNum; i++) {
            delete playerList[i];
        }
    }
};

int main() {
    PlayerHandler playerHandler;
    playerHandler.AddPlayer(new Player(1, 1, 1)); // new Player이니깐 주소를 반환한다
    playerHandler.AddPlayer(new Player(1, 2, 3));
    playerHandler.AddPlayer(new Player(6, 5, 4));
    playerHandler.ShowAllPlayerPosition();
}

/*
    상속이 필요한 이유가 뭘까?
    
    - 만약에 Player 이외에 Enemy와 NPC가 추가된다면?
    - Enemy와 NPC의 이동 방식이 다르다면?
        - NPC는 이동 불가능, Enemy는 더 빠름
    -> Player와 Enemy와 NPC는 작동 방식이 각자 다를거다
    -> PlayerHandler를 Player와 Enemy와 NPC 전부를 관리할 수 있게끔 만들 수 있지 않을까?
    -> "상속과 다형성"을 이용해 적은 수정만 하자
*/