try:
    #include <iostream>
    
    int f(int d){
        int u = 56;
        if (d == 3) 
            u = 2;
        else if (d >= 1)
             return 4;
        else
             u = 5;
        return u;
    }
    
    int main(){
        std::cout << f(-6);
        return 0;
    }
    
except: print('error')
