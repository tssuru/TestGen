try:
    def f(a,b):
        c=96
        if a<=2:
            return 9
        elif a==3:
             c=0
        else: 
            c=7
        return c
    
    print(f(5,-9))
    
except: print('error')
