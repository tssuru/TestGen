try:
    
    def f(n):
        print("f", end="");
        return n!=-3
    
    print(f(-6) and f(7))
    
except: print('error')
