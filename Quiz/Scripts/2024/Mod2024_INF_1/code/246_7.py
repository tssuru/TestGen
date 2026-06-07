try:
    #include <iostream>
    
    int g(int a){
        int v = 27;
        if (a >= -4) 
            return 7;
        else if (a <= 0)
             v = 9;
        else
             v = 4;
        return v;
    }
    
    int main(){
        std::cout << g(8);
        return 0;
    }
    
except: print('error')
