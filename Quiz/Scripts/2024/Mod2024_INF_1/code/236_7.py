try:
    #include <iostream>
    
    int f(int d){
        int v = 29;
        if (d) 
            return 3;
        if (d >= -5)
             v = 4;
        else
             return 7;
        return v;
    }
    
    int main(){
        std::cout << f(5);
        return 0;
    }
    
except: print('error')
