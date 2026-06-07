try:
    
    def f(n):
        print("f", end="");
        return n!=-4
    
    print(f(-2) or f(1))
    
except: print('error')
