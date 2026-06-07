try:
    #include <iostream>
    
    int f(int c){
        int x = 73;
        if (c == -3) 
            return 4;
        if (c == -5)
             return 8;
        else
             x = 7;
        return x;
    }
    
    int main(){
        std::cout << f(-7);
        return 0;
    }
    
except: print('error')
