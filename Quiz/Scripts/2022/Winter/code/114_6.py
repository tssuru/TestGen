try:
    a,b,c=7,3,6
    def f(b):
        global c
        a-=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=5,0,8
    print(f(b),a,b,c)
    
except: print('error')
