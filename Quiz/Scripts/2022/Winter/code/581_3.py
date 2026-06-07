try:
    
    def f(n):
        print("f", end="");
        return n!=3
    
    print(f(-4) or f(3))
    
except: print('error')
