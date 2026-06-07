try:
    
    def f(n):
        print("f", end="");
        return n<=0
    
    print(f(0) or f(3))
    
except: print('error')
