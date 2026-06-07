try:
    a,b,c=4,1,3
    def f(a):
        global c
        a+=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=6,0,9
    print(f(b),a,b,c)
    
except: print('error')
