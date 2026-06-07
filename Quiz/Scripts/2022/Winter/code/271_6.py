try:
    a,b,c=0,4,9
    def f(a):
        global c
        a+=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=6,1,8
    print(f(b),a,b,c)
    
except: print('error')
