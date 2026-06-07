try:
    a,b,c=0,3,6
    def f(a):
        global c
        a=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=1,9,4
    print(f(b),a,b,c)
except: print('error')
