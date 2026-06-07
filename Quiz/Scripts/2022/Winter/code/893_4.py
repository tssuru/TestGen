try:
    def f(a,b):
        c=94
        if b:
            c=6
        elif a==5:
             c=5
        else: 
            return 4
        return c
    
    print(f(4,7))
    
except: print('error')
