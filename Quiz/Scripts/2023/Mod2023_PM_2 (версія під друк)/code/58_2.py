try:
    a,b,c=2,1,7
    def h(b):
        global c
        a=1
        b+=1
        c=4
        return a+b+c
    
    a,b,c=3,1,8
    print(h(b),a,b,c)
    
except: print('error')
