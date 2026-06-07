try:
    #include <iostream>
    
    int h(int a){
        int z = 72;
        if (a < -1) 
            z = 1;
        else if (a != 1)
             return 5;
        else
             return 2;
        return z;
    }
    
    int main(){
        std::cout << h(-6);
        return 0;
    }
    
except: print('error')
