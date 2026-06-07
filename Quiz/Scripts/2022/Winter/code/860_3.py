try:
    
    def f(n):
        print("f", end="");
        return n!=-2
    
    print(f(7) and f(-5))
    
except: print('error')
