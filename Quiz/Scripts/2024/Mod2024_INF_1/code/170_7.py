try:
    #include <iostream>
    
    int g(int b){
        int v = 33;
        if (b) 
            v = 6;
        if (b < -2)
             return 0;
        else
             v = 3;
        return v;
    }
    
    int main(){
        std::cout << g(-5);
        return 0;
    }
    
except: print('error')
