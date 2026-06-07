try:
    def f(a,b):
        c=67
        if b:
            c=3
        elif a==3:
             c=4
        else: 
            return 6
        return c
    
    print(f(-7,3))
    
except: print('error')
