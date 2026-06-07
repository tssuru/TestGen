try:
    
    def f(n):
        print("f", end="");
        return n>=-4
    
    print(f(-5) or f(-7))
    
except: print('error')
