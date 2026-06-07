try:
    
    def f(n):
        print("f", end="");
        return n>-2
    
    print(f(7) and f(-9))
    
except: print('error')
