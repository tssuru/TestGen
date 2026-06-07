try:
    a,b,c=0,1,6
    def f(b):
        global c
        a-=4
        b=2
        c=1
        return a+b+c
    
    a,b,c=4,9,5
    print(f(b),a,b,c)
    
except: print('error')
