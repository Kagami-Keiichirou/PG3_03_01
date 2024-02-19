#include "Title.h"
#include<Novice.h>
void Title::Init() {

}
void Title::Update() {
	if (keys_[DIK_RETURN] && !preKeys_[DIK_RETURN]) {
		sceneNo = STAGE;
	}
}
void Title::Draw() {
	Novice::ScreenPrintf(1280 / 2, 720 / 2, "TitleScene");
}