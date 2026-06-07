try:
    def f(a,b):
        c=75
        if b:
            return 0
        if a>4:
             c=5
        else: 
            return 4
        return c
    
    print(f(-6,6))
    
except: print('error')
