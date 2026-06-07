try:
    #include <iostream>
    
    int f(int a){
        int y = 79;
        if (a) 
            return 2;
        else if (a > 5)
             y = 6;
        else
             y = 8;
        return y;
    }
    
    int main(){
        std::cout << f(-9);
        return 0;
    }
    
except: print('error')
