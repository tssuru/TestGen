try:
    #include <iostream>
    
    int f(int a){
        int u = 80;
        if (a == 2) 
            u = 9;
        else if (a >= -1)
             return 4;
        else
             u = 0;
        return u;
    }
    
    int main(){
        std::cout << f(-8);
        return 0;
    }
    
except: print('error')
