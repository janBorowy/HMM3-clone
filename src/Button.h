#pragma once
#include "Label.h"

class Button : public Label {
    Sprite borderSprite_;
    unsigned short width_;
    unsigned short height_;
    virtual void handleClick() = 0;

   public:
    Button(std::string text, Renderer const &renderer, int width, int height);
    void draw() const;
    bool handleIfClicked(int cursorX, int cursorY);
};