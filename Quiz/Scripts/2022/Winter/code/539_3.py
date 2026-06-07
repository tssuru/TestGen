try:
    
    def f(n):
        print("f", end="");
        return n!=0
    
    print(f(-4) or f(8))
    
except: print('error')
