try:
    #include <iostream>
    
    int f(int c){
        int z = 66;
        if (c < 2) 
            z = 3;
        else if (c > -3)
             return 7;
        else
             z = 0;
        return z;
    }
    
    int main(){
        std::cout << f(6);
        return 0;
    }
    
except: print('error')
