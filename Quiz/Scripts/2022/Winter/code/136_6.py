try:
    a,b,c=7,5,4
    def f(b):
        global c
        a=2
        b+=5
        c=3
        return a+b+c
    
    a,b,c=8,3,6
    print(f(b),a,b,c)
    
except: print('error')
