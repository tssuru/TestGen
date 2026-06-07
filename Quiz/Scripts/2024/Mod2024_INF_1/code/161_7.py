try:
    #include <iostream>
    
    int f(int d){
        int y = 15;
        if (d != 2) 
            y = 6;
        if (d > 1)
             return 7;
        else
             y = 4;
        return y;
    }
    
    int main(){
        std::cout << f(6);
        return 0;
    }
    
except: print('error')
