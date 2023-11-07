#include "GraphicsComponent.h"

class BoxComponent : public GraphicsComponent {
    unsigned int size_;

   public:
    BoxComponent(unsigned int size);
    virtual ~BoxComponent() = default;
    virtual void update(RendererPtr const &renderer,
                        PositionComponentPtr &positionComponent) override;
    virtual unsigned int getW() override;
    virtual unsigned int getH() override;
    virtual GraphicsComponent *clone() const override;
};