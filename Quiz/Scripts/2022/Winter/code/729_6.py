try:
    a,b,c=5,3,1
    def g(b):
        global c
        a*=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=6,4,8
    print(g(a),a,b,c)
    
except: print('error')
