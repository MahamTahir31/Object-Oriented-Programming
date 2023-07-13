class abc{
    public:
        int a;
        float c;
    abc(){
        a = 1;
        b = 2;
        c = 3.3;
    }
    private:
        int b;
        abc(int a , int b, float c){
            this->a = a;
            this->b = b;
            this->c = c;

        }
    
};