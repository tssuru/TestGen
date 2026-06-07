try:
    a,b,c=8,9,4
    def f(a):
        global c
        a=4
        b*=1
        c=5
        return a+b+c
    
    a,b,c=2,5,3
    print(f(b),a,b,c)
    
except: print('error')
