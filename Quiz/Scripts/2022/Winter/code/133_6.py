try:
    a,b,c=3,9,5
    def f(a):
        global c
        a=4
        b+=5
        c=3
        return a+b+c
    
    a,b,c=6,0,2
    print(f(b),a,b,c)
    
except: print('error')
