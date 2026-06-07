try:
    #include <iostream>
    
    int g(int a){
        int u = 98;
        if (a <= -3) 
            u = 8;
        else if (a >= 4)
             return 4;
        else
             return 5;
        return u;
    }
    
    int main(){
        std::cout << g(2);
        return 0;
    }
    
except: print('error')
