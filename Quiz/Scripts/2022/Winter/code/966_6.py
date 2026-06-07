try:
    a,b,c=9,6,5
    def g(a):
        global c
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=3,0,2
    print(g(a),a,b,c)
    
except: print('error')
