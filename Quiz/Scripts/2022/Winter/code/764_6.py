try:
    a,b,c=4,3,7
    def g(a):
        global c
        a*=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=5,2,0
    print(g(a),a,b,c)
    
except: print('error')
