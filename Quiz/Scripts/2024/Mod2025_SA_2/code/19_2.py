try:
    a,b,c=7,2,9
    def f(b):
        global c
        a=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=0,8,6
    print(f(b),a,b,c)
except: print('error')
