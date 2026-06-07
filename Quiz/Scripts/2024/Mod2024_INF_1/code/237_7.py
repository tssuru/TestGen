try:
    #include <iostream>
    
    int g(int b){
        int x = 35;
        if (b == 5) 
            return 0;
        if (b < 3)
             x = 2;
        else
             return 8;
        return x;
    }
    
    int main(){
        std::cout << g(-3);
        return 0;
    }
    
except: print('error')
