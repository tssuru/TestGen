try:
    
    def f(n):
        print("f", end="");
        return n<=-3
    
    print(f(-9) and f(3))
    
except: print('error')
