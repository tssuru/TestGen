try:
    a,b,c=5,4,8
    def g(a):
        global c
        a*=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=2,0,9
    print(g(a),a,b,c)
except: print('error')
