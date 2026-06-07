try:
    #include <iostream>
    
    int f(int b){
        int u = 46;
        if (b >= -2) 
            return 4;
        if (b < 3)
             u = 6;
        else
             return 1;
        return u;
    }
    
    int main(){
        std::cout << f(-4);
        return 0;
    }
    
except: print('error')
