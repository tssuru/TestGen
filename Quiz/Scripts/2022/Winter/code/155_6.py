try:
    a,b,c=7,8,9
    def h(a):
        global c
        a=5
        b+=1
        c=4
        return a+b+c
    
    a,b,c=0,1,2
    print(h(b),a,b,c)
    
except: print('error')
