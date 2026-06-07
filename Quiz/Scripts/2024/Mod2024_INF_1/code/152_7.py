try:
    #include <iostream>
    
    int g(int a){
        int u = 25;
        if (a <= 4) 
            return 3;
        if (a == -5)
             u = 4;
        else
             return 2;
        return u;
    }
    
    int main(){
        std::cout << g(2);
        return 0;
    }
    
except: print('error')
