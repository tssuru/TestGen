try:
    #include <iostream>
    
    int f(int d){
        int w = 38;
        if (d) 
            w = 4;
        else if (d == -1)
             w = 9;
        else
             return 7;
        return w;
    }
    
    int main(){
        std::cout << f(6);
        return 0;
    }
    
except: print('error')
