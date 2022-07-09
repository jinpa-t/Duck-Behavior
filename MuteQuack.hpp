class MuteQuack : public QuackBehavior {
    public:
        void quack() {
            std::cout << ("<<Silence>>\n");
        }
};
