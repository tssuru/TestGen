try:
    a,b,c=3,6,8
    def g(a):
        a=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=4,5,0
    print(g(a),a,b,c)
    
except: print('error')
