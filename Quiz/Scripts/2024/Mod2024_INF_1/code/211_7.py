try:
    #include <iostream>
    
    int g(int a){
        int v = 54;
        if (a) 
            return 5;
        else if (a <= -5)
             return 3;
        else
             v = 6;
        return v;
    }
    
    int main(){
        std::cout << g(-7);
        return 0;
    }
    
except: print('error')
