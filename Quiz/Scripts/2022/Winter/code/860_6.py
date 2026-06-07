try:
    a,b,c=2,8,7
    def g(a):
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,3,4
    print(g(a),a,b,c)
    
except: print('error')
