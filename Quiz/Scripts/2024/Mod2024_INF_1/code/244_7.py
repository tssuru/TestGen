try:
    #include <iostream>
    
    int h(int c){
        int u = 14;
        if (c == -3) 
            u = 6;
        if (c > -1)
             return 8;
        else
             u = 5;
        return u;
    }
    
    int main(){
        std::cout << h(1);
        return 0;
    }
    
except: print('error')
