class ModelDuck : public Duck {
    public:
        ModelDuck() {
            flyBehavior = new FlyNoWay();
            quackBehavior = new Quack();
        }
        
        void display() {
            std::cout << ("I'm a model duck\n");
        }
};