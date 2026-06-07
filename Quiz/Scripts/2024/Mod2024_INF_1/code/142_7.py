try:
    #include <iostream>
    
    int g(int b){
        int v = 37;
        if (b) 
            return 8;
        else if (b < 0)
             v = 4;
        else
             return 0;
        return v;
    }
    
    int main(){
        std::cout << g(-3);
        return 0;
    }
    
except: print('error')
