try:
    #include <iostream>
    
    int f(int d){
        int z = 63;
        if (d <= 5) 
            return 5;
        else if (d >= -1)
             z = 7;
        else
             return 0;
        return z;
    }
    
    int main(){
        std::cout << f(1);
        return 0;
    }
    
except: print('error')
