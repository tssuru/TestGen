try:
    #include <iostream>
    
    int g(int a){
        int w = 87;
        if (a) 
            return 6;
        if (a > 3)
             w = 5;
        else
             w = 3;
        return w;
    }
    
    int main(){
        std::cout << g(-5);
        return 0;
    }
    
except: print('error')
