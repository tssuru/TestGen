try:
    #include <iostream>
    
    int g(int c){
        int x = 60;
        if (c >= -2) 
            return 4;
        else if (c < 2)
             return 7;
        else
             x = 3;
        return x;
    }
    
    int main(){
        std::cout << g(1);
        return 0;
    }
    
except: print('error')
