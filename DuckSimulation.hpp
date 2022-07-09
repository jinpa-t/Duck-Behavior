#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "ModelDuck.hpp"

class DuckSimulation {
    public:
        static void start() {
            Duck *mallard = new MallardDuck();
            mallard->performQuack();
            mallard->performFly();
    
            // to change a duck's behavior at runtime
            // just call the duck's setter method for that behavior
            Duck *model = new ModelDuck();
            model->performFly();
            model->setFlyBehavior(new FlyRocketPowered());
            model->performFly();
        }
};