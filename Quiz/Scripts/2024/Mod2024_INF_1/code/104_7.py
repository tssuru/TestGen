try:
    #include <iostream>
    
    int g(int d){
        int y = 69;
        if (d != -1) 
            return 7;
        if (d <= -4)
             y = 8;
        else
             y = 5;
        return y;
    }
    
    int main(){
        std::cout << g(7);
        return 0;
    }
    
except: print('error')
