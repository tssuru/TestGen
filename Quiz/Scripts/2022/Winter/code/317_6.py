try:
    a,b,c=7,9,6
    def f(a):
        global c
        a=2
        b-=5
        c=1
        return a+b+c
    
    a,b,c=4,0,2
    print(f(b),a,b,c)
    
except: print('error')
