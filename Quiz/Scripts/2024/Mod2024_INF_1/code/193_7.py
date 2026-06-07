try:
    #include <iostream>
    
    int f(int c){
        int w = 49;
        if (c > -5) 
            return 4;
        else if (c >= 4)
             return 1;
        else
             w = 3;
        return w;
    }
    
    int main(){
        std::cout << f(1);
        return 0;
    }
    
except: print('error')
