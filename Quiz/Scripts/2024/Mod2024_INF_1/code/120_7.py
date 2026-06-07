try:
    #include <iostream>
    
    int f(int d){
        int w = 90;
        if (d) 
            w = 3;
        if (d > -1)
             return 7;
        else
             w = 4;
        return w;
    }
    
    int main(){
        std::cout << f(2);
        return 0;
    }
    
except: print('error')
