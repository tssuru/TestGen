try:
    
    def f(n):
        print("f", end="");
        return n==0
    
    print(f(3) or f(4))
    
except: print('error')
