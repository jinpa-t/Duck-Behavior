#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
// fly behaviors
#include "FlyRocketPowered.hpp"
#include "FlyWithWings.hpp"
#include "FlyNoWay.hpp"
// quack behaviors
#include "MuteQuack.hpp"
#include "Quack.hpp"
#include "Squeak.hpp"

class Duck {
    protected:
        FlyBehavior* flyBehavior;
        QuackBehavior* quackBehavior;
    public:
        Duck() {}
        void display();
        
        void performFly() {
            flyBehavior->fly();
        }
        
        void performQuack() {
            quackBehavior->quack();
        }
        
        void swim() {
            std::cout << ("All ducks float, even decoys!\n");
        }

        void setFlyBehavior(FlyBehavior* fb) {
            flyBehavior = fb;
        }
    
        void setQuackBehavior(QuackBehavior* qb) {
            quackBehavior = qb;
        }
};
