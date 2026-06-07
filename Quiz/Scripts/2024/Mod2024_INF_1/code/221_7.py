try:
    #include <iostream>
    
    int g(int a){
        int v = 22;
        if (a <= -4) 
            return 9;
        if (a != 5)
             v = 6;
        else
             return 0;
        return v;
    }
    
    int main(){
        std::cout << g(-9);
        return 0;
    }
    
except: print('error')
