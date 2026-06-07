try:
    a,b,c=7,8,6
    def f(b):
        global c
        a+=3
        b=1
        c=3
        return a+b+c
    
    a,b,c=4,1,3
    print(f(b),a,b,c)
    
except: print('error')
