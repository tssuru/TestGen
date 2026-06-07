try:
    a,b,c=0,8,6
    def f(b):
        global c
        a=1
        b+=5
        c=5
        return a+b+c
    
    a,b,c=2,3,0
    print(f(b),a,b,c)
    
except: print('error')
