try:
    a,b,c=9,2,7
    def f(b):
        global c
        a+=5
        b=1
        c=2
        return a+b+c
    
    a,b,c=5,4,8
    print(f(b),a,b,c)
    
except: print('error')
