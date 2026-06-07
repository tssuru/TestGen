try:
    a,b,c=4,1,7
    def f(a):
        global c
        a=2
        b+=1
        c=3
        return a+b+c
    
    a,b,c=3,5,2
    print(f(b),a,b,c)
    
except: print('error')
