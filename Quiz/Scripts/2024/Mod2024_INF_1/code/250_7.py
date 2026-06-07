try:
    #include <iostream>
    
    int f(int c){
        int x = 99;
        if (c) 
            return 0;
        else if (c > -3)
             x = 4;
        else
             x = 6;
        return x;
    }
    
    int main(){
        std::cout << f(0);
        return 0;
    }
    
except: print('error')
