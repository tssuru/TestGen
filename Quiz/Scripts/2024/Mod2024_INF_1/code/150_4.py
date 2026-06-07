try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<0;
    }
    
    int main(){
        std::cout<<(f(-3) || f(-4));
        return 0;
    }
    
except: print('error')
