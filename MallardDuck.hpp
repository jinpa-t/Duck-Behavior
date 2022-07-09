class MallardDuck : public Duck {
    public:
        MallardDuck() {
            quackBehavior = new Quack();
            flyBehavior = new FlyWithWings();
        }
        
        void display() {
            std::cout << ("I'm a real Mallard duck\n");
        }
};