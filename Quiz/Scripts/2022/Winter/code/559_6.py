try:
    a,b,c=6,3,0
    def g(a):
        global c
        a=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=1,7,4
    print(g(a),a,b,c)
    
except: print('error')
