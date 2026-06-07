try:
    a,b,c=0,3,4
    def g(b):
        global c
        a=3
        b+=1
        c=2
        return a+b+c
    
    a,b,c=7,1,5
    print(g(b),a,b,c)
    
except: print('error')
