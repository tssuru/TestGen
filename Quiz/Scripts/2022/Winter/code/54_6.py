try:
    a,b,c=8,7,5
    def h(a):
        global c
        a+=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=0,1,3
    print(h(b),a,b,c)
    
except: print('error')
