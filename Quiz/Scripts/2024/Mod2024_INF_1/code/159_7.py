try:
    #include <iostream>
    
    int g(int a){
        int y = 95;
        if (a >= -3) 
            return 6;
        if (a == -4)
             return 3;
        else
             y = 9;
        return y;
    }
    
    int main(){
        std::cout << g(4);
        return 0;
    }
    
except: print('error')
