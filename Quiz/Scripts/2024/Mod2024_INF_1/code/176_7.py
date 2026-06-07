try:
    #include <iostream>
    
    int f(int b){
        int w = 59;
        if (b < 1) 
            return 7;
        if (b >= 3)
             w = 8;
        else
             return 0;
        return w;
    }
    
    int main(){
        std::cout << f(3);
        return 0;
    }
    
except: print('error')
