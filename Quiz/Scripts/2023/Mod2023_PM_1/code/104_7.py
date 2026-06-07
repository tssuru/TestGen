try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(9) or f(-9))
    
except: print('error')
