try:
    a,b,c=9,2,8
    def f(b):
        global c
        a=2
        b+=5
        c=1
        return a+b+c
    
    a,b,c=5,7,0
    print(f(b),a,b,c)
    
except: print('error')
