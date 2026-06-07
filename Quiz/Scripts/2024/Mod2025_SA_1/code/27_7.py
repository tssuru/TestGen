try:
    def f(a,b):
        c=43
        if b!=-1:
            c=6
        elif a==2:
             c=1
        else: 
            return 4
        return c
    
    print(f(7,3))
except: print('error')
