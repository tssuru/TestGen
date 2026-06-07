try:
    #include <iostream>
    
    int h(int a){
        int z = 21;
        if (a) 
            return 5;
        else if (a != -4)
             z = 8;
        else
             return 5;
        return z;
    }
    
    int main(){
        std::cout << h(4);
        return 0;
    }
    
except: print('error')
