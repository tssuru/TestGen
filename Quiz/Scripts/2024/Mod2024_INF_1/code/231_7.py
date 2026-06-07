try:
    #include <iostream>
    
    int g(int b){
        int w = 75;
        if (b != 0) 
            return 9;
        if (b > -1)
             w = 4;
        else
             w = 5;
        return w;
    }
    
    int main(){
        std::cout << g(-2);
        return 0;
    }
    
except: print('error')
