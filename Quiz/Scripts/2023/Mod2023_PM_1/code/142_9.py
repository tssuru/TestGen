try:
    a,b,c=2,8,0
    def g(b):
        a=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=4,1,7
    print(g(a),a,b,c)
    
except: print('error')
