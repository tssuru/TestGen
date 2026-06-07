try:
    #include <iostream>
    
    int f(int d){
        int u = 26;
        if (d >= -3) 
            u = 9;
        else if (d > 2)
             return 2;
        else
             u = 5;
        return u;
    }
    
    int main(){
        std::cout << f(5);
        return 0;
    }
    
except: print('error')
