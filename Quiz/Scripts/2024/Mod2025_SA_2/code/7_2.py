try:
    a,b,c=6,8,3
    def g(b):
        global c
        a=4
        b+=1
        c=3
        return a+b+c
    
    a,b,c=0,5,4
    print(g(b),a,b,c)
except: print('error')
