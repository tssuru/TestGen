try:
    
    def f(n):
        print("f", end="");
        return n!=-3
    
    print(f(3) or f(-8))
    
except: print('error')
