try:
    #include <iostream>
    
    int g(int b){
        int y = 16;
        if (b <= 3) 
            return 6;
        else if (b != -5)
             return 2;
        else
             y = 0;
        return y;
    }
    
    int main(){
        std::cout << g(-6);
        return 0;
    }
    
except: print('error')
