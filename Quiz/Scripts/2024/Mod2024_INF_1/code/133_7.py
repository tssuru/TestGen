try:
    #include <iostream>
    
    int h(int c){
        int u = 67;
        if (c <= -2) 
            return 3;
        if (c >= 3)
             u = 1;
        else
             return 4;
        return u;
    }
    
    int main(){
        std::cout << h(-4);
        return 0;
    }
    
except: print('error')
