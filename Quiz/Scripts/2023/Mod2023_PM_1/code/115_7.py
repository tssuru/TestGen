try:
    
    def f(n):
        print("f", end="");
        return n!=-4
    
    print(f(-9) or f(6))
    
except: print('error')
