try:
    
    def f(n):
        print("f", end="");
        return n<=-2
    
    print(f(-9) or f(3))
    
except: print('error')
