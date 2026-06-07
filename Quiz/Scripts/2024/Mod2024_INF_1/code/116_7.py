try:
    #include <iostream>
    
    int f(int c){
        int v = 42;
        if (c) 
            v = 1;
        if (c == 0)
             return 9;
        else
             v = 8;
        return v;
    }
    
    int main(){
        std::cout << f(3);
        return 0;
    }
    
except: print('error')
