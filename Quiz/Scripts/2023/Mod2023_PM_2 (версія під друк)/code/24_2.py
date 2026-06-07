try:
    a,b,c=0,4,1
    def h(a):
        global c
        a=3
        b=2
        c=3
        return a+b+c
    
    a,b,c=7,3,7
    print(h(a),a,b,c)
    
except: print('error')
