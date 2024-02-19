#include "GameClear.h"
#include "Novice.h"

void GameClear::Init() {

}
void GameClear::Update() {
	if (keys_[DIK_RETURN] && !preKeys_[DIK_RETURN]) {
		sceneNo = TITLE;
	}
}
void GameClear::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "Clear!");
}