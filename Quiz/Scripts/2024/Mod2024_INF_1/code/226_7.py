try:
    #include <iostream>
    
    int h(int b){
        int x = 28;
        if (b) 
            return 7;
        if (b <= -2)
             x = 1;
        else
             return 8;
        return x;
    }
    
    int main(){
        std::cout << h(3);
        return 0;
    }
    
except: print('error')
