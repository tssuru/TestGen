try:
    a,b,c=1,7,8
    def f(b):
        global c
        a=3
        b+=4
        c=1
        return a+b+c
    
    a,b,c=9,5,0
    print(f(b),a,b,c)
    
except: print('error')
