try:
    #include <iostream>
    
    int f(int d){
        int v = 55;
        if (d >= -1) 
            return 5;
        else if (d == 2)
             return 8;
        else
             v = 4;
        return v;
    }
    
    int main(){
        std::cout << f(8);
        return 0;
    }
    
except: print('error')
