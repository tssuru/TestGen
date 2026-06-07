try:
    a,b,c=8,3,1
    def f(a):
        global c
        a=3
        b+=5
        c=4
        return a+b+c
    
    a,b,c=0,7,5
    print(f(b),a,b,c)
    
except: print('error')
