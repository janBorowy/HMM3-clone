#pragma once

class MapObject {
   public:
    enum Type { NONE, GOLD, WOOD, ORE };

   private:
    Type type_;
    int value_;

   public:
    MapObject(Type type, int value);
    Type type() const;
    int value() const;
};