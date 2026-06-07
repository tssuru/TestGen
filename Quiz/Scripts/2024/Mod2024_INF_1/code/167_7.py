try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 56;
        if (b)
            return 5;
        if (a == 0)
             c = 6;
        else 
            c = 9;
        return c;
    }
    
    int main(){
        std::cout << h(5, -1);
        return 0;
    }
    
except: print('error')
