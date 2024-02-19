#pragma once
#include "IScene.h"

class GameClear :public IScene
{
public:
    void Init()override;
    void Update()override;
    void Draw()override;
};
