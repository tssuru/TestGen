try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n>0;
    }
    
    int main(){
        std::cout<<(f(2) || f(-5));
        return 0;
    }
    
except: print('error')
