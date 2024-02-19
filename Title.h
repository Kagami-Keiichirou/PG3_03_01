#pragma once
#include "IScene.h"

class Title :
    public IScene
{
public:
    void Init()override;
    void Update()override;
    void Draw()override;
};