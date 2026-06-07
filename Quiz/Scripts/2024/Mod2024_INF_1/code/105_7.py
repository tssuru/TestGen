try:
    #include <iostream>
    
    int f(int a){
        int u = 45;
        if (a) 
            return 3;
        else if (a > 0)
             u = 0;
        else
             return 6;
        return u;
    }
    
    int main(){
        std::cout << f(-8);
        return 0;
    }
    
except: print('error')
