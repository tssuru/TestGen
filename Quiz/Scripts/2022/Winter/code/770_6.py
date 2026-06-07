try:
    a,b,c=5,0,2
    def g(a):
        global c
        a*=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=9,7,1
    print(g(a),a,b,c)
    
except: print('error')
