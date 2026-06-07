try:
    #include <iostream>
    
    int f(int b){
        int x = 81;
        if (b) 
            x = 7;
        if (b == -1)
             return 2;
        else
             x = 9;
        return x;
    }
    
    int main(){
        std::cout << f(-8);
        return 0;
    }
    
except: print('error')
