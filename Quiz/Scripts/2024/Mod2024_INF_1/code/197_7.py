try:
    #include <iostream>
    
    int g(int d){
        int v = 89;
        if (d > 5) 
            v = 0;
        if (d < -2)
             return 3;
        else
             v = 6;
        return v;
    }
    
    int main(){
        std::cout << g(5);
        return 0;
    }
    
except: print('error')
