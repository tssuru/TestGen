try:
    #include <iostream>
    
    int f(int c){
        int x = 93;
        if (c == -3) 
            x = 6;
        if (c > 5)
             return 3;
        else
             x = 7;
        return x;
    }
    
    int main(){
        std::cout << f(-1);
        return 0;
    }
    
except: print('error')
