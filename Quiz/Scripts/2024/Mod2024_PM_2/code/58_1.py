try:
    a,b,c=1,9,5
    def f(b):
        global c
        a+=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=3,8,4
    print(f(b),a,b,c)
    
except: print('error')
