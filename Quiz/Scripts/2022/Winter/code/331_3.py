try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-9) and f(9))
    
except: print('error')
