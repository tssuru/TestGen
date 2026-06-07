try:
    a,b,c=8,2,7
    def f(a):
        global c
        a+=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=5,9,6
    print(f(b),a,b,c)
    
except: print('error')
