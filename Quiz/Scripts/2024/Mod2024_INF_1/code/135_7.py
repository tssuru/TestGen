try:
    #include <iostream>
    
    int h(int b){
        int w = 86;
        if (b <= 0) 
            w = 0;
        if (b != 1)
             return 7;
        else
             return 6;
        return w;
    }
    
    int main(){
        std::cout << h(6);
        return 0;
    }
    
except: print('error')
