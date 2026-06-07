try:
    #include <iostream>
    
    int h(int b){
        int u = 88;
        if (b >= -2) 
            u = 2;
        if (b < -4)
             return 4;
        else
             u = 5;
        return u;
    }
    
    int main(){
        std::cout << h(-1);
        return 0;
    }
    
except: print('error')
