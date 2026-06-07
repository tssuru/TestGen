try:
    a,b,c=9,4,8
    def f(b):
        global c
        a-=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=1,6,2
    print(f(b),a,b,c)
    
except: print('error')
