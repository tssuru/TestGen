try:
    
    def f(n):
        print("f", end="");
        return n<=-4
    
    print(f(-7) or f(9))
    
except: print('error')
