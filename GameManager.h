#pragma once
#include <memory>
#include "IScene.h"
#include "StageScene.h"
#include "Title.h"
#include "GameClear.h"
#include "Novice.h"
#include "Input.h"

class GameManager
{
private:
	std::unique_ptr<IScene> sceneArr_[3];
	int currentSceneNo_;
	int prevSceneNo_;

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
public:
	GameManager();
	~GameManager();
	int Run();
};