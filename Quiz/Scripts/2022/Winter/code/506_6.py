try:
    a,b,c=5,7,9
    def g(a):
        global c
        a*=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=0,8,3
    print(g(a),a,b,c)
    
except: print('error')
