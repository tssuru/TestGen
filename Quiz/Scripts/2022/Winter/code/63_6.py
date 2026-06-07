try:
    a,b,c=1,2,3
    def h(a):
        global c
        a=3
        b=2
        c=1
        return a+b+c
    
    a,b,c=0,6,4
    print(h(a),a,b,c)
    
except: print('error')
