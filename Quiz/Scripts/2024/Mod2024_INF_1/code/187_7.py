try:
    #include <iostream>
    
    int g(int d){
        int u = 91;
        if (d < 2) 
            return 3;
        if (d <= -3)
             u = 6;
        else
             return 0;
        return u;
    }
    
    int main(){
        std::cout << g(-6);
        return 0;
    }
    
except: print('error')
