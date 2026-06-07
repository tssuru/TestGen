try:
    #include <iostream>
    
    int f(int b){
        int v = 85;
        if (b != -2) 
            v = 6;
        if (b > 0)
             return 5;
        else
             v = 8;
        return v;
    }
    
    int main(){
        std::cout << f(9);
        return 0;
    }
    
except: print('error')
