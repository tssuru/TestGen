try:
    a,b,c=6,5,8
    def g(a):
        global c
        a*=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=3,9,7
    print(g(a),a,b,c)
    
except: print('error')
